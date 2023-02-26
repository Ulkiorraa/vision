#pragma once
class node
{
	public:
		int dado;
		node* next;
		node* back;

		node(int item, node* ptr1, node* ptr2);
};

