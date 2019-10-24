#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	char salir = 'n';

	float numero1, numero2, resultado;

	int operacion;

	while (salir == 'n')
	{
		cout<<"Menu de operaciones\n";

		cout<<"1.Suma\n";
		cout<<"2.Resta\n";
		cout<<"3.Multiplicacion\n";
		cout<<"4.Division\n";
		cout<<"5.Raiz\n";
		cout<<"6.Exponente\n";
		
		cin>>operacion;
		
		cout<<"Escribe el primer numero\n"; cin>>numero1;
		cout<<"Escribe el segundo numero\n"; cin>>numero2;
	
		switch (operacion)
		{
		case 1:

			cout<<"La suma es:\n" << numero1 <<" + " << numero2 << " es: " << numero1 + numero2 <<"\n";
		break;

		case 2:

			cout<<"La resta es:\n"<< numero1 << " - " << numero2 << " es: " << numero1 - numero2<<"\n";
		break;

		case 3:

			cout<<"La multiplicacion es:\n" << numero1 <<" * " << numero2 << " es: " << numero1 * numero2 <<"\n";
		break;

		case 4:

			cout<<"La division es:\n" << numero1 <<" / " << numero2 << " es: " << numero1 / numero2 <<"\n";
		break;

		case 5:

			cout<<"El resultado de la Raiz es:\n" << numero1 <<" raiz " << numero2 << " es: " << pow(numero1, 1/numero2) <<"\n";
		break;

		case 6:
			cout<<"El resultado del exponente es:\n" << numero1 <<" ^ " << numero2 << " es: " <<pow(numero1, numero2) <<"\n";
		break;

		default:
			break;

		}
		cout<<"\n¿Quieres salir del programa? (y/n)";  cin>>salir;
		

	}







}
