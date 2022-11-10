#include <iostream>

int main(){

   double temp;
   char unit;

   std::cout << "Enter your unit\n";
   std::cout << "C = Celsius\n";
   std::cout << "F = Farenheit\n";
   std::cin >>unit;



   switch(unit){

     case 'F':
     std::cout << "Enter the the temperature in Celsius: ";
     std::cin >> temp;
     temp = (1.8 * temp) + 32.0;
     std::cout << "Result: " << temp << '\n';
     break;
     case 'C':
     std::cout << "Enter the temperature in Farenheit: ";
     std::cin >> temp;
     temp = (temp - 32) / 1.8;
     break;
     default:
     std::cout << "Please enter a valid unit (C or F; needs to be capitalized aswell)";
     break;
   }
   

}