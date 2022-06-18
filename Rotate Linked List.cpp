#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     int len = 0;
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        len++;
    }
    len++;
    k = k%len;
    
    if(k == 0) return head;
    temp->next = head;
    temp = head;
    
    len = len-k;
    len--;
    while(len>0){
        
        temp = temp->next;
        len--;
    }
    cout << endl;
    head = temp->next;
    temp->next = NULL;
    return head;
}