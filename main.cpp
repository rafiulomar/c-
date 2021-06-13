#include <iostream>

using namespace std;

int mult(int a, int b){
	int r;
	r = a * b;
	return r;
} 


int main(){

	int z, i;
	z = mult(4, 6);
	i = mult(5, 13);
	cout<<"The result are "<<z<<" "<<i;
	return 0;

}
