#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
   
    Node<int>* ans = NULL;
    if(!first) return second;
    if(!second) return first;
    if(first->data > second->data){  
        swap(first,second);
    }
    ans = first;
    while(first != NULL && second != NULL){
         Node<int>* temp = NULL;
        while(first != NULL && first->data <= second->data){
            temp = first;
            first = first->next;
        }
        temp->next = second;
        swap(first,second);
    }
//     if()
//     cout << first->data << " " << second->data << endl;
    return ans;
}
