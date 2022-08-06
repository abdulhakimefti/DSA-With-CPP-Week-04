#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int value;
    Node * next;
    Node (int val){
        value = val;
        next= NULL;
    }
};
void insertTail(Node *&head,int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=newNode;
}
void insertHead(Node *&head,int val){
    Node *newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}
void display(Node *n){
    while(n!=NULL){
        cout<<n->value<<" ";
        n=n->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
    int val,tal;
   int n;
   cin>>n;
   while (n>=0){
    cin>>val>>tal;
        insertTail(head,val);
        insertHead(head,tal);
    n--;
   }
   display(head);
    return 0;
}