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


int main(){
    // vector<int> v1;
    // vector<int> v2;
    // string ip1;
    // getline(cin, ip1);
    
    // stringstream ss1(ip1); 
    // int n1;
    // while(ss1>>n1){
    //     v1.push_back(n1);
    // }
    // string ip2;
    // getline(cin, ip2);
    
    // stringstream ss2(ip2);
    // int n2;
    // while(ss2>>n2){
    //     v2.push_back(n2);
    // }
    Node* h1 = nullptr;
    Node* t1 = nullptr;
    string ip1;
    getline(cin, ip1);


    stringstream ss1(ip1);
    int n1;
    while(ss1>>n1){
        Node* nn = new Node(n1);
        if (!h1) {
            h1 = nn;
            t1 = nn;
        } 
        else{
            t1->next = nn;
            t1 = nn;
        }
    }

    Node* h2 = nullptr;
    Node* t2 = nullptr;
    string ip2;
    getline(cin, ip2);
    
    stringstream ss2(ip2);
    int n2;
    while(ss2>>n2){
        Node* nn = new Node(n2);
        if (!h2) {
            h2 = nn;
            t2 = nn;
        } else {
            t2->next = nn;
            t2 = nn;
        }
    }

    long long nm1 = 0, nm2 = 0;
    Node* curr = h1;
    while(curr) {
        nm1 = nm1 * 10 + curr->data;
        curr = curr->next;
    }
    curr = h2;
    while(curr) {
        nm2 = nm2 * 10 + curr->data;
        curr = curr->next;
    }
    // cout<<nm1<<" "<<nm2<<endl;
    long long sum = nm1 + nm2;

    Node* head3 = nullptr;
    Node* tail3 = nullptr;
    if(sum == 0) {
        head3 = new Node(0);
    } else {
        while(sum > 0) {
            int digit = sum % 10;
            Node* nn = new Node(digit);
            if(!head3) {
                head3 = nn;
                tail3 = nn;
            } else {
                nn->next = head3;
                head3 = nn;
            }
            sum /= 10;
        }
    }
    // Node* t3 = head3;
    // while(t3!=nullptr){
    //     cout<<t3->data<<" ";
    //     // sz2++;
    //     t3=t3->next;
    // }
    // while(tmp!=nullptr){
    //     int x = tmp->data;
    //     if(x>9){
    //         int y = x%10;
    //         int z = x/10;
    //         tmp->data = y;
    //         tmpx->data = tmpx->data+z;
    //         tmpx=tmpx->next;
    //         tmp=tmp->next;
    //     }
    //     // cout<<tmp->data<<" ";
    //     tmp=tmp->next;
    // }

    // Node* head3 = nullptr;
    // Node* tail3 = nullptr;
    // for(int i=0;i<min(sz1,sz2);i++){

    //     Node* nn = new Node(head1->data+head2->data);
    //     if (!head3) {
    //         head3 = nn;
    //         tail3 = nn;
    //     } else {
    //         tail3->next = nn;
    //         tail3 = nn;
    //     }
    // }
    Node* t3 = head3;
    while(t3 != nullptr){
        cout << t3->data << " ";
        t3 = t3->next;
    }

    return 0;
}