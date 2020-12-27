#include "cqueue.cpp"
#include <stdlib.h>

int main(int c, char **ar){

	cqueue q( atoi( ar[1] ) );
	string cmd;

	while(1){

		cin>>cmd;
		if( cmd == "ex"){
			break;
		}

		if( cmd == "e"){
			int data;
			cin>>data;
			if( !q.isFull() ){
				q.enqueue( data );
			}else{
				cout<<"Queue is full"<<endl;
			}
		}	
		if( cmd == "d"){
			if( !q.isEmpty() ){
				cout<<q.dequeue()<<endl;
			}else{
				cout<<"Queue is empty"<<endl;
			}
		}
	}	

return 0;
}
