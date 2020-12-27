#include "stk.cpp"

int main(){

	stack sk(5);
	sk.push(11);
	sk.push(12);
	sk.push(13);
	sk.push(15);
	sk.push(16);

	cout<<sk.pop()<<endl;	
	cout<<sk.pop()<<endl;	
	cout<<sk.pop()<<endl;	
	cout<<sk.pop()<<endl;	
	cout<<sk.pop()<<endl;	
	cout<<"---"<<endl;	

	sk.print();	

return 0;
}
