/*Ejercicio 3. Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares 
(Solo salida de efectivo).
Caso 1: Retirar Efectivo.
Caso 2: Ver saldo*/
#include<iostream>

using namespace std;
int main()
{
    int opcion, cantidad, saldo;
    cout<<"Ingrese la opción deseada:"<<endl<<"1. Retirar efectivo"<<endl<<"2. Ver saldo"<<endl;
    cin>>opcion;
    switch(opcion)
    {
        case 1:
        cout<<"¿Cuánto saldo en dólares desea retirar?";
        cin>>cantidad;
        saldo=1000-cantidad;
        break;
        case 2:
        cout<<"Su saldo actual es: 1000 dólares"<<endl;
        break;
        default:
        cout<<"No ingresó la opción válida";
        break;
    }
    cout<<"Ingrese la opción deseada:"<<endl<<"1. Retirar efectivo"<<endl<<"2. Ver saldo"<<endl;
    cin>>opcion;
    switch(opcion)
    {
        case 1:
        cout<<"¿Cuánto saldo en dólares desea retirar?";
        cin>>cantidad;
        saldo=1000-cantidad;
        break;
        case 2:
        cout<<"Su saldo actual es: "<<saldo<<" dólares"<<endl;
        break;
        default:
        cout<<"No ingresó la opción válida";
        break;
    }
    cout<<"Ingrese la opción deseada:"<<endl<<"1. Retirar efectivo"<<endl<<"2. Ver saldo"<<endl;
    cin>>opcion;
    switch(opcion)
    {
        case 1:
        cout<<"¿Cuánto saldo en dólares desea retirar?";
        cin>>cantidad;
        saldo=1000-cantidad;
        break;
        case 2:
        cout<<"Su saldo actual es: "<<saldo<<" dólares"<<endl;
        break;
        default:
        cout<<"No ingresó la opción válida";
        break;
    }
    return 0;
}