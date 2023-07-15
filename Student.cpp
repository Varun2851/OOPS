#include<iostream>
using namespace std;
 
class Student{
public:
	int rollNumber;
private:
	int age;

public:
	Student(){ //default constructor

		cout<<"constructor Called"<<" ";

	}
	Student(int a,int r){
		age =  a;
		rollNumber = r;
	}
	void display(){
		cout<<age<<" "<<rollNumber;
	}

	void setAge(int a){
		age =  a;
	}

	int getAge(){
		return age;
	}
};