#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include <windows.h>
using namespace std;
#define WIDTH 30
#define HIGTH 20
//Ŀǰλ��
int pos_x = WIDTH / 2;
int pos_y = HIGTH - 2;
//�ӵ�����
int NumBullet = 8;
//�÷�
int Soc = 0;
//����
int speed = 1;
//��ͼ
int map[WIDTH + 10][3];
//��ǰ�ӵ�����
int bull_x[10];
int bull_y[10];
//��ǰ�ӵ�����
int num_bull = 0;
clock_t  lastTime = 0;
//���� �ٶ�
int Speed = 1;
//�ƶ����
void position(int x, int y) {
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
    CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
//���õ�ͼ
void setMap()
{
    int i,j;
    for (i = 0; i < (WIDTH + 10); i++)
    {
        map[i][0] = '*';
        map[i][1] = 'A';
        map[i][2] = 'A';
        if (i == 0 || i == WIDTH)
        {
            map[i][0] = '*';
            map[i][1] = '*';
            map[i][2] = '*';
        }
        if (i == 1 || i == (WIDTH - 1))
        {
            map[i][0] = ' ';
            map[i][1] = ' ';
            map[i][2] = ' ';
        }
    }
    map[5][1] = '@';
    map[9][1] = '@';
    map[15][1] = '@';
    map[20][2] = '@';
}
//��ӡ��ͼ
void initMap()
{
    int i, j;
    for (i = 0; i <= WIDTH; i++)
    {
        for (j = 0; j <= HIGTH; j++)
        {
            if (i == 0 || j == 0 || j == HIGTH || i == WIDTH)
            {
                position(i, j);
                printf("*");
            }
        }
    }
    position(WIDTH + 5, 5); printf("�ӵ�������");

    position(WIDTH + 5, 8); printf("�÷֣�");
}
void BulletMove()
{
    int i;
    for (i = 0; i < num_bull; i++)
    {
        position(bull_x[i], bull_y[i]); printf(" ");
        bull_y[i]--;
        //����
        if (bull_y[i] <1)
        {
            bull_y[i] = bull_y[num_bull];
            bull_x[i] = bull_x[num_bull];
            num_bull--;
        }
        //����
        else if (bull_y[i]== 2|| bull_y[i] == 1)
        {
            if (map[bull_x[i]][bull_y[i]] == '@')
            {
                Soc++;
                NumBullet += 5;
            }
            if (map[bull_x[i]][bull_y[i]] != ' ')
            {
                map[bull_x[i]][bull_y[i]] = ' ';

                bull_y[i] = bull_y[num_bull - 1];
                bull_x[i] = bull_x[num_bull - 1];

                num_bull--;
            }

        }
        position(bull_x[i], bull_y[i]); printf("H");
    }
}
void Move()
{
    clock_t  nowTime;
    nowTime = clock();

    if ((nowTime - lastTime) >= 100)
    {
        BulletMove();
        position(pos_x, pos_y); printf(" ");
        position(pos_x + 1, pos_y + 1); printf(" ");
        position(pos_x - 1, pos_y + 1); printf(" ");

        pos_x += speed;
        lastTime = nowTime;
        if (pos_x <= 2 || (pos_x + 2) >= WIDTH) speed = speed * -1;

        position(pos_x, pos_y); printf("H");
        position(pos_x + 1, pos_y + 1); printf("H");
        position(pos_x - 1, pos_y + 1); printf("H");
    }
}
void CreateBullet()
{
    if (NumBullet <= 0) return;
    NumBullet--;
    bull_x[num_bull] = pos_x - 1;
    bull_y[num_bull] = pos_y;
    num_bull++;
}

void Update()
{


    int i, j;
    position(WIDTH + 15, 5); printf("%d", NumBullet);
    position(WIDTH + 15, 8); printf("%d", Soc);

    //
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < WIDTH - 2; j++)
        {
            position(j,i); printf("%c",map[j][i]);
        }
    }
    Move();
}

int main()
{
    char ch;
    initMap();
    setMap();
    while (1)
    {
        if (_kbhit())
        {
            ch = _getch();
            if (ch = ' ')
            {
                CreateBullet();
            }
        }
        Update();
    }

    return 0;
}
