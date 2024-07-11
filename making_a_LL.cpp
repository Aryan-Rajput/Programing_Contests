#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
        int data;
        Node *next;

        Node(int data) : data(data){
            next = NULL;
        }
};

void insertatnode(Node * &head,int data){
    Node *t = new Node(data);
    t->next = head;
    head = t;
}

int main(){
    Node *temp = new Node(10);
    insertatnode(temp,20);
    insertatnode(temp,30);
    insertatnode(temp,40);
    insertatnode(temp,50);
    insertatnode(temp,60);

    while(temp != nullptr){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
    // cout<<temp->data<<endl;
    // cout<<temp->next<<endl;
    return 0;
}