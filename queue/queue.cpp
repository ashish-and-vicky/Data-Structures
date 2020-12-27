#include <iostream>

using namespace std;

class queue{
	private:		
	
	int size;
	int rare;
	int front;
	int *store;

	public:
		queue(int size){
			this->size = size;
			front = rare = -1;
			store = new int[size];
		}
		~queue(){
			delete[] store;
		}
		int isEmpty(){
			if( front == rare){
				return 1;
			}	
			return 0;
		}
		int isFull(){
			if(rare == (size - 1) ){
				return 1;
			}
			return 0;	
		}
		void enqueue(int data){
			rare++;
			store[rare] = data;
			
		}
		int dequeue(){
			front++;
			int data = store[front];
			if( front == rare){
				front = rare = -1;
			}
			return data;
		}
};
