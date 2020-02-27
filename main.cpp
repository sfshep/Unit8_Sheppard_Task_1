// a program to practice passing a struct by point (*)

#include <iostream>
#include <string>
using namespace std;

//declaration of the struct

struct car // I'm making my own data type
{
  string Make;
  string Model;
  int Year;
  string Color;
};

//function definition delcared above int main()
void printCar(car *c)
{
  cout << "\nCar details: " << endl;
  cout << "Make - " << c->Make << endl;
  cout << "Model - " << c->Model << endl;
  cout << "Year - " << c->Year << endl;

//set the color variable based upon the year, and print it.
if(c->Year <= 2010)
{
  c->Color ="RED";
}
else if (c->Year > 2010)
{
  c->Color = "GREEN";
}

//print the color
cout << "Color: " << c->Color <<endl;
}



int main() 
{
// declare an instance of the struct
car car1; 
car1.Make = "Hyundai";
car1.Model = "Genesis";
car1.Year = 2020;


car car2 = {"GMC", "Yukon", 1975};

car car3 = {"Toyota", "Avalon", 2003};

printCar(&car1);
printCar(&car2);
printCar(&car3);

return 0;

}