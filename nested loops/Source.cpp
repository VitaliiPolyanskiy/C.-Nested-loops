#include <iostream>
using namespace std;

int main()
{
	// Вывести на экран таблицу умножения. 
	int i = 1, j;
	while (i <= 10)
	{
		j = 1;
		while (j <= 10)
		{
			cout << i*j << '\t';
			j++;
		}
		cout << '\n';
		i++;
	}
	cout << endl << endl;

	// Написать программу, которая выводит на экран все простые числа из диапазона 1..100.
	i = 2;
	while (i <= 100)
	{
		j = 2;
		while (j <= i / 2)
		{
			if (i % j == 0)
				break;
			j++;
		}
		if (j > i / 2)
			cout << i << '\t';
		i++;
	}
	cout << endl << endl;

	// Написать программу, которая выводит на экран квадрат (пользователь вводит длину стороны), 
	// состоящий из символа '*'.
	int side;
	i = 0;
	cout << "\nEnter a side of the square: ";
	cin >> side;
	cout << '\n';
	while (i < side)
	{
		j = 0;
		while (j < side)
		{
			cout << '*';
			j++;
		}
		cout << '\n';
		i++;
	}
	cout << endl << endl;

	// Условие предыдущей задачи, но фигура внутри пустая.
	i = 0;
	cout << "\nEnter a side of the square: ";
	cin >> side;
	cout << '\n';
	while (i < side)
	{
		j = 0;
		while (j < side)
		{
			if (i == 0 || i == side - 1 || j == 0 || j == side - 1)
				cout << '*';
			else
				cout << ' ';
			j++;
		}
		cout << '\n';
		i++;
	}
	cout << endl << endl;

	i = 0;
	cout << "\nEnter a side of the square: ";
	cin >> side;
	cout << '\n';
	while (i < side)
	{
		j = 0;
		while (j < side)
		{
			if (i == 0 || i == side - 1 || j == 0 || j == side - 1 || 
				i == side / 2 && j < side / 2 || j == side / 2 && i >= side / 2)
				cout << '*';
			else
				cout << ' ';
			j++;
		}
		cout << '\n';
		i++;
	}
	cout << endl << endl;

	return 0;
}