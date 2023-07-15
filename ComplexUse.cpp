#include<iostream>
using namespace std;
#include "ComplexNumber.cpp"

int main(){

	int real1,imaginary1,real2,imaginary2;
	cin>>real1>>imaginary1;
	cin>>real2>>imaginary2;

	Complex c1(real1,imaginary1);
	Complex c2(real2,imaginary2);

	int choice;
	cout<<"Enter the choice"<<" ";
	cin>>choice;

	if(choice == 1){
		c1.add(c2);
		c1.Print();
	}
	return 0;
}