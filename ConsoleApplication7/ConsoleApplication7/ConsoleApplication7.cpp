// ConsoleApplication7.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void function1(int a, int b);

int main()
{
	int x = 500;
	int y = 1000;

	void(*p)(int a, int b);

	p = function1;

	p(x, y);

	getchar();

    return 0;
}

void function1(int a,int b)
{
	cout << a << '\n';
	cout << b << '\n';

}
