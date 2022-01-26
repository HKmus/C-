#include <stdio.h>
#include <stdlib.h>

//cree et afficher une arbre

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

void printarbre(node *root){
  printf("\t");
  if(root == NULL){
    return;
  }
  printf("%d\n",root->data);
  printarbre(root->left);
  printf("\t");
  printarbre(root->right);

}

int main() {
  node *n1 = newnode(4);
  node *n2 = newnode(6);
  node *n3 = newnode(7);
  node *n4 = newnode(-1);
  node *n5 = newnode(2);
  node *n6 = newnode(4);
  node *n7 = newnode(1);

  n1->left = n2;
  n1->right = n3;
  n3->left = n4;
  n3->right = n5;
  n5->left = n6;
  n5->right = n7;

  printarbre(n1);

  free(n1);
  free(n2);
  free(n3);
  free(n4);
  free(n5);
  free(n6);
  free(n7);

}
