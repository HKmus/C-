#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//fonction récursive qui calcule la hauteur d’un sommet x dans un arbre binaire

typedef struct node{
  int data;
  struct node *left;
  struct node *right;
} node;

node *newnode(int data){
  node* arbre = malloc(sizeof(node));
  if (arbre != NULL) {
    arbre->left = NULL;
    arbre->right = NULL;
    arbre->data = data;
  }
  return arbre;
}

bool compler(node *root){
	if (root == NULL) return true;
	if(root->left == NULL && root->right == NULL) return true;
	if(root->left != NULL && root->right != NULL) return (compler(root->left) && compler(root->right));
	return false;
}

int main() {
  node *n1 = newnode(4);
  node *n2 = newnode(1);
  node *n3 = newnode(7);
  node *n4 = newnode(-1);
  node *n5 = newnode(2);
  node *n6 = newnode(5);
  node *n7 = newnode(9);
  node *n8 = newnode(6);
  node *n9 = newnode(3);
  node *n10 = newnode(22);
  node *n11 = newnode(15);

  n1->left = n2;
  n1->right = n3;
  n2->left = n4;
  n2->right = n5;
  n3->left = n6;
  n3->right = n7;
  n5->right = n9;
  n6->right = n8;
  n7->right = n10;
  n10->left = n11;

  if (compler(n1)){
    printf("cette arbre binaire est compler\n");
  }
  else{
    printf("cette arbre binaire n\'est pas compler\n");
  }

  free(n1);
  free(n2);
  free(n3);
  free(n4);
  free(n5);
  free(n6);
  free(n7);
  free(n8);
  free(n9);
  free(n10);
  free(n11);

}
