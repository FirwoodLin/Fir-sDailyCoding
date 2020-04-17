#include <cstring>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool a[25 * 2500 + 5];
int main()
{
	int cnt = 0;
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (c == 'E')
			break;
		if (c == 'W')
			a[++cnt] = 1;
		if (c == 'L')
			a[++cnt] = 0;
	}

	int cnt_w = 0, cnt_l = 0;
	bool flag = 1;
	bool lst = 0;
	for (int i = 1; i <= cnt; i++)
	{
		if (a[i])
			cnt_w++;
		else
			cnt_l++;

		if (abs(cnt_l - cnt_w) >= 2 && (cnt_l >= 11 || cnt_w >= 11))
		{
			printf("%d:%d\n", cnt_w, cnt_l);
			cnt_w = cnt_l = 0;
			flag = 0;
		}
		else if (i == cnt)
		{
			printf("%d:%d\n", cnt_w, cnt_l);
			cnt_w = cnt_l = 0;
			flag = 0;
			lst = 1;
		}
	}
	if (flag|| !lst)
		printf("0:0\n");
	puts("");
	cnt_w = 0, flag = 1;
	for (int i = 1; i <= cnt; i++)
	{
		if (a[i])
			cnt_w++;
		else
			cnt_l++;

		if ((cnt_l >= 21 || cnt_w >= 21) && abs(cnt_l - cnt_w) >= 2)
		{
			printf("%d:%d\n", cnt_w, cnt_l);
			cnt_w = cnt_l = 0;
			flag = 0;
		}
		else if (i == cnt)
		{
			printf("%d:%d\n", cnt_w, cnt_l);
			cnt_w = cnt_l = 0;
			flag = 0;
		}
	}
	if (flag)
		printf("0:0\n");
	return 0;
}
