#include<iostream>
using namespace std;

int main()
{
    char letra;
    cin>>letra;
    
    switch (letra)
    {
    case 'a':
        cout<<"Es una vocal";
        break;
    case 'e':
        cout<<"Es una vocal";
        break;
    case 'i':
        cout<<"Es una vocal";
        break;
    case 'o':
        cout<<"Es una vocal";
        break;
    case 'u':
        cout<<"Es una vocal";
        break;   
    case 'A':
        cout<<"Es una vocal mayúscula";
        break;
    case 'E':
        cout<<"Es una vocal mayúscula";
        break;
    case 'I':
        cout<<"Es una vocal mayúscula";
        break;
    case 'O':
        cout<<"Es una vocal mayúscula";
        break;
    case 'U':
        cout<<"Es una vocal mayúscula";
        break;     
    
    default:
    cout<<"No es vocal";
        break;
    }
    return 0;
}