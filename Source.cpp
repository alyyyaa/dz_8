//программа для вычитания огромных чисел
#include <iostream>
#include "BigNumber.h"
#include <string>
using namespace std;
int main()
{
	//Числа, ограниченные MAX_SIZE
	string s1;
	string s2;
	cout << "Введите первое число: ";
	cin >> s1;
	cout << endl;
	cout << "Введите второе число: ";
	cin >> s2;
	cout << endl;

	bigNumber n1(s1);
	n1.numPrint();

	bigNumber n2(s2);

	n2.numPrint();
	n1 -= n2;
	cout << endl;
	n1.numPrint();
}

