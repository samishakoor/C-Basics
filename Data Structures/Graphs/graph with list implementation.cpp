#include<iostream>
#include<List> 
#include<queue>
using namespace std;

struct vertex
{
	int id;
	string name;
	int weight;

	vertex(int id, string n, int w)
	{
		this->id = id;
		this->name = n;
		this->weight = w;
	}

	int getId()
	{
		return id;
	}

	string getName()
	{
		return name;
	}
	int getWeight()
	{
		return weight;
	}
};



class Graph
{
private:

	int v;
	list<vertex>* adj;
	list<vertex>* origin;

public:

	Graph(int n)
	{
		this->v = n;
		adj = new list<vertex>[n];
		origin = new list<vertex>[n];
	}

	void addEdge(vertex src, vertex dest)
	{
		int s = src.getId();
		adj[s].push_back(dest);

		origin[s].push_back(src);
	}


	bool removeEdge(vertex s,vertex d) 
	{
		int src_id = s.getId();
		int dst_id = d.getId();

		for (list<vertex>::iterator iter = adj[src_id].begin(); iter != adj[src_id].end(); iter++)
		{
			vertex temp = *iter;
			int desired_id = temp.getId();
			if (desired_id==dst_id) 
			{
				adj[src_id].erase(iter);
				return true;
				break;
			}
		}
		return false;
	}

	void display()
	{
		for (int i = 0; i < v; i++)
		{
			list<vertex> l1 = adj[i];
			list<vertex>l2 = origin[i];

			for (list<vertex>::iterator iter = l2.begin(); iter != l2.end(); iter++)
			{
				vertex temp2 = *iter;
				cout << "(" << temp2.getId() << "," << temp2.getName() << ") --> ";
				break;
			}

			for (list<vertex>::iterator it = l1.begin(); it != l1.end(); it++)
			{
				vertex temp1 = *it;
				cout << "(" << temp1.getId() << "," << temp1.getName() << "," << temp1.weight << ")  ";
			}
			cout << endl;
		}
	}
};

int main()
{
	Graph g(5);
	vertex v1(0, "lahore", 100);
	vertex v2(1, "gujranwala", 500);
	vertex v3(2, "jehlum", 600);
	vertex v4(3, "quetta", 1000);
	vertex v5(4, "islamabad", 300);

	g.addEdge(v1, v2);
	g.addEdge(v4, v3);
	g.addEdge(v5, v1);
	g.addEdge(v2, v4);
	g.addEdge(v3, v4);
	g.addEdge(v5, v3);

	bool rem;
	rem=g.removeEdge(v5,v3);
	if (!rem) 
	{
		cout << "Destination Vertex not Found!" << endl;
	}
	g.display();
	cout << endl << endl;

	system("pause");
	return 0;
}
