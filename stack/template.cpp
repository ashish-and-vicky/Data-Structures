#include <iostream>
using namespace std;

template<class T>
T add(T  a,T b){
	return a+b;
}

int main(){
	cout<<add(10,20)<<endl;	
	cout<<add(10.4,20.6)<<endl;	
	string a = "chandra";
	string b = "shekhar";
	cout<<add(a,b)<<endl;	

return 0;
}

