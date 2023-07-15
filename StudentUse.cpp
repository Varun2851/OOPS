#include<iostream>
using namespace std;
#include "Student.cpp"

int main(){
	//create object statically
	Student s1;

	Student s3,s4,s5;
	//s1.age = 24;
	s1.rollNumber = 101;

	cout<<"S1 Age :"<<s1.getAge()<<endl;
	cout<<s1.rollNumber<<" ";

	s1.display();

	//s5.age = 30;

	//creates object dynamically
	Student *s6 = new Student;

	//(*s6).age = 23; 
	(*s6).rollNumber = 230;

	(*s6).display();

	//shortcut 
	//s6->age = 23;
	s6->rollNumber= 230; 

	s6->display();



}