#include <iostream>
using namespace std;
int main()
{
	//user input a number 
	//write a program to understand it's even or odd
	int number;
	cout <<"Enter a integer number::";
	cin>>number;
	if	(number%2==0){
		cout<<number <<" ::is an even number"<<endl;
	}
	else{
		cout<<number<<" :: is an odd number"<<endl;
	}

}