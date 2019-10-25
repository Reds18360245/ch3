#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int Odd(int U);
int Even(int U);
int TotalSum(int U);
int main(void)
{
	int n, Sum = 0;
	char AddChoice;
	printf("1+2+...+n=? 請輸入n=");
	cin >> n;
	printf(" 請問要做奇數和(0), 偶數和(E), 還是整數和(I)? 請選擇 :");
	cin >> AddChoice;
	switch (AddChoice)
	{
	case 'O':
	case 'o':
		Sum = Odd(n);
		break;
	case 'E':
	case 'e':
		Sum = Even(n);
		break;
	case 'I':
	case 'i':
		Sum = TotalSum(n);
		break;
	default:
		cout << "選擇錯誤" << endl;
		return -1;
	}
	printf(" 總和為:%d", Sum);
	system("PAUSE");
	return 0;
}

int Odd(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
	{
		if (i % 2 == 1)
		{
			total += i;
		}
	}
	return total;
}

int Even(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
	{
		if (i % 2 == 0)
		{
			total += i;
		}
	}
	return total;
}

int TotalSum(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
	{
		total += i;
	}
	return total;
}