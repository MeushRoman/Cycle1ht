#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <cmath>

using namespace std;

int main()

{
	//83a
	int a = 10, i, q;
	float z = 0;

	cout << "a = ";
	cin >> a;

	for (int i = 1; z <= a; i++)
	{
		z = z + 1.0 / i;
	}
	printf("83a \tres = %f\n", z);

	//83b

	cout << "a = ";
	cin >> a;
	z = 0;
	for (int i = 1; z < a; i++)
	{
		z = z + 1.0 / i;
		//cout << z << endl;
		q = i;

	}
	cout <<"83b \t"<< q << endl;

	//79

	double sum = 0, res = 1;

	for (float i = 0; i <= 10; i += 0.1)
	{
		res = res * (1 + sin(i));
	}

	printf("\n79 ht \tres = %.97f\n\n", res);

	// 80;

	int x, n = 1, y = 13;

	float res1 = 0;

	cout << "x = ";
	cin >> x;


	for (int i = 1; i <= 13; i += 2)
	{
		n = 1;

		for (int j = 1; j <= i; j++)
		{
			n = n*j;
		}

		(i == 3 || i == 7 || i == 11) ? res1 = res1 - pow(x, i) / n : res1 = res1 + pow(x, i) / n;

	}

	printf("\n80 ht \tres = %.20f\n", res1);

	return 0;


}