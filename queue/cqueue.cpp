#include <iostream>

using namespace std;

class cqueue{
	private:		
	
		int size;
		int noe;
		int rare;
		int front;
		int *store;

	public:
		cqueue(int size){
			noe = 0;
			this->size = size;
			front = rare = -1;
			store = new int[size];
		}
		~cqueue(){
			delete[] store;
		}
		int isEmpty(){
			if( noe == 0){
				return 1;
			}	
			return 0;
		}
		int isFull(){
			if(noe == size){
				return 1;
			}
			return 0;	
		}
		void enqueue(int data){
			rare = (rare + 1 ) % size;
			noe++;
			store[rare] = data;
			
		}
		int dequeue(){
			front = (front + 1 ) % size;
			noe--;
			int data = store[front];
			if( front == rare){
				front = rare = -1;
			}
			return data;
		}
};
