#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const int N=20;
const int M=25;
const int O=45;

void Leer (float vecA[N], int &a, string letra)

{

	cout << "Ingrese el tamano del vector " <<letra<< ": "<< endl;
	cin >> a;
	int i=0;
	while(i<a)
	{
		cout << "Vec" <<letra<< "[" << i+1 << "]: ";
		cin >> vecA[i];
		i++;
	}
}

void Mostrar (float vecC[O], int c, string letra)

{
	int k=0;
	while (k<c)
	{
		cout << "Vec"<<letra<<"[" << k+1 << "]: " << vecC[k] << endl;
		k++;
	}
	cout <<endl;
}

void Sumar (float vecA[N], int a, float vecB[M], int b, float vecC[O], int &c)
{
	int i, j, k;
	i=0;
	j=0;
	k=0;
	while ((i<a)&&(j<b))
	{
		vecC[k] = vecA[i]+vecB[j];	
		i++;
		j++;
		k++;
	}
	while (i<a)
	{
		vecC[k] = vecA[i];
		k++;
		i++;
	}
	while (j<b)
	{
		vecC[k] = vecB[j];
		k++;
		j++;
	}
	c = k;
}

int Menu ()
{
	int op;
	cout << "---------------------------------" << endl;
	cout << "1.- Sumar vectores " << endl;
	cout << "0.- Salir " << endl;
	cout << "---------------------------------" << endl;
	cout << "Ingrese una opcion: " << endl;
	cin >> op;
	return op;
}
