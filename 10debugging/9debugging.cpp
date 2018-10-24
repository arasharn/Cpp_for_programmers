// bug: #include <main.hpp>
#include "main.hpp"

 // bug: void main ()
 int main()
 {
   // bug: int FTemp = 0
   int FTemp = 0;
   int CTemp = 0;

   // bug: cout >> "Enter a Farenheit temperature: ";
   cout << "Enter a Farenheit temperature: ";
   // bug: cin << FTemp;
   cin >> FTemp;

   // bug: CTemp = FTemp - 32 / (9/5);
   CTemp = (FTemp - 32) / (9.0/5.5);
   // bug: cout >> "\n <<FTemp >> " in Farenheit = "  >> CTemp >> in Celsius\n";
   cout << "\n" <<FTemp << "in Farenheit = "  <<CTemp << "in Celsius\n";
   return 0;
 }
