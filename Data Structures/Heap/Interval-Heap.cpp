#include<iostream>
using namespace std;

class IntervalHeap
{
	int hsize; //number of elements in the heap;
	int maxsize; //size of the array
	int** arr;
public:
	IntervalHeap(int s)
	{
		maxsize = s;
		hsize = 0;
		arr = new int* [2];
		arr[0] = new int[maxsize];//store the lower end of closed interval
		arr[1] = new int[maxsize];//store the higher end of closed interval
	}

	void insert_heap(int data)
	{
		if (hsize % 2 == 0 )
		{
		    int index = hsize / 2;
			arr[0][index] = data;	
			hsize+=1;
		}
		else 
		{
			int h = hsize - 1;
			int index = h / 2;
			arr[1][index] = data;
			if (arr[0][index] >= data)
			{
				
				int temp = arr[1][index];
				arr[1][index] = arr[0][index];
				arr[0][index] = temp;
			}
			hsize+=1;
		}
		
		int iter=0;
		if (hsize % 2 == 0) 
		{
			 iter = hsize / 2;
		}
		else 
		{
			iter = (hsize + 1) / 2;
		}
			
			int i = iter-1;
			while (i > 0)
			{
				int parent = (i - 1) / 2;
				
				if (arr[0][parent] > arr[0][i] )
				{
					int temp = arr[0][i];
					arr[0][i] = arr[0][parent];
					arr[0][parent] = temp;
				}
			    if (arr[1][parent] < arr[1][i])
				{
					int temp = arr[1][i];
					arr[1][i] = arr[1][parent];
					arr[1][parent] = temp;
							
				}
				i = parent;
			}
		
	}


	void printheap()
	{
		int n=0;
		if (hsize % 2 == 0)
		{
			 n = hsize / 2;
		}
		else 
		{
		     n= hsize/ 2+1;
		}
		cout << "MinHeap Elements :" << endl;
			for (int i = 0; i < n; i++)
			{
				cout << arr[0][i] << " ";
			}
		    cout << endl << endl<<"Max heap elements:"<<endl;
		    for (int i = 0; i < (hsize / 2); i++)
		    {
			cout << arr[1][i] << " ";
		    }
			cout << endl;
	}


};










int main() 
{

	IntervalHeap h1(100);
	h1.insert_heap(2);
	h1.insert_heap(30);
	h1.insert_heap(3);
	h1.insert_heap(17);
	h1.insert_heap(4);
	h1.insert_heap(15);
	h1.insert_heap(4);
	h1.insert_heap(12);
	h1.insert_heap(3);
	h1.insert_heap(11);
	h1.insert_heap(5);
	h1.insert_heap(10);
	h1.insert_heap(6);
	h1.insert_heap(15);
	h1.insert_heap(4);
	h1.insert_heap(10);
	h1.insert_heap(5);
	h1.insert_heap(11);
	h1.insert_heap(5);
	h1.insert_heap(9);
	h1.insert_heap(4);
	h1.insert_heap(7);
	h1.insert_heap(8);
	h1.insert_heap(8);
	h1.insert_heap(7);
	h1.insert_heap(9);
	h1.printheap();



	return 0;
}