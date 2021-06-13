#include <iostream>

using namespace std;

int mult(int a, int b){
	int r;
	r = a * b;
	return r;
} 

int main(){
	int z;
	z = mult(4, 6);
	cout<<"The result is "<<z;
}