#include <iostream>

using namespace std;

int add(int a, int b){
	int r;
	r = a + b;
	return r; 
}

int main(){
	int z;
	z = add(5,6);
	cout<<"The reasult is "<<z;
}