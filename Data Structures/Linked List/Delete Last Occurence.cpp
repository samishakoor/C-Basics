#include<iostream>
using namespace std;

struct Node 
{
	int data;
	Node* next;
};

class SList 
{
private:
	Node* root;

public:
	SList() 
	{
		root = nullptr;
	}
	void insert(int key) 
	{
		Node* newNode = new Node;
		newNode->data = key;
		newNode->next = nullptr;
	
		if (root == nullptr) 
		{
			root = newNode;
		}
		else
		{
			Node* nodeptr = root;
			while (nodeptr->next != nullptr)
			{
				nodeptr = nodeptr->next;
			}
			nodeptr->next = newNode;
		}
	}

	bool deleteLastOccurrence(int key)
	{
		Node* nodeptr = root;
		Node* lastoccurence = nullptr;
		Node* prev = nullptr;
		Node* temp = nullptr;

		while (nodeptr != NULL) 
		{
			if (nodeptr->data == key) 
			{
				lastoccurence = nodeptr;
				if (prev!=nullptr && prev->next == lastoccurence) 
				{
					temp = prev;
				}
			}
	
			prev = nodeptr;
			nodeptr = nodeptr->next;
		}

		if (root == lastoccurence) 
		{
			root = root->next;
			delete lastoccurence;
			return true;
		}
		if(root!=lastoccurence && lastoccurence!=nullptr)
		{
			temp->next = lastoccurence->next;
			delete lastoccurence;
			return true;
		}
		if (lastoccurence == nullptr) 
		{
			return false;
		}
	
	}

	void printList()
	{
		if (root == nullptr) 
		{
			cout << "list is empty!" << endl;
		}
		else {
			Node* nodeptr = root;
			while (nodeptr != nullptr)
			{
				cout << nodeptr->data << " ";
				nodeptr = nodeptr->next;
			}
			cout << endl;
		}
	}







};


int main()
{
	SList s1;
	s1.insert(9);
	s1.insert(4);
	s1.insert(0);
	s1.insert(1);
	s1.insert(9);
	s1.insert(8);
	s1.insert(7);
	s1.insert(0);
	s1.insert(9);
	s1.insert(1);

	s1.deleteLastOccurrence(9);

	s1.printList();
	system("pause");
	return 0;
}
