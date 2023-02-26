#include "node.h"


//Construtor: usado para criar um novo node (nó)
node::node(int item, node* ptr)
{
	dado = item;
	next = ptr;
}