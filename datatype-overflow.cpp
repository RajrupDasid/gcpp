//#define_STDC_LIMIT_MACROS
#include <iostream>
#include <stdint.h>
#include <climits>
using namespace std;
int main(){
	int intMax=INT_MAX;
	cout<<intMax<<endl;
	cout<<intMax+1;//datatype overflow same principal as clock
	return 0;

}