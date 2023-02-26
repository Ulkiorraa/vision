#include "node.h"

node::node(int item, node* ptr1, node* ptr2)
{
	dado = item;
	back = ptr1;
	next = ptr2;
}
