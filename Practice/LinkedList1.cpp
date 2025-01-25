#include<bits/stdc++.h>
using namespace std;
           
struct Node{
    int data;
    Node* next;
      
      Node(int x){
        data=x;
        next=nullptr;
      }
};

//Traversing the LinkedList
   void printList(Node* head){
       Node* curr = head;
       while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
       }
       cout<<endl;
   }
   
Node* reverseList(Node* head){
    Node *curr = head;
    Node *prev = nullptr;
    while(curr!=nullptr){
        Node* fwd = curr->next;
        curr->next = prev;
        prev= curr;
        curr=fwd;
    }
    return prev;
}

int ChangeToNumber(Node* head){
    Node* curr = head;
    int res=0;
    while(curr!=nullptr){
        res= res*10 +(curr->data);
        curr=curr->next;
    }
    return res; 
}
Node* insertAtEnd(Node* head,int x){
    
}

int main(){
   Node* head = new Node(1);
   head->next = new Node(2);
   head->next->next = new Node(3);
   head->next->next->next = new Node(4);
//    printList(head);
   head=reverseList(head);
   cout<<ChangeToNumber(head);
//    printList(head);

return 0;
}