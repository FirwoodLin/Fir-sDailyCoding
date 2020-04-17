#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#define W 32
#define H 22
const int SIZE_SK = 30*20;
HANDLE hOut; 
COORD pos= {0, 0}; 
CONSOLE_CURSOR_INFO cur_info = {1, 0};
struct snake {
short x, y; //节点坐标
short md; //节点运动方向
short num; //节点内容
int col; //节点颜色
} snake[30*20];
const short dx[4] = {-1, 1, 0, 0}; //方向 
const short dy[4] = {0, 0, -1, 1}; //方向 
short gamemap[W][H];
short head, tail, score=0;


void initmap(int tm);
void createFood(void);
int getkeys(void);
int move(int idx);
void pntSnake(int i);
void drawEdge(void);
void gameinfo(char *s, int n);


int main(void)
{
int tm = 150; //刷新间隔150毫秒 
hOut = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorInfo(hOut, &cur_info); //隐藏光标 
system("COLOR 2f"); 
initmap(tm);
return 0;
}
void initmap(int tm)
{
short x, y, i, j;
int index, tmp, ret_m;

while (1){
head=0;
tail=-1;
score=0;
//初始化蛇节点随机颜色
srand(time(0));
for (i=0; i<SIZE_SK; i++)
snake[i].col = rand()%8+8 | 0x20;
//初始化地图数组
for (i=0; i<W; i++)
for (j=0; j<H; j++)
gamemap[i][j] = 0;
system("cls");
//绘制边界 
drawEdge();
//打印蛇头
srand(time(0));
do {
x = rand()%(W-2) + 1;
y = rand()%(H-2) + 1;
} while (gamemap[x][y] != 0); //只在空白处生成 
snake[head].x = x; 
snake[head].y = y;
gamemap[x][y] = snake[head].num = 1;
pos.X = x*2; 
pos.Y = y;
SetConsoleCursorPosition(hOut, pos);
printf("█");
//打印食物
createFood();
while ((index=getkeys()) == 4)
Sleep(500);
//循环开始
while (1){
ret_m = move(index);
if (ret_m == 1){
pos.X = 0; pos.Y = H;
SetConsoleCursorPosition(hOut, pos);
printf("哎呀，挂了哦 ^_^");
break;
}
else if (ret_m == 2){
pos.X = 0; pos.Y = H;
SetConsoleCursorPosition(hOut, pos);
printf("哎呀，超神了 ^_^");
break;
}
Sleep(tm);
if ((tmp = getkeys()) != 4)
index = tmp;
}
//菜单代码
puts(" 按w\\s\\a\\d 继续玩，退出请关闭我");
getch();
}
}
void createFood(void)
{
short x, y;
srand(time(0));
do {
x = rand()%(W-2) + 1;
y = rand()%(H-2) + 1;
} while (gamemap[x][y] != 0);
gamemap[x][y] = 2;
pos.X = x*2; pos.Y = y;
SetConsoleCursorPosition(hOut, pos);
SetConsoleTextAttribute(hOut, 0x2f); 
printf("⊙");
}
int getkeys(void) //获取方向键 
{
char ch;
while(kbhit()){
ch = getch();
if(ch == 'w')
return 2;
if(ch == 's')
return 3;
if(ch == 'a')
return 0;
if(ch == 'd')
return 1;
while (kbhit());
}
return 4;
}
int move(int idx)
{
int newx, newy, pt_tail, i;

newx = snake[head].x + dx[idx];
newy = snake[head].y + dy[idx];
switch (gamemap[newx][newy]){
case 0:
if ((head = ++head%SIZE_SK) != tail){ //不相等即蛇节点队列未满
snake[head].x = newx;
snake[head].y = newy;
snake[head].num = 1;
gamemap[newx][newy] = 1; 
tail = ++tail%SIZE_SK;
snake[tail].num = 0; //清除尾部，打印空字符
gamemap[snake[tail].x][snake[tail].y] = 0;
snake[head].md = idx; //存储移动方向 
pt_tail = tail - 1; 
}
else
return 2; //回合结束标记2代表蛇填满空间
break;
case 2: 
if ((head = ++head%SIZE_SK) != tail){ //不相等即蛇节点队列未满
snake[head].x = newx; //head+1后存储新坐标为蛇头 
snake[head].y = newy;
snake[head].num = 1;
gamemap[newx][newy] = 1;
snake[head].md = idx; //存储移动方向
pt_tail = tail = tail%SIZE_SK;
score++;
createFood();
}
break;
case 3:
return 1; //遇到墙壁
case 1:
return 1; //遇到自身
default: ;
}
//打印蛇
if (pt_tail == -1)
pt_tail++;
if (pt_tail < head){ //尾巴在头部后面（这两者是数组索引） 
for (i=pt_tail; i<=head; i++){
pntSnake(i); //打印 
}
}
else{
for (i=pt_tail; i<SIZE_SK; i++)
pntSnake(i); 
for (i=0; i<=head; i++)
pntSnake(i);
}
gameinfo(" 分数", score);
return 0;
}
void pntSnake(int i)
{
//转换x坐标：内部是连续整数，打印时一个字符占位2，所以要2x
pos.X = snake[i].x * 2; 
pos.Y = snake[i].y;
SetConsoleCursorPosition(hOut, pos); 
if (snake[i].num == 0){
putchar('\0'); //清除蛇尾
putchar('\0');}
else if (snake[i].num == 1){
//下面函数第二个参数低4位控制前景色，高4位控制背景色，共8位 
SetConsoleTextAttribute(hOut, snake[i].col); 
printf("█");
}
}
void drawEdge(void)
{
int i;
for (i=0; i<W; i++){
pos.X = i*2; pos.Y = 0;
SetConsoleCursorPosition(hOut, pos);
printf("█");
gamemap[i][pos.Y] = 3;
pos.Y = H-1;
SetConsoleCursorPosition(hOut, pos);
printf("█");
gamemap[i][H-1] = 3;
}
for (i=1; i<H-1; i++){
pos.X = 0; pos.Y = i;
SetConsoleCursorPosition(hOut, pos);
printf("█");
gamemap[pos.X][i] = 3;
pos.X = (W-1)*2;
SetConsoleCursorPosition(hOut, pos);
printf("█");
gamemap[W-1][i] = 3;
} 
}
void gameinfo(char *s, int n)
{
pos.X = 0; pos.Y = H;
SetConsoleCursorPosition(hOut, pos);
SetConsoleTextAttribute(hOut, 0x2f); 
printf(" 贪吃蛇");
printf(" %s: %d", s, n);
}
//————————————————
//版权声明：本文为CSDN博主「乡村杀马特」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/acdsxzsdaffvgscds/article/details/81205309
