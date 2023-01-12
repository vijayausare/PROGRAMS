#include<iostream>
using namespace std ; 

class node{

public:
	int data ; 
	node*next ; 

	node(int d ){

		data  = d; 
		next= NULL;
	}
};


void reverse(node*&head){ 

	node *c = head ;
	node *p = NULL ; 
	node*N; 


	while(c!=NULL){
		N= c->next ; //save the next node 
		c->next = p ; //make the currennt node point to previous 

		//update p and c make one step forward 

		p = c; 
		c= N ;

	} 
	head  = p ;

}
void insertAtHead(node*&head, int d){

	if(head == NULL){
		head = new node(d); 
		return;
	}

	node*n = new node(d); 
	n->next = head ; 
	head = n ; 

}
void print(node*head){

	while(head !=NULL){
		cout<<head->data <<" ";
		head = (*head).next;
	}
}


int main(){ 

 #ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

node*head = NULL; 
insertAtHead(head , 3 );
insertAtHead(head , 4);
insertAtHead(head , 5 );
reverse(head);
print(head);


return 0 ; 

}