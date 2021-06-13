#include <iostream>
#include <string>

using namespace std;



string message(string name){
	string r;
	r = name;
	return r;
}



int main(){
string i, k;
cout<<"What is your name? "<<"\n";
getline(cin, i);
k = message(i);
cout<<"Your name is "<<k;
return 0;
}
