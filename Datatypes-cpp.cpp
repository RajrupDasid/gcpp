//Data types are most important to understand
#include <iostream>
using namespace std;
int main(){
	int yearofBirth=1998; //integer variable that hold hole number of data
	char gender='m';//char variable can store one character under ''
	bool isold=true;
	float averagegrade=9.8;//floating point or decimal number
	double balance=637832.37473;//

	cout <<"size of int is "<<sizeof(int)<<"bytes";
	cout <<"size of float is "<<sizeof(float)<<"bytes";//gcc return error while complie
	//cout<<"int min value is "<< INT_MIN <<endl; //Microsoft VS specific
	
	return 0;
}