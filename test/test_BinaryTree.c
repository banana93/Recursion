#include "unity.h"
#include "BinaryTree.h"
#include "mock_Stack.h"
#include "Traversal.h"

void setUp(void){}

void tearDown(void){}

/**				10
  *			   /  \
  *			  5    -
  *			 / \
  *			1   -
  *		   / \
  *		  -   -
  */
void test_printLinear_given_10_5_1_should_print_out_1_5_10(void)
{
	Node leftGrandChild = {NULL, NULL, 1};
	Node leftChild = {&leftGrandChild, NULL, 5};
	Node Parent = {&leftChild, NULL, 10};
	
	printLinear(&Parent);
}

/**				10
  *			   /  \
  *			  5    20
  */
void test_printLinear_given_10_5_20_should_print_out_5_10_20(void) 
{
	Node leftChild = {NULL, NULL, 5};
	Node rightChild = {NULL, NULL, 20};
	Node Parent = {&leftChild, &rightChild, 10};
	
	printLinear(&Parent);
}

/**				10
  *			   /  \
  *           -    20
  */
void test_printLinear_given_10_20_should_print_10_20(void)
{
	Node rightChild = {NULL, NULL, 20};
	Node Parent = {NULL, &rightChild, 10};
	
	printLinear(&Parent);
}

/**				10
  *            /  \
  *           5    -
  *          / \
  *         1   7
  */
void test_printLinear_given_10_5_1_7_should_print_1_5_7_10(void) 
{
	Node leftGrandChild = {NULL, NULL, 1};
	Node rightGrandChild = {NULL, NULL, 7};
	Node leftChild = {&leftGrandChild, &rightGrandChild, 5};
	Node Parent = {&leftChild, NULL, 10};
	
	printLinear(&Parent);
}