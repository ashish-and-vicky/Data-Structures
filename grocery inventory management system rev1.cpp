	
#include<iostream>
using namespace std;

class inventory
{
	int qty;
	string item;
	public:
		
			void setname()
			{
				string n;
				cin >> n;
				item = n; 
			}
			
			string getname()
			{
				return item ; 
			}
			
			void setqty()
			{
				int n;
				cin >> n;
				qty = n; 
			}
			
			int getqty()
			{
				return qty ;
			}
		
			void addnewgrocery(int &n)
			{
				cout << "Enter New Grocery Item to add: ";
				setname();
				cout << "Enter " << getname() <<" Initial Stock: ";
				setqty();
				
				n++;		
			}
			
			void removegrocery(inventory in[], int &n)
			{				
				int i = 0;
				string name;
				cout << "Enter Grocery name to remove: ";		
				cin >> name;
				while( i < n )
				{
					if( name == in[i].getname() )
						break;
					
					i++;
				}
				if(i == n)
				{
					return;
				}
				else
				{
					
					int j;
					if( i != -1 )
					{
						 for( j = i ; j < n-1 ; j++)
						    {
						        in[j] = in[j+1];
						    }
		   				n--;
					}
				}
				cout << endl;
			}
			
			void minstock(inventory in[], int &n)
			{
				int i;
				int min;
				min = getqty(); 
				for(i = 1; i < n ; i++ )
				{
					
					if(min > in[i].getqty() )
						min = in[i].getqty();	
				} 
				i = 0;
				while( i < n )
				{
					if( min == in[i].getqty() )
						cout << "Minimum Stock: " << in[i].getname() << " " << in[i].getqty() << endl;	
					i++;
				}
			
				cout<<endl;
			}
			
			void maxstock(inventory in[],int &n)
			{
				int i;
				int max;
				max = getqty(); 
				for(i = 1; i < n ; i++ )
				{
					
					if(max < in[i].getqty() )
						max = in[i].getqty();	
				} 
				i = 0;
				while( i < n )
				{
					if( max == in[i].getqty() )
						cout << "Maximum Stock: " << in[i].getname() << " " << in[i].getqty() << endl;	
					i++;
				}
				cout<<endl;
			}
			
			void printasc(inventory in[],int &n)
			{
				cout << "Grocery Item\t\tStock " << endl;
				cout << "*************\t\t****** " << endl;
				cout << endl;
				
				inventory temp;
				int i,j;
				
				for( i=0 ; i<n ; i++ )
				{
					for( j=0 ; j<n ; j++ )
					{
						if(in[i].getqty() < in[j].getqty() )
						{
							temp = in[i];
							in[i] = in[j];
							in[j] = temp;
						}
					}
				}
				
				for( i=0 ; i<n ; i++ )
				{
					cout << in[i].getname()<< "\t\t\t" << in[i].getqty();
					cout<<endl;
					
				} 
				
				
				cout << endl;
			}
			
			void soldqty(inventory in[],int &n)
			{
				
				string name;
				cout << "Enter sold grocery item name: ";
				cin >> name;
				int i = 0;
				int x;
				while( i < n )
				{
					if( name == in[i].getname() )
						{
							cout << "Enter " << in[i].getname() <<" Sold Quantity: ";
							
							cin >> x;
							int q = in[i].getqty() - x;
							
							if( q < 0)
								cout << "Error...!!!  Only " << getqty() << " " << getname() << " in stock " << endl;
							else
								in[i].qty = q;
				//			in[i].soldqty();
							break;
						}
					i++;
				}
				if(i == n)
				{
					cout <<"No such grocery item plz try again..."<< endl;
				//	goto again;
				}
				
				
				
				cout << endl;	
				
			}
			
			
			void addqty(inventory in[] , int &n)
			{
				string name;
				cout << "Enter grocery item name to add stock: ";
				cin >> name;
			
				int i = 0;
				while( i < n )
				{
					if( name == in[i].getname() )
						{
							cout << "Enter " << in[i].getname() << " Quantity to add to stock: ";
							int x;
							cin >> x;
							in[i].qty = in[i].getqty() + x;
							break;
						}	
						
					i++;
				}
				if(i == n)
					{
						cout <<"No such grocery item plz try again..."<< endl;
					//	goto again;
					}
				
				cout<<endl;
			}
			
};
int main()
{
	int  n,i;
	cout << "Enter the number of grocery items in inventory system: ";
	cin >> n;
	cout << "Enter the names of " << n << " grocery item names in invetory system: ";
	inventory in[20];
	
	
	for( i = 0 ; i < n ; i++ )
		in[i].setname();
		
	for( i = 0 ; i < n ; i++ )
	{
		cout << "Enter the initial stock of " << in[i].getname() <<  " : "  ;
		in[i].setqty();
		
	}		
	
	
	
	int optn;
	back:
	cout << endl;
	cout << "Select One option to Perform " << endl;
	cout <<	"1. Add New Grocery to Inventory" << endl;
	cout <<	"2. Remove Grocery from Inventory" << endl;
	cout <<	"3. Grocery with Minimum stock" << endl;
	cout <<	"4. Grocery with Maximum stock" << endl;
	cout <<	"5. Grocery List with Stock in ascending order" << endl;
	cout <<	"6. Sold Grocery" << endl;
	cout <<	"7. Add Stock" << endl;
	cout <<	"8. Exit" << endl;
	cout << "Enter Your Option: ";
	cin >> optn;

	
	switch(optn)
	{
		case 1:
			{
				in[n].addnewgrocery(n);
				
				goto back;
			}
			
		case 2 :
			{
				
				in[0].removegrocery(in, n);
				
				
				goto back;
			}
		case 3 :
			{
				
				in[0].minstock(in,n);
				
				goto back;
			
			}
			
		case 4 :
			{
				in[0].maxstock(in,n);
				goto back;
			}	
				
			
		case 5:
			{
				
				in[0].printasc(in,n);
				
				goto back;

			}
			
		case 6 :
			{
				//again:
				in[0].soldqty(in,n);
				goto back;
			}
			
			
		case 7:
		
			{
				//again:
			
				in[0].addqty(in,n);
				goto back;
			}	
				
		
		case 8 :
			break;
			
		default:
			{
	
				cout << "Invalid choice plz try again..." << endl;
				goto back;		
			}
	}
	

	return 0;
}

