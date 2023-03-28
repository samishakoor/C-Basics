#include<iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:

    ListNode* middleNode(ListNode* head)
    {
		ListNode* slowptr = head;
		ListNode* fastptr = head;
		int c = 0;
		if (fastptr->next != nullptr)
		{
			while (fastptr->next != nullptr && fastptr->next->next != nullptr)
			{
			    c++;
				fastptr = fastptr->next->next;
				slowptr = slowptr->next;
                 if(fastptr->next!=nullptr)
                 {
				    if(fastptr->next->next == nullptr && c%2==0)
                    {
                    c++;
                    }
                 }
                 if(fastptr->next==nullptr && c%2!=0)
                 {
                    c++;
                 }

		    }
		     if(c%2!=0)
             {
                	slowptr = slowptr->next;
             }
             if(c==0)
             {
                    slowptr = slowptr->next;
             }

		}
		return slowptr;
    }
};

int main()
{

	 ListNode* head = nullptr;

	 ListNode* one = NULL;
	 ListNode* two = NULL;
	 ListNode* three = NULL;
	 ListNode* four = NULL;
	 ListNode* five = NULL;
	 ListNode* six = NULL;

	 one = new ListNode;
	 two = new ListNode;
	 three = new ListNode;
	 four = new ListNode;
     five = new ListNode;
	 six = new ListNode;



	one->val = 1;
	two->val = 2;
	three->val = 3;
	four->val = 4;
	five->val = 5;
	six->val = 6;

	one->next = two;
	two->next = three;
	three->next = four;
	four->next = five;
    five->next = six;
    six->next = NULL;
	head = one;


	Solution s1;

	ListNode* middleptr=s1.middleNode(head);


	while (middleptr != nullptr)
	{
		cout << middleptr->val << " ";
		middleptr = middleptr->next;
	}

    return 0;
}

