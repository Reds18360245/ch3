#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

long int fac(int a);

void main(void)
{
	int m, n;
	long int ans, a, b, c;

	cout << "¨求排列組合(m,n)" << endl;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;

	a = fac(m);
	b = fac(n);
	c = fac(m - n);

	ans = a / (b * c);
	cout << "C(" << m << "," << n << ") = " << ans << endl;
	system("PAUSE");
}

long int fac(int p)
{
	int count;
	long int result = 1;
	for (count = 1; count <= p; count++)
	{
		result = result * count;
	}
	return result;
}