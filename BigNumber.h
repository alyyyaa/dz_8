#pragma once
#include<string>
using namespace std;
#define MAX_SIZE    100//допустимая длина числа
class bigNumber
{
public:
	bigNumber(); //конструктор класса
	bigNumber(string s); //инициализирует число из большой строки 
	~bigNumber();//деструктор (удаляет пямять, которая была выделена под массив)
	void numPrint();//вывод числа 
	void operator -= (const bigNumber& n2);//вычитание чисел, результат записывается в класс BigNumber
	friend bool operator > (const bigNumber& n1, const bigNumber& n2);//сравнение чисел

protected:
	int* a;//динамический массив под число
	int size;//размер массива
	int sign;//знак числа

};
