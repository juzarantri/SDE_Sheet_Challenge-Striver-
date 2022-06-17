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
LinkedListNode<int> * middle(LinkedListNode<int> *head){
    LinkedListNode<int> *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

LinkedListNode<int>* reverse(LinkedListNode<int> *head){
    LinkedListNode<int>* prev = head, *nex;
    LinkedListNode<int>* curr = head;
    while(curr != NULL){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
    

}

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *mid = middle(head);
    LinkedListNode<int> *last = reverse(mid);
    while(head != last){
        if(head->data != last->data) return false;
        head = head->next;
        last = last->next;    
    }
    return true;
}