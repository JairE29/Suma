/* Programa: suma2.cpp
 * Autor: JairEcheverria
 * Fecha: 14-09-2023
 * Descripcion: Suma de dos numeros
 */
#include<iostream>
using namespace std;
float x,y,z;
int ingreso ()
{
	cout<<"Ingrese x:";cin>>x;
	cout<<"Ingrese y:";cin>>y;
	return 0;
}
int salida ()
{
	cout<<"La suma de "<<x<<"+"<<y<<"="<<z<<endl;
	return 0;
}
int main ()
{
	ingreso();
	z=x+y;
	salida();
	return 0;
}

