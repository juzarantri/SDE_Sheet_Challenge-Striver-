#include <bits/stdc++.h> 
/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(!head) return head;
        LinkedListNode<int> *curr = head;
        LinkedListNode<int> *temp;
        while(curr != NULL){
            temp = curr->next;
            curr->next = new LinkedListNode<int>(curr->data);
            curr->next->next = temp;
            curr = temp;
        }
        curr = head;
        while(curr != NULL){
            if(curr->next != NULL){
                curr->next->random = (curr->random == NULL) ? NULL : curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        LinkedListNode<int> *copy = curr->next;
        temp = copy;
        while(curr != NULL){
            curr->next = curr->next->next;
            copy->next = (copy->next != NULL) ? copy->next->next  : copy->next;;
            curr = curr->next;
            copy = copy->next;
        }
        return temp;
}
