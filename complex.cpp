#include<iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
struct complex
{
  int real;
  float imaginary;
};

int main()
{
  int choice, x, y, z;
  struct complex a, b, c;

  while(1)
  {
  	cout << "\n<<<Operations>>>\n";
    cout <<" 1. Add two complex numbers.\n";
    cout <<" 2. Subtract two complex numbers.\n";
    cout <<" 3. Multiply two complex numbers.\n";
    cout <<" 4. Divide two complex numbers.\n";

    cout <<"Enter your choice>> ";
    cin >> choice;

    if (choice == 5)
      exit(0);

    if (choice >= 1 )
    {
      cout <<"Enter real and imaginary no. for first complex number.";
      cout <<"\n Enter real no>> ";
      cin >>a.real;
      cout <<"Enter Imaginary no>>";
      cin >>a.imaginary;
      cout <<"Enter real and imaginary no. for second complex no.";
      cout <<"\nEnter real no>> ";
      cin >>b.real;
      cout <<"Enter imaginary no>> ";
      cin >>b.imaginary;
    }
    if (choice == 1)
    {
      c.real = a.real + b.real;
      c.imaginary = a.imaginary + b.imaginary;

      if (c.imaginary >= 0)
        cout <<"Sum of the complex numbers = " << c.real <<"+" <<c.imaginary <<"i";

    }
    else if (choice == 2)
    {
      c.real = a.real - b.real;
      c.imaginary = a.imaginary - b.imaginary;

      if (c.imaginary >= 0)
        cout <<"Difference between the complex numbers = " << c.real <<"+" <<c.imaginary <<"i";
      if (c.imaginary <=0)
	    cout <<"Difference between the complex numbers = " << c.real <<" " <<c.imaginary << "i"; 

    }
    else if (choice == 3)
    {
      c.real = a.real*b.real - a.imaginary*b.imaginary;
      c.imaginary = a.imaginary*b.real + a.real*b.imaginary;

      if (c.imaginary >= 0)
        cout <<"Multiplication of the complex numbers = "<< c.real <<"+" <<c.imaginary <<"i";

    }
    else if (choice == 4)
    {
      
      if (b.real != 0 && b.imaginary != 0)
      {
      	float x, y;
      	if (b.real == 0 && b.imaginary == 0){
      		cout << "\nInvalid Input";
      	}
      	else{
      		x = ((a.real*b.real)+(b.imaginary*a.imaginary))/((b.real*b.real)+(b.imaginary*b.imaginary));
      		y = ((b.real*a.imaginary)-(a.real*b.imaginary))/((b.real*b.real)+(b.imaginary*b.imaginary));
      		if(y<0){
      			cout << "Division of the complex numbers = "<<x<<" "<<y<<"i";
      		}
      		else{
      			cout << "Division of the complex numbers = "<<x<<" + "<<y<<"i";
      			
      		}
      	}
      }
    }
 }
}
