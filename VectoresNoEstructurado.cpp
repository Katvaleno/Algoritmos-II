// Vectores.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <iostream>
#include <string>

#include "abc.h"

using namespace System;
using namespace std;


int main(array<System::String ^> ^args)
{
	float vecA[50], vecC[50], vecB[50];
	int a, b, c, i, j, k;
	cout << "Ingrese el tamano del vector A: "<< endl;
	cin >> a;
	cout<< "Ingrese el tamano del vector B: "<< endl;
	cin >> b;
	cout << "Cargue su vector A: "<< endl;
	i=0;
	while(i<a)
	{
		cout << "VecA[" << i+1 << "]: ";
		cin >> vecA[i];
		i++;
	}
	cout << "Cargue su vector B: "<< endl;
	j=0;
	while(j<b)
	{
		cout << "VecB[" << j+1 << "]: ";
		cin >> vecB[j];
		j++;
	}
	//Otra alternativa
	/*
	for (j=0; j<b; j++)
	{
		cout << "VecB[" << j+1 << "]: ";
		cin >> vecB[j];
	}
	*/
	cout << "Su vector A es: "<< endl;
	i=0;
	while (i<a)
	{
		cout << "VecA[" << i+1 << "]: " << vecA[i]<< endl;
		i++;
	}
	cout << "Su vector B es: "<< endl;
	j=0;
	while (j<b)
	{
		cout << "VecB[" << j+1 << "]: " << vecB[j]<< endl;
		j++;
	}

	//MENU sin switch
	int op;
	cout << "---------------------------------" << endl;
	cout << "1.- Sumar vectores " << endl;
	cout << "2.- Restar vectores " << endl;
	cout << "3.- Multiplicar vectores " << endl;
	cout << "4.- Dividir vectores " << endl;
	cout << "0.- Salir " << endl;
	cout << "---------------------------------" << endl;
	cout << "Ingrese una opcion: " << endl;
	cin >> op;
	while ((op>0)&&(op<5))
	{ 
		if (op == 1)
		{
			//SUMA de vectores

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
			k=0;
			while (k<c)
			{
				cout << "VecC[" << k+1 << "]: " << vecC[k] << endl;
				k++;
			}
		}
		if (op == 2)
		{
			//RESTA de vectores
			i=0;
			j=0;
			k=0;
			while ((i<a) && (j<b))
			{
				vecC[k]=vecA[i]-vecB[j];
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
			k=0;
			while (k<c)
			{
				cout << "VecC[" << k+1 << "]: " << vecC[k] << endl;
				k++;
			}
		}
		if (op == 3)
		{
			//MULTIPLICACION de vectores
			i=0;
			j=0;
			k=0;
			while ((i<a) && (j<b))
			{
				vecC[k]=vecA[i]*vecB[j];
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
			k=0;
			while (k<c)
			{
				cout << "VecC[" << k+1 << "]: " << vecC[k] << endl;
				k++;
			}
		}
		if (op == 4)
		{
			//DIVISION de vectores}
			i=0;
			j=0;
			k=0;
			/*if (vecA[i]==0 || vecB[j]==0)
			{
				cout << "No existe division entre 0!" <<endl ;
			}
			else
			{*/
				while ((i<a) && (j<b))
				{
					vecC[k]=vecA[i]/vecB[j];
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
				k=0;
				while (k<c)
				{
					cout << "VecC[" << k+1 << "]: " << vecC[k] << endl;
					k++;
				}
			//}
		}

		cout << "---------------------------------" << endl;
		cout << "1.- Sumar vectores " << endl;
		cout << "2.- Restar vectores " << endl;
	    cout << "3.- Multiplicar vectores " << endl;
		cout << "4.- Dividir vectores " << endl;
		cout << "0.- Salir " << endl;
		cout << "---------------------------------" << endl;
		cout << "Ingrese una opcion: " << endl;
		cin >> op;
	}
	getchar ();
    return 0;
}
