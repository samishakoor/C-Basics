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
	bool* visited;
public:

	Graph(int n)
	{
		this->v = n;
		adj = new list<vertex>[n];
		visited = new bool[n];
		for (int i = 0; i < n; i++)
		{
			visited[i] = false;
		}
	}

	void addEdge(vertex src,  vertex dest)
	{
			int s = src.getId();
			adj[s].push_back(dest);
			
	}


	void BFS(vertex src,vertex dest)                
	{
		queue<vertex> queue;
        
		int s = src.getId();
		visited[s] = true;

		queue.push(src);


		while (!queue.empty())
		{
			vertex curr_vertex = queue.front();
			int curr = curr_vertex.getId();
			queue.pop();

			if (curr == dest.getId()) 
			{
				if (curr_vertex.getWeight() > src.getWeight()) 
				{
					cout <<src.getName() << " infected "<<dest.getName()<<endl<<endl;
				}
				else 
				{
					cout << src.getName() << "did not infected " << dest.getName() << endl << endl;
				
				}
			}
			
			for (list<vertex>::iterator i = adj[curr].begin(); i != adj[curr].end(); ++i)
			{
				vertex adjvertex = *i;
				if (!visited[adjvertex.getId()])
				{
					visited[adjvertex.getId()] = true;
					queue.push(adjvertex);
				}
			}
		}

	}


};

int main()
{
	Graph g(3);
	vertex v0(0, "sami", 2);
	vertex v1(1, "haseeb", 4);
	vertex v2(2, "shaheer", 7);


	g.addEdge(v0, v1);
	g.addEdge(v0, v2);
	g.addEdge(v1, v2);

	cout << endl << endl;

	g.BFS(v0,v2);

	system("pause");
	return 0;
}
