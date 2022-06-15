#include <bits/stdc++.h> 
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

int findIntersection(Node *firstHead, Node *secondHead)
{
    Node* temp1 = firstHead, *temp2 = secondHead;
    while(firstHead != secondHead){
        secondHead = secondHead->next;
        firstHead = firstHead->next;
        if(!firstHead && !secondHead) return -1;
        if(!firstHead) firstHead = temp2;
        if(!secondHead) secondHead = temp1;
    }
    return firstHead->data;
}s