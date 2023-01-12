#include <iostream>
#include<queue>

using namespace std;

class node{

public:
	int data; 
	node* left ; 
	node* right;


	node(int d){ 

		this->data = d ; 
		this->right = NULL; 
		this->left = NULL; 


	}
};

node* builtTree(){

	int d ; 
	cin>>d; 
	if(d==-1) {return NULL;} 
	 node* root = new node(d);
	root->left = builtTree(); 
	root->right= builtTree(); 

	return root;
}


void bfs(node* root ){

	queue<node*>q; 

	// adding root to the queue

	q.push(root); 
	q.push(NULL); 

	while(!q.empty()){ 

		node* f = q.front(); 

		if(root == NULL){
			cout<<endl ; 
			q.pop();

			if(!q.empty()){q.push(NULL);}
		}
		else {
			cout<<root->data<<" ";

			q.pop(); 
			if(root->left)q.push(root->left); 
			if(root->right)q.push(root->right); 
		}
		 

		// // f fas left and right sides we are going to print that side
		// // first check for the left side 
		// if(f->left)q.push(f->left); 
		// //check for the right now 
		// if(f->right)q.push(f->right);
		// }
	}
	
	return;
}

int main()

{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

node* root = builtTree(); 
// printPreorder(root); 
bfs(root);

	return 0;
}
