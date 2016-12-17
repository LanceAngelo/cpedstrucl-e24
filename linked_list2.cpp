#include <iostream>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }
    
    void menu()
    {
    	cout<<"Menu: "<<endl
    		<<"1 - Insert into linked list \n"
			<<"2 - Pop \n"
			<<"3 - Exit \n"
			<<"4 - Display contents of the linked list \n";	
	}

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;
		
		if(head== NULL){
			return NULL;
		}
		else{
			ret=n->x;
			head = head->next;
			delete n;
        	return ret;
		}
        
        
    }
    
    void display(){
    	Node *n = head;
    	n=head;
    	
    	if(n==NULL){
    		cout<<"EMPTY\n";
		}
		else{
			while(n!=NULL){
				cout<<n->x<<endl;
				n=n->next;
			}
		}
		}

	
	

private:
    Node *head; 
};

int main() {
    LinkedList list;
	int choice;
	int num;    
do{
	int ctr;

	list.menu();
	cout<<">> ";
	cin>>choice;
	
	switch(choice){
		
		case 1:{
			
			cout<<"insert #: ";
			cin>>num;
			list.addValue(num);
			ctr++;			
			break;
		}
		case 2:{
			if(ctr ==0){
			cout<<"Error \n";
			}
			else{
			cout<<"POPPED: "<<list.popValue()<<endl;
			}
			ctr--;
			break;
		}		
		case 3:{
			exit(0);
			break;
		}		
		case 4:{
			
			list.display();
			system("pause");
			break;
		}	
	/*	default:{
			cout<<"Error\n";
			break;
		}	*/
	}	
	}while(choice!='3');
	
    return 0;
}
