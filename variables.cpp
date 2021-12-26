//Data Types in c++

#include <iostream>
using namespace std;

int main()
{
	//float salarypackage=90000.88;
	float annualSalary;
	cout<<"Please Enter Your annualSalary::  ";
	cin>>annualSalary;
	float monthlySalary=annualSalary/12;
	cout<<"Your monthly Salary is "<<monthlySalary << endl;
	cout<<"In 10 years you will earn"<<annualSalary*10<<endl; //string has to be in "" quotes
	char character='a';//has to be in single quotes single character 
	

	return 0;
}