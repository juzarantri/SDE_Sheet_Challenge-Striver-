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
Node* reverse(Node* head,vector<int> &b,int i,int k, int n){
    
//     cout << k << endl;
    Node* prev = NULL,*nex = NULL;
    Node* curr = head;
    int c = 0;
    while(c < k && curr != NULL){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        c++;
    }
//     if(k == 0) head->next = reverse(nex,b,i+2,b[i+2],n);
    if(nex != NULL) {
        if(i+1 < n )
            head->next = reverse(nex,b,i+1,b[i+1],n);
        else{
            head->next = nex;
        }
    }
    return prev;
   
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(b[i] != 0)
            v.push_back(b[i]);
    }
    if(v.size() > 0)
	    return reverse(head,v,0,v[0],v.size());
    else
        return head;
}