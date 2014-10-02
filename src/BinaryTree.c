#include <stdio.h>
#include "BinaryTree.h"
#include "Stack.h"
#include "Traversal.h"

void printLinear(Node *node) {
	if(node != NULL) {
		printLinear(node->left);
		printf("Node: %d\n", node->data);
		printLinear(node->right);
	}
}