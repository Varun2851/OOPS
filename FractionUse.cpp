#include<iostream>
using namespace std;
#include "Fraction.cpp"

int main(){

	Fraction f1 (10,2);
	Fraction f2 (10,20);

	f1.add(f2);

	f1.Print();
	f2.Print();

	return 0;

}