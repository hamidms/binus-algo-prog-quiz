#include <stdio.h>
#include <stdlib.h>

struct node{
	int key;
	int height;
	struct node *left;
	struct node *right;
};

// Get Higher Number
int max(int a, int b){
	if(a > b) {
		return a;
	} else {
		return b
	}
}

// Get Height of Tree
int getHeight(struct node *root){
	if(root=Null)return 0;
	return root->height;
}

// Get Balance Number
int getBalanceFactor(struct node *root){
	if(root=NULL)return 0;
	return getHeight(root->left) - getHeight(root->right);
}

// Create New Node
struct node *newNode(int x) {
	struct node *newCurrNode = (struct node*) malloc(sizeof(struct node));
	
	newCurrNode->key = x;
	newCurrNode->left = NULL;
	newCurrNode->right = NULL;
	newCurrNode->height = 1;
	
	return newCurrNode;
}

// Insert Node Function
struct node *insertNode(struct node *root, int value){
//	jika root sama dengan null maka masukkan value ke node
	if(root=NULL)return newNode(value);
//	jika key lebih kecil dari value, maka child node sebelah kanan dimasukkan
	else if(root->key<value){
		root->right = insertNode(root->right, value);
	}
//	jika key lebih besar dari value, maka child node sebelah kiri dimasukkan
	else {
		root->left = insertNode(root->left, value)
	}
	
//	untuk mencari height, kita bandingkan nilai child node kanan dan kiri, ditambah 1 karena kita menambah 1 node
	root->height = max(getHeight(root->left), getHeight(root->right))+1;
}

// Print All Node
void printAll(struct node *root){
	if(root=NULL)return;
	printAll(root->left);
	printf(" %d ", root->key);
	printAll(root->right);
}

// Main function
int main(){
	struct node *root = NULL;
	
	printAll(root);
	
	return 0;
}
