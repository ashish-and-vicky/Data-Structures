#include "stack.cpp"

int main(int c, char** ar){

	string cmd;
	for(int i = 0; i < c; i++){
		cout<<ar[i]<<endl;
	}	

	stack<string> stk( atoi ( ar[1] ) );
	while(1){
		cin>>cmd;
		if( cmd == "exit"){
			break;
		}
		if( cmd == "push"){
			string data;
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
