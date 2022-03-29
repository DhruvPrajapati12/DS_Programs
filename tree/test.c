#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

void preOrder(struct node *node)
{
	if(node == NULL)
		return;
	printf("%d ", node -> data);
	preOrder(node -> left);
	preOrder(node -> right);
}	

struct node* createNode(int x)
{
	struct node *node;
	node = (struct node*)malloc(sizeof(struct node));
	node -> left = NULL;
	node -> right = NULL;
	node -> data = x;
	return node;
}

struct node* searchNdInsert(struct node *node, int x)
{
	if(node == NULL)
		return createNode(x);
	if(x < node -> data)
		node -> left = searchNdInsert(node -> left, x);
	if(x > node -> data)
		node -> right = searchNdInsert(node -> right, x);
	return node;
}

int successor(struct node *root) {
  root = root -> right;
  while (root -> left != NULL) root = root -> left;
  return root -> data;
}
int predecessor(struct node *root) {
  root = root -> left;
  while (root -> right != NULL) root = root -> right;
  return root -> data;
}

struct node* deleteNode(struct node *root, int key)
{
	if (root == NULL) return NULL;
  if (key > root -> data) root -> right = deleteNode(root -> right, key);
  else if (key < root -> data) root->left = deleteNode(root -> left, key);
  else {
    if (root -> left == NULL && root -> right == NULL) root = NULL;
    else if (root -> right != NULL) {
      root -> data = successor(root);
      root -> right = deleteNode(root -> right, root -> data);
    } else {
      root -> data = predecessor(root);
      root -> left = deleteNode(root -> left, root -> data);
    }
  }
  return root;
}

void main()
{
	struct node *root;
	root = searchNdInsert(root,50);
	searchNdInsert(root, 20);
	searchNdInsert(root, 60);
	searchNdInsert(root, 23);
	searchNdInsert(root, 10);
	searchNdInsert(root, 15);
	searchNdInsert(root, 55);
	searchNdInsert(root, 57);
	searchNdInsert(root, 80);
	searchNdInsert(root, 65);

	searchNdInsert(root, 22);
	searchNdInsert(root, 90);
	searchNdInsert(root, 85);
	searchNdInsert(root, 34);
	searchNdInsert(root, 5);

	preOrder(root);
	printf("\n");

	deleteNode(root, 50);
	deleteNode(root, 57);
	deleteNode(root, 80);
	preOrder(root);
	printf("\n");


}



/*
Implementation of preOrder, postOrder, inOrder Traversal of static tree.

#include <stdio.h>
#include <stdlib.h>

struct node
{
	char data;
	struct node *left;
	struct node *right;
};

void preOrder(struct node *node)
{
	if(node == NULL)
		return;
	printf("%c ", node -> data);
	preOrder(node -> left);
	preOrder(node -> right);
}	

void inOrder(struct node *node)
{
	if(node == NULL)
		return;
	inOrder(node -> left);
	printf("%c ", node -> data);
	inOrder(node -> right);
}	

void postOrder(struct node *node)
{
	if(node == NULL)
		return;
	postOrder(node -> left);
	postOrder(node -> right);
	printf("%c ", node -> data);
}	

void main()
{
	struct node *a, *b, *c, *d, *e, *f, *g;

	a = (struct node*)malloc(sizeof(struct node));
	b = (struct node*)malloc(sizeof(struct node));
	c = (struct node*)malloc(sizeof(struct node));
	d = (struct node*)malloc(sizeof(struct node));
	e = (struct node*)malloc(sizeof(struct node));
	f = (struct node*)malloc(sizeof(struct node));
	g = (struct node*)malloc(sizeof(struct node));

	a -> data = 'a';
	a -> left = b;
	a -> right = d;

	b -> data = 'b';
	b -> left = c;
	b -> right = NULL;

	c -> data = 'c';
	c -> left = NULL;
	c -> right = NULL;

	d -> data = 'd';
	d -> left = e;
	d -> right = g;

	e -> data = 'e';
	e -> left = NULL;
	e -> right = f;

	g -> data = 'g';
	g -> left = NULL;
	g -> right = NULL;

	f -> data = 'f';
	f -> left = NULL;
	f -> right = NULL;

	preOrder(a);
	printf("\n");
	inOrder(a);
	printf("\n");
	postOrder(a);
	printf("\n");
}

*/
