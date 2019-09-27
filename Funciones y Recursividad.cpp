#include <iostream>
#include <conio.h>
using namespace std;


void pedirDatos();
float multiplicarDatos(float x, float y);

void valoresNuevos(int&,int&);
float num1, num2;
void Recursividad(int);

int main(){
	pedirDatos();
	multiplicarDatos(num1,num2);
	
	int num3, num4;
	cout<<"Digite dos numeros:  ";
	cin>>num3>>num4;
	valoresNuevos(num3,num4);
	cout<<"El valor del primer numero es :"<<num3<<endl;
	cout<<"El valor del segundo numero es:  "<<num4<<endl;
	Recursividad(10);
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite dos numeros:";
	cin>>num1>>num2;	
}
float multiplicarDatos(float x, float y){
	float multi = x * y;
	cout<<"La multiplicacion es:  "<<multi<<endl;
}
void valoresNuevos(int& xnum, int& ynum){
	xnum=10;
	ynum=ynum+10;
}

void Recursividad(int contador=10){
	if(contador==1) return;
	cout<<contador<<" ";
	Recursividad(contador-1);
}

