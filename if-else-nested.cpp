#include <iostream>
using namespace std;

int main()
{
	float a,b,c;

	cout<<"Please enter a, b, c :: ";
	std::cin>>a>>b>>c;
	if (a==b && b==c){
		std::cout<<"Equilateral triangle";
	}
	else{
		if(a!=b && a!=c && b!=c)
		{
			std::cout <<"Scalene triangle";
		}
		else{
			std::cout<<"Isosceles triangle";
		}
	}

}