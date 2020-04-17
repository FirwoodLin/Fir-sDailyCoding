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
short x, y; //�ڵ�����
short md; //�ڵ��˶�����
short num; //�ڵ�����
int col; //�ڵ���ɫ
} snake[30*20];
const short dx[4] = {-1, 1, 0, 0}; //���� 
const short dy[4] = {0, 0, -1, 1}; //���� 
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
int tm = 150; //ˢ�¼��150���� 
hOut = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorInfo(hOut, &cur_info); //���ع�� 
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
//��ʼ���߽ڵ������ɫ
srand(time(0));
for (i=0; i<SIZE_SK; i++)
snake[i].col = rand()%8+8 | 0x20;
//��ʼ����ͼ����
for (i=0; i<W; i++)
for (j=0; j<H; j++)
gamemap[i][j] = 0;
system("cls");
//���Ʊ߽� 
drawEdge();
//��ӡ��ͷ
srand(time(0));
do {
x = rand()%(W-2) + 1;
y = rand()%(H-2) + 1;
} while (gamemap[x][y] != 0); //ֻ�ڿհ״����� 
snake[head].x = x; 
snake[head].y = y;
gamemap[x][y] = snake[head].num = 1;
pos.X = x*2; 
pos.Y = y;
SetConsoleCursorPosition(hOut, pos);
printf("��");
//��ӡʳ��
createFood();
while ((index=getkeys()) == 4)
Sleep(500);
//ѭ����ʼ
while (1){
ret_m = move(index);
if (ret_m == 1){
pos.X = 0; pos.Y = H;
SetConsoleCursorPosition(hOut, pos);
printf("��ѽ������Ŷ ^_^");
break;
}
else if (ret_m == 2){
pos.X = 0; pos.Y = H;
SetConsoleCursorPosition(hOut, pos);
printf("��ѽ�������� ^_^");
break;
}
Sleep(tm);
if ((tmp = getkeys()) != 4)
index = tmp;
}
//�˵�����
puts(" ��w\\s\\a\\d �����棬�˳���ر���");
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
printf("��");
}
int getkeys(void) //��ȡ����� 
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
if ((head = ++head%SIZE_SK) != tail){ //����ȼ��߽ڵ����δ��
snake[head].x = newx;
snake[head].y = newy;
snake[head].num = 1;
gamemap[newx][newy] = 1; 
tail = ++tail%SIZE_SK;
snake[tail].num = 0; //���β������ӡ���ַ�
gamemap[snake[tail].x][snake[tail].y] = 0;
snake[head].md = idx; //�洢�ƶ����� 
pt_tail = tail - 1; 
}
else
return 2; //�غϽ������2�����������ռ�
break;
case 2: 
if ((head = ++head%SIZE_SK) != tail){ //����ȼ��߽ڵ����δ��
snake[head].x = newx; //head+1��洢������Ϊ��ͷ 
snake[head].y = newy;
snake[head].num = 1;
gamemap[newx][newy] = 1;
snake[head].md = idx; //�洢�ƶ�����
pt_tail = tail = tail%SIZE_SK;
score++;
createFood();
}
break;
case 3:
return 1; //����ǽ��
case 1:
return 1; //��������
default: ;
}
//��ӡ��
if (pt_tail == -1)
pt_tail++;
if (pt_tail < head){ //β����ͷ�����棨������������������ 
for (i=pt_tail; i<=head; i++){
pntSnake(i); //��ӡ 
}
}
else{
for (i=pt_tail; i<SIZE_SK; i++)
pntSnake(i); 
for (i=0; i<=head; i++)
pntSnake(i);
}
gameinfo(" ����", score);
return 0;
}
void pntSnake(int i)
{
//ת��x���꣺�ڲ���������������ӡʱһ���ַ�ռλ2������Ҫ2x
pos.X = snake[i].x * 2; 
pos.Y = snake[i].y;
SetConsoleCursorPosition(hOut, pos); 
if (snake[i].num == 0){
putchar('\0'); //�����β
putchar('\0');}
else if (snake[i].num == 1){
//���溯���ڶ���������4λ����ǰ��ɫ����4λ���Ʊ���ɫ����8λ 
SetConsoleTextAttribute(hOut, snake[i].col); 
printf("��");
}
}
void drawEdge(void)
{
int i;
for (i=0; i<W; i++){
pos.X = i*2; pos.Y = 0;
SetConsoleCursorPosition(hOut, pos);
printf("��");
gamemap[i][pos.Y] = 3;
pos.Y = H-1;
SetConsoleCursorPosition(hOut, pos);
printf("��");
gamemap[i][H-1] = 3;
}
for (i=1; i<H-1; i++){
pos.X = 0; pos.Y = i;
SetConsoleCursorPosition(hOut, pos);
printf("��");
gamemap[pos.X][i] = 3;
pos.X = (W-1)*2;
SetConsoleCursorPosition(hOut, pos);
printf("��");
gamemap[W-1][i] = 3;
} 
}
void gameinfo(char *s, int n)
{
pos.X = 0; pos.Y = H;
SetConsoleCursorPosition(hOut, pos);
SetConsoleTextAttribute(hOut, 0x2f); 
printf(" ̰����");
printf(" %s: %d", s, n);
}
//��������������������������������
//��Ȩ����������ΪCSDN���������ɱ���ء���ԭ�����£���ѭ CC 4.0 BY-SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https://blog.csdn.net/acdsxzsdaffvgscds/article/details/81205309
