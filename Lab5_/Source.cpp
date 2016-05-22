#include<iostream>
#include"Tovar.h"
using namespace std;
Tovar InitTovar();
Tovar* InitArray(int);
Tovar SearchByName(Tovar*, int);
Tovar Search(Tovar*, int);
int TovarSearch(Tovar*, int, Tovar);
int SortByName(Tovar , Tovar );
void BubbleSort();
const int N = 100;
int main()
{
	int n;
	cout << "Enter size of array:";
	cin >> n;
	InitArray(n);
	system("pause");
	return 0;
}
void Swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void BubbleSort(Tovar* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++);
		{
			if (SortByName(a[j], a[j + 1]) > 0); Swap(a[j + 1], a[j]);
		}
	}
	
}
Tovar InitTovar()
{
	char name[N], brand[N], data[N], storagetime[N], shelftime[N], cost[N];
	Tovar c;
	while (true)
	{
		cout << "Enter the Name of tovar:\n";
		cin.getline(name, N,'\n');
		cin.ignore();
		cout << "Enter the brand:\n";
		cin.getline(brand, N, '\n');
		cin.ignore();
		cout << "Release data:\n";
		cin.getline(data, N, '\n');
		cin.ignore();
		cout << "Storagetime(the number of days):\n";
		cin.getline(data, N, '\n');
		cin.ignore();
		cout << "Shelftime(the number of days):\n";
		cin.getline(data, N, '\n');
		cin.ignore();
		cout << "Cost:\n$";
		cin >> cost;
		cin.ignore();
		break;
	}
	c.SetTovar(name, brand, data, shelftime, cost, storagetime);
	return c;
}

Tovar* InitArray(int n)
{
	Tovar* a = new Tovar[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = InitTovar();
	}
	return a;
}
Tovar SearchByName(Tovar* c, int n)
{
	char a[N];
	Tovar b;
	cout << "Enter The Name of Tovar:";
	cin.getline(a, N, '\n');
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(c[i].GetName(), a))
		{
			b = c[i]; break;
		}
	}
	b.DisplayTovar();
	return b;
}
Tovar Search(Tovar* c, int n)
{
	int j;
	Tovar a;
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "." << c[i].GetName() << endl;
	}
	cout << "Choose(Enter 1 to" << n << "):\n";
	cin >> j;
	for (int i = 0; i < n; i++)
	{
		if (i == j - 1)
		{
			a = c[i];
			break;
		}
	}
	return a;
}
int SortByName(Tovar a, Tovar b)
{
	return strcmp(a.GetName(), b.GetName());
}
int TovarSearch(Tovar* a, int size, Tovar x)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] == x) return i;
	}
	return -1;
}
void DisplayArray(Tovar* arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i].DisplayTovar();
	cout << endl;
}