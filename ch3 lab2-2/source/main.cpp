#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

long int rec(int a);

void main(void)
{
	int m, n;
	long int ans, a, b, c;

	cout << "求排列組合c(m,n)" << endl;
	cout << "m=";
	cin >> m;
	cout << "n=";
	cin >> n;

	a = rec(m);
	b = rec(n);
	c = rec(m - n);

	ans = a / (b * c);
	cout << "C(" << m << "," << n << ") = " << ans << endl;
	system("PAUSE");
}

long int rec(int p)
{
	if (p > 1)
	{
		long int result = p * rec(p - 1);
		return result;
	}
	return 1;
}