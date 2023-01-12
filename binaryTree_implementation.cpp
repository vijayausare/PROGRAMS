#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
         data = d;
         left = NULL;
        right = NULL;
    }
};

node* buildTree(node* root) {

    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }
    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
    return root;

}
void printPreorder(node* root){ 

	if(root == NULL) return; 
	cout<<root->data<<" ";
	printPreorder(root->left); 
	printPreorder(root->right);
}



int main() {
	#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

	#endif

    node* root = NULL;
    root = buildTree(root);
    printPreorder(root);
    
    return 0;
}