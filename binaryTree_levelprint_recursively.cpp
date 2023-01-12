#include <bits/stdc++.h>

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

int heightOfTree(node* root){

	if(root == NULL)return 0 ;

	int ls = heightOfTree(root->left); 
	int rs = heightOfTree(root->right); 

	return max(ls, rs)+1; 	
}

//finding all levels for iterating over it 

void printKthLevel(node* root , int k ){ 

if(root ==NULL)return; 
if(k == 1){
	cout<<root->data<<" ";
	return; 
}
printKthLevel(root->left, k-1); 
printKthLevel(root->right, k-1); 
return ; 
}

void printAllLevels(node* root){
	int h = heightOfTree(root); 

	for(int i = 0 ; i <= h ; i++){ 
		printKthLevel(root, i ); 
		cout<<endl ; 

	}
	return; 
}

void printPreorder(node* root){ 

	if(root == NULL) return; 
	cout<<root->data<<" ";
	printPreorder(root->left); 
	printPreorder(root->right);
}

int main()

{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif

node* root = builtTree(); 
// printPreorder(root); 
printAllLevels(root);


	return 0;
}
