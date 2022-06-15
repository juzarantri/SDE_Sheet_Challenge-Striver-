#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    LinkedListNode<int> *dummy = new LinkedListNode<int>(0);
    dummy->next = head;
    LinkedListNode<int> *slow = dummy,*fast = dummy;
    if(K == 0) return head;
    while(K--){
        fast = fast->next;
    }
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}