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
	cout<<"In 10 years you will earn"<<annualSalary*10<<endl;

	return 0;
}