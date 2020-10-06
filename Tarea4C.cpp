/*Ejercicio 4.  Escriba un programa en C++ para ingresar la carga de la unidad de electricidad y calcule
la factura de electricidad total de acuerdo con la condición dada:
      Por las primeras 50 unidades. 0.50 / unidad
      Para las próximas 100 unidades. 0,75 / unidad
      Para las próximas 100 unidades. 1.20 / unidad
      Para la unidad por encima de 250. 1,50 / unidad
      Se agrega un recargo adicional del 20% a la factura.*/
#include<iostream>
using namespace std;
int main()
{
    float cantidad, total;
    cout<<"Ingrese la cantidad de unidades de electricidad: "<<endl;
    cin>>cantidad;
    if(cantidad<=50)
    {
        total=(cantidad*0.50)+((cantidad*0.50)*0.20);
        cout<<"El total de la factura de electricidad es: "<<total<<endl;
    }
    else if(cantidad>50&&cantidad<=150)
    {
        total=(cantidad*0.75)+((cantidad*0.75)*0.20);
        cout<<"El total de la factura de electricidad es: "<<total<<endl;
    }
    else if(cantidad>150&&cantidad<=250)
    {
       total=(cantidad*1.20)+((cantidad*1.20)*0.20);
        cout<<"El total de la factura de electricidad es: "<<total<<endl;
    }
    else if(cantidad>250)
    {
        total=(cantidad*1.50)+((cantidad*1.50)*0.20);
        cout<<"El total de la factura de electricidad es: "<<total<<endl;
    }
    return 0;
}