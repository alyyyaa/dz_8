#include"BigNumber.h"
#include<iostream>
//функция вывода числа
bigNumber::bigNumber()
{
	sign = 0;
	size = 1;
	a = new int[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++)
	{
		a[i] = 0;
	}
}
bigNumber::bigNumber(string s)
{
	sign = 0;
	size = (int)s.length();
	a = new int[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++)
	{
		a[i] = 0;
	}
	for (int i = size - 1, j = 0; i >= 0; i--, j++) //разбор строки с конца 
	{
		a[j] = (int)s[i] - 48;
	}
}
bigNumber::~bigNumber()
{
	delete[]a;
}
void bigNumber::numPrint()
{
	if (sign == -1)
		cout << "-";
	for (int i = size - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
}


void bigNumber::operator -= (const bigNumber& n2)
{
	if (*this > n2) {
		sign = 0;
		for (int i = 0; i < this->size; i++) {
			if (this->a[i] < n2.a[i]) {
				this->a[i] += 10;
				this->a[i + 1] -= 1;
			}
			this->a[i] -= n2.a[i];
		}
	}
	else {
		sign = -1;
		int i;
		for (i = 0; i < n2.size; i++) {
			int x = n2.a[i];
			if (n2.a[i] < this->a[i]) {
				x += 10;
				this->a[i + 1] += 1;
			}
			this->a[i] = x - this->a[i];
		}
	}
	int i = size - 1;
	while (this->a[i] == 0 && i != 0)
	{
		size--;
		i--;
	}
}
bool operator > (const bigNumber& n1, const bigNumber& n2)
{
	if (n1.size > n2.size)
		return true;
	else if (n1.size < n2.size)
		return false;
	for (int i = n1.size - 1; i >= 0; i--) {
		if (n1.a[i] > n2.a[i]) {
			return true;
			break;
		}
		else if (n1.a[i] < n2.a[i]) {
			return false;
			break;
		}
	}
	return false;
}