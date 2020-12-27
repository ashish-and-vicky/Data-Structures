#include <iostream>
#include <assert.h>	

using namespace std;
template<class T>
class stack{
	private:
		int top;
		T *store;
		int size;
	public:
		stack(int size){
			this->size = size;	
			top = -1;
			store = new T[size];
		}
		
		int isFull(){
			if(top == size - 1){
				cout<<"Stack is Full"<<endl;	
				return 1;
			}
			return 0;
		}
		
		int isEmpty(){
			if( top == -1){
				cout<<"Stack is Empty"<<endl;	
				return 1;
			}
			return 0;
		}

		void push(T data){
			if( isFull() == 0)
			top++;
			store[top] = data;
		}

		
		T pop(){
			assert( isEmpty() == 0 );
			T data = store[top];
			top--;
		return data;			
		}

};

