#include <iostream>
#include <assert.h>

using namespace std;

class stack{
	private:
		int size;
		int top;
		int *store;
	public:
		stack(int size){
			this->size = size;
			top = 0;
			store = new int[size];
		}

		~stack(){
			delete[] store;
		}

		int isEmpty(){
			if( top == 0)
				return 1;
			else
				return 0;
		}

		int isFull(){
			if( top == size )
				return 1;
			else
				return 0;

		}

		void push(int data){
			assert( !isFull() );
			store[top] = data;
			top++;
		}

		int pop(){
			assert( !isEmpty() );
			top--;
			return store[top];
		}
		
		void print(){
			for(int i = 0; i < size; i++)	
			cout<<store[i]<<endl;
		}
};
