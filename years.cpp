#include <iostream>
using namespace std;
int main()
{
   int num;

   cout<<"Introduce el año que deseas analizar: ";
   cin >> num;
  
   if(num%4==0 && num%100!=0 || num%400==0)
   {
      cout << "El año es bisiesto";
   }
   else
   {
      cout << "El año no es bisiesto";
   }
return 0;
}
