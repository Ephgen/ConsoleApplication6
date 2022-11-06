// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

//void  hi(int i)
//{
//	if (i == 1)
//		cout << "HI";
//	else
//		cout << "bb";
//}

//int sum(int a, int b)
//{
//	return a + b;  // обязательно, это то что функция возвращает в мэйн
//}

//int Max(int i, int j)
//{
//	if (i > j)
//		return i;
//	else
//		return j;
//}
//int Min(int i, int j)
//{
//	if (i < j)
//		return i;
//	else
//	return j;
//}

//void vivod(int arr[], int i)
//{
// for(int i = 0; sizeof(arr); i++)
//	cout << arr[i] << endl;
//}
//
//int Min(int a, int b, int c, int d)
//{
//	int e;
//	if (a < b)
//		e = a;
//	else
//		e = b;
//	if (e > c)
//		e = c;
//	if (e > d)
//		e = d;
//	return e;	
//}
	
//double power(double a, int n)
//{
//	double c = 1;
//	if (n > 0)
//	{
//		for (int i = 1; i <= n; i++)
//			c *= a;
//		cout << c;
//		return c;
//	}
//	if (n < 0)
//	{
//		for (int i = 1; i <= -n; i++)
//
//			c *= a;
//		c = 1 / c;
//		cout << c;
//		return c;
//	}
//	if (n == 0)
//		cout << "1";	
//}

// Второе решение
//if (n != 1)  // для положительных чисел
//return(a * pow(a - 1));                  //факториал
// ша 


//bool Election(bool x, bool y, bool z) // функция голосования.какие голоса встречаются чаще
//{
//	if (x && y || y && z || x && z)
//	{		
//		cout << " Преобладают положительные голоса";
//		return 1;
//	}
//
//	else
//	{		
//		cout << " Преобладают отриц голоса";
//		return 0;
//	}
//	
//}

//int fact(int a)
//{
//	if (a != 1)
//		return(a * fact(a - 1));	
//}
int fib(int a)
{	
	int f1 = 1;
	int f2 = 1, f3=1;

	if (a == 1) { cout << "1\n"; }
	if (a > 1)
		cout << "1 1 ";
	for (int i = 2; i < a; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		
	}
	cout << f3;
	return f3;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	//{
	//	int a, b, c, d;
	//	cin >> a >> b >> c >> d;
	//	cout << "Min = " << Min(a, b, c, d);
	//}



	/*int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % (50 - 10) + 10;
	vivod(arr);*/


	/*int a, n;
	cin >> a >> n;
	power(a,n);*/

	/*bool x, y, z;
	cin >> x >> y >> z;
	Election(x, y, z);*/

	/*int a;
	cout << "Факториал какого числа надо сделать" << endl;
	cin >> a;
	cout <<fact(a);*/
	int a;
	cout << " Введите порядковый номер числа фибоначи" << endl;
	cin >> a;
	fib(a);
}

