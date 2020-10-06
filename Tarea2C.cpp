/*Ejercicio 2.  Hacer un menú que considere las siguientes opciones y ejecutarlas:
	Caso 1: Cubo de un numero
	Caso 2: Numero par o impar
	Case 3: salir.*/
#include<iostream>

using namespace std;
int main()
{
    int num, opcion;
    cout<<"Ingrese el número que desea que entre en el menú: "<<endl;
    cin>>num;
    cout<<"Ingrese la opción que desea: "<<endl<<"1.-Cubo de un número"<<endl<<"2.-Numero par o impar"<<endl<<"3.-Salir"<<endl;
    cin>>opcion;
    switch(opcion)
    {
        case 1:
        cout<<"El cubo de "<<num<<" es "<<num*num*num;
        break;
        case 2:
        if(num%2==0)
        {
            cout<<"El numero es par"<<endl;
        }
        else
        {
            cout<<"El numero es impar"<<endl;
        }
        break;
        case 3:
        break;
        default:
        cout<<"No ingresaste una opción válida"<<endl;
        break;
    }
    return 0;
}