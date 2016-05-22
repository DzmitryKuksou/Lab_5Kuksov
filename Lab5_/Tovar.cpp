#include<iostream>
#include"Tovar.h"
using namespace std;
void Tovar::SetTovar(char* name, char* data, char* brand, char* storagetime, char* cost, char* shelflife)
{
	SetName(name);
	SetData(data);
	SetBrand(brand);
	SetStorageTime(shelflife);
	SetShelflife(storagetime);
	SetCost(cost);
}

bool Tovar:: operator ==(Tovar &c)
{
	if (!strcmp(Name, c.GetName()))
	return 1;
}
void Tovar::SetName(char* name)
{
	strcpy(Name, name);
}
void Tovar::SetData(char* data)
{
	strcpy(Data, data);
}
void Tovar::SetBrand(char* brand)
{
	strcpy(Brand, brand);
}
void Tovar::SetStorageTime(char* storagetime)
{
	strcpy(StorageTime,storagetime);
}
void Tovar::SetShelflife(char* shelflife)
{
	strcpy(ShelfLife, shelflife);
}
void Tovar::SetCost(char* cost)
{
	strcpy(Cost, cost);
}
Tovar::~Tovar()
{

}
char* Tovar::GetData()
{
	return Data;
}
char* Tovar::GetName()
{
	return Name;
}
char* Tovar::GetBrand()
{
	return Brand;
}
char* Tovar::GetShelife()
{
	return ShelfLife;
}
char* Tovar::GetStorageTime()
{
	return StorageTime;
}
char* Tovar::GetCost()
{
	return Cost;
}
void Tovar::DisplayTovar()
{
	cout << "Name:" << Name;
	cout << "Realyse:" << Data << endl;
	cout << "Brand:" << Brand << endl;
	cout << "StorageTime" << StorageTime << endl;
	cout << "ShelfTime:" << ShelfLife << endl;
	cout << "Cost:" << Cost << endl;
}
