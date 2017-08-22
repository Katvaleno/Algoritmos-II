// practica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace std;
#define fil 20
#define col 20
void cargarmatriz(int mat1[fil][col], int f, int c)
{int i,j;
 cout<<"\nCargar datos de primer matriz:\n";
  for(i=0;i<f;i++)
  {for(j=0;j<c;j++)
   {cin>>mat1[i][j];
   }
  }
}
void cargarmatriz2(int mat2[fil][col], int f, int c)
{int i,j;
cout<<"\nCargar datos de la segunda matriz:\n";
  for(i=0;i<f;i++)
  {for(j=0;j<c;j++)
   {cin>>mat2[i][j];
   }
  }
}
void sumarmatriz(int mat1[fil][col], int mat2[fil][col], int f, int c)
{int i,j,mat[fil][col];
   for(i=0;i<f;i++)
    {for(j=0;j<c;j++)
    {mat[i][j]=mat1[i][j]+mat2[i][j];
    }
    }
   cout<<"\nLa suma es:\n";
   for(i=0;i<f;i++)
   {for(j=0;j<c;j++)
    {cout<<mat[i][j]<<" ";
    }cout<<endl;
   }
}
void cargarmatriz3(int mat2[fil][col], int a, int b)
{int i,j;
cout<<"\nCargar datos de la segunda matriz:\n";
  for(i=0;i<a;i++)
  {for(j=0;j<b;j++)
   {cin>>mat2[i][j];
   }
  }
}
void producto(int mat1[fil][col], int f, int c, int mat2[fil][col],int a, int b)
{int i,j, mat3[fil][col];
  for(i=0;i<f;i++)
  {int s=0;
	 for(j=0;j<b;j++)
    {s=(mat1[i][j]*mat2[j][i])+s;
     mat3[i][j]=s;
    }cout<<s<<" ";
  }
  cout<<"\nEl producto de las matrices es:\n";
  for(i=0;i<f;i++)
  {for(j=0;j<b;j++)
   {cout<<mat3[i][j]<<" ";
   }cout<<endl;
  }
}
void ordenar(int mat1[fil][col],int f, int c)
{}
void main()
{int op, f,c, mat1[fil][col], mat2[fil][col],a,b;
do{cout<<"\nM E N U\n";
cout<<"\n1.- Sumar 2 matrices.";
cout<<"\n2.- Producto 2 matrices. ";
cout<<"\n3.- Ordenar una matriz. ";
cout<<"\n0.- salir.";
cout<<"\nIngrese opcion: ";
cin>>op;
 switch(op)
 {case 1:
  cout<<"\nPara que una suma de matrices sea posible tienen que ser del mismo tamaño.";
  cout<<"\nIngrese numero de filas.";
  cin>>f;
  cout<<"\nIngrese numero de columnas.";
  cin>>c;
  cargarmatriz(mat1,f,c);
  cargarmatriz2(mat2,f,c);
  sumarmatriz(mat1,mat2,f,c);
  break;
 case 2:
  cout<<"\nIngrese numero de filas matriz 1:";
  cin>>f;
  cout<<"\nIngrese numero de columnas matriz 1:";
  cin>>c;
  
  cout<<"\nIngrese numero de filas de matriz 2:";
  cin>>a;
  cout<<"\nIngrese numero de columnas matriz 2:";
	cin>>b;
	if(c!=a)
	{cout<<"\nNo se puede realizar el producto.";
	}
	else
	{cargarmatriz(mat1,f,c);
     cargarmatriz3(mat2,a,b);
	 producto(mat1,f,c,mat2,a,b);
	}
  break;
 case 3:
	 cout<<"\nIngrese numero de filas.";
  cin>>f;
  cout<<"\nIngrese numero de columnas.";
  cin>>c;
  ordenar(mat1,f,c);
	 break;
 
 }
 if(op>3)
 {
	 cout<<"\nOpcion no valida.";
     getch();
	 system("cls");	 
 }
 }while(op!=0||op>3);
	
 getch();
}

