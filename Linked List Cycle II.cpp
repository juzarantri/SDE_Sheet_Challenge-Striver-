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

Node *firstNode(Node *head)
{
    if(head == NULL) return head;
	Node* slow = head,*fast = head;
    
    if(slow->next == NULL) return NULL;
    int c = 0;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            fast  = head;
            break;
        }
        c++;
    }
//     cout << fast->data;
    if(fast == NULL || fast->next == NULL ) return fast->next;
    while(slow != NULL && slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    if(slow == fast)
        return slow;
    return NULL;
}