#include<iostream>
#include<string>
using namespace std;

struct Node
{
public:

	int x;
	int y;
	string shapeName;
	Node* leftchild;
	Node* rightchild;

	Node() {
		leftchild = nullptr;
		rightchild = nullptr;
		x = 0;
		y = 0;
		shapeName = '\0';
	}
	Node(int x,int y, string name) 
	{
		leftchild = nullptr;
		rightchild = nullptr;
		this->x = x;
		this->y = y;
		shapeName = name;
	}
};


class BST {
 private:
	Node* root;
public:
	BST() 
	{
		root = nullptr;
	}

	bool insert(Node* &root, int x, int y,string name)
	{
		bool isFound=true;
		Node* curr = root;
		Node* parent = nullptr;

		int level = 0;

		if (root == nullptr)
		{
			root = new Node(x,y,name);
			isFound == true;
		}

		while (curr != nullptr)
		{
			if (x == curr->x && y == curr->y) 
			{
				isFound == false;
				break;
			}
			parent = curr;

			if (level % 2 == 0)
			{

				if (x <= curr->x)
				{
					curr = curr->leftchild;
				}
				else
				{
					curr = curr->rightchild;
				}
			}
			if (level % 2 != 0) 
			{
				if (y <= curr->y)
				{
					curr = curr->leftchild;
				}
				else
				{
					curr = curr->rightchild;
				}
			}

			level++;
		}

		if (parent != nullptr && isFound)
		{
			if (curr==parent->leftchild)
			{
				parent->leftchild = new Node(x,y,name);
			}
			else
			{
				parent->rightchild = new Node(x,y,name);
			}
			isFound == true;
		}
		return isFound;
	}

	

	void inorder(Node *&root) 
	{
		if (root != nullptr)
		{
			inorder(root->leftchild);
			cout << "(" << root->x << "," << root->y << ")" << endl;
			inorder(root->rightchild);
		}
	}



//////////////////////////////
	void Insert(int x,int y,string name) 
	{
		bool found=insert(root,x,y,name);
	}
	void Print() 
	{
		inorder(root);
		
	}
	
};


int main()
{

	//(5, 3), (3, 5), (0, 2), (3, 8), (7, 7), (1, 6), (7, 2)
	BST b1;
	b1.Insert(5, 3,"circle");
	b1.Insert(3, 5, "circle");
	b1.Insert(0, 2, "circle");
	b1.Insert(3, 8, "circle");
	b1.Insert(7, 7, "circle");
	b1.Insert(1, 6, "circle");
	b1.Print();
	return 0;
}