#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){

	Student s1(20,800);
	s1.display();

	cout<<endl;

	Student s2(s1);
	s2.display();

	cout<<endl; 

	Student *s3 = new Student(50,500);
	s3->display();

	cout<<endl;

	Student s4(*s3);
	s4.display();

	// s1.setAge(20);
	// s2->setAge(34);

	// s1.display();
	// cout<<endl; 
	// s2->display();

	return 0;
}