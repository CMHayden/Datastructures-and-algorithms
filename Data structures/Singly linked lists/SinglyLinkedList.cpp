/* Singly linked list:
	*createnode() - creates a node and adds it to the end of the list.
	*display() - displays values for all nodes in list.
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
	node *next; //*next is a pointer to the next node
};

class list
{
	private:
	node *head, *tail;

	public:
	list()
	{
		head = NULL;
		tail = NULL;
	}

	void createnode(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
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

	void insert_start(int value)
	{
		node *temp = new node;
		temp->data = value;
		temp->next = head;
		head = temp;
	}

	void insert_position(int pos, int value) 
	{
		node *pre = new node;
		node *cur = new node;
		node *temp = new node;
		cur = head;
		for (int i = 1; i < pos; i++)
		{
			pre = cur;
			cur = cur->next;
		}
		temp->data = value;
		pre->next = temp;
		temp->next = cur;
	}

	void delete_first()
	{
		node *temp = new node;
		temp = head;
		head = head->next;
		delete temp;
	}

	void delete_last()
	{
		node *current = new node;
		node *previous = new node;
		current = head;
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}

	void delete_position(int pos)
	{
		node *current = new node;
		node *previous = new node;
		current = head;
		for (int i = 1; i < pos; i++)
		{
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
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
	list obj;
	obj.createnode(25);
	obj.createnode(50);
	obj.createnode(90);
	obj.createnode(40);
	cout << "\n--------------------------------------------------\n";
	cout << "---------------Displaying All nodes---------------";
	cout << "\n--------------------------------------------------\n";
	obj.display();
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

