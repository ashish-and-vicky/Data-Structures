#include "stack.cpp"

int main(int argc, char** args){

	string cmd;
	stack<int> stk( atoi ( args[1] ) );
	while(1){
		cin>>cmd;
		if( cmd == "exit"){
			break;
		}
		if( cmd == "push"){
			int data;
			cin>>data;
			if( !stk.isFull() ){
				stk.push( data );
			}
		}	
		if( cmd == "pop"){
			if( !stk.isEmpty() ){
				cout<<stk.pop()<<endl;
			}
		}
	}	

return 0;
}
