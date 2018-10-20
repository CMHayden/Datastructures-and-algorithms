/* Doubly linked list:
	*createnode() - creates a node and adds it to the end of the list.
	*display() - displays values for all nodes in list.
	*reverse_display() - displays values for all nodes, tail to head, in list.
	*insert_start() - inserts a node at the start of the list.
	*insert_position() - inserts a node at a selected position in list.
	*delete_first() - deletes first node in list.
	*delete_last() - deletes last node in list.
	*delete_position() - deletes node from selected position in list.
	*contains() - checks if selected value is stored in list.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
	node *previous;
};

class double_link_list
{
	private:
	node *head, *tail;

	public:
	double_link_list()
	{
		head = NULL;
		tail = NULL;
	}

	void createnode(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		temp->previous = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			temp->previous = tail;
			tail = temp;
		}
	}

	void display()
	{
		node *temp = new node;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}

	void reverse_display()
	{
		node *temp = new node;
		temp = tail;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->previous;
		}
	}

	void insert_start(int value)
	{
		node *temp = new node;
		temp->data = value;
		head->previous = temp;
		temp->next = head;
		head = temp;
	}

	void insert_position(int pos, int value)
	{
		node *temp = new node;
		node *pre = new node;
		node *cur = new node;
		cur = head;
		for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->previous = pre;
		temp->next = cur;
		cur->previous = temp;
	}

	void delete_first()
	{
		node *temp = new node;
		temp = head;
		head = head->next;
		head->previous = NULL;
		delete temp;
	}

	void delete_last()
	{
		node *temp = new node;
		temp = tail;
		tail = tail->previous;
		tail->next = NULL;
		delete temp;
	}

	void delete_position(int pos)
	{
		node *cur = new node;
		node *prev = new node;
		cur = head;
		for (int i = 1; i < pos; i++)
		{
			prev = cur;
			cur = cur->next;
		}
		prev->next = cur->next;
		cur->next->previous = prev;
	}

	void contains(int value)
	{
		node *temp = new node;
		temp = head;
		while (temp->next != NULL && temp->data != value)
		{
			temp = temp->next;
		}
		if (temp->next == NULL)
		{
			cout << "Node with value " << value << " not found." << endl;
		}
		else
		{
			cout << "Node with value " << value << " found." << endl;
		}
	}
};

int main()
{
	double_link_list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Displaying All nodes---------------";
	cout << "\n--------------------------------------------------\n";
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "----------Displaying All nodes Backwards----------";
	cout << "\n--------------------------------------------------\n";
	obj.reverse_display();
	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Inserting At End-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.createnode(55);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "----------------Inserting At Start----------------";
	cout << "\n--------------------------------------------------\n";
	obj.insert_start(50);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "-------------Inserting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.insert_position(5, 60);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "----------------Deleting At Start-----------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_first();
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "-----------------Deleing At End-------------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "--------------Deleting At Particular--------------";
	cout << "\n--------------------------------------------------\n";
	obj.delete_position(4);
	obj.display();
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Searching For Value----------------";
	cout << "\n--------------------------------------------------\n";
	obj.contains(55);
	obj.contains(455);
	obj.contains(45);
	obj.contains(90);
	obj.contains(5455);
	system("pause");
	return 0;
}

