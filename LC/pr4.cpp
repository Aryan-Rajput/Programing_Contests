#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : 
        data(val), 
        left(nullptr), 
        right(nullptr){}
};

class BST{
private:
    Node* root;
    // to insert a node
    Node* insert(Node* node, int val){
        if(node == nullptr){

            return new Node(val);
        }
        
        if(val < node->data){
            node->left = insert(node->left, val);
        } 
        else if(val > node->data){
            node->right = insert(node->right, val);
        }
        
        return node;
    }

    //for clockwise rotated print
    void rotatedval(Node* node){
        rhtside2(node);
        lefval(node);
        lftside2(node->left);
    }
    void rhtside2(Node* node){
        if(node->right == nullptr){
            return;
            
        }
        cout<<node->data<<" ";
        rhtside2(node->right);
    }
    void lefval(Node* node){
        if(node==nullptr){
            return;
        }
        if(node->left == nullptr && node->right == nullptr){
            cout<<node->data<<" ";
        }
        lefval(node->right);
        lefval(node->left);

    }
    void lftside2(Node* node){
        if(node->left == nullptr){
            return;
        }
        lftside2(node->left);
        cout<<node->data<<" ";
    }
    

    // for topview 
    void topview(Node* node){

        lftside(node);
        rhtside(node->right);
        
    }
    void lftside(Node* node){
        if(node == nullptr){
            return;
        }
        lftside(node->left);
        cout<<node->data<<" ";
    }    
    void rhtside(Node* node){
        if(node == nullptr){
            return;
        }
        cout<<node->data<<" ";
        rhtside(node->right);
    }    


    //testing inorder tree print
    void inorder(Node* node){
        if(node == nullptr){
            return;
        }
        
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

public:
    BST() : root(nullptr){}

    void insert(int val){
        root = insert(root, val);
    }
    void inorder(){
        inorder(root);
        cout << endl;
    }
    void rotatedval(){
        rotatedval(root);
    }
    void rhtside2(){
        rhtside2(root);
    }
    void lftside2(){
        lftside2(root);
    }
    void lefval(){
        lefval(root);
    }
    void topview(){
        topview(root);

    }
};

int main(){
    BST bst;
    string s;
    getline(cin,s);
    int n1;
    stringstream ss(s);
    while(ss>>n1){
        bst.insert(n1);
    }
    // bst.insert(20);
    // bst.insert(8);
    // bst.insert(4);
    // bst.insert(22);
    // bst.insert(4);
    // bst.insert(12);
    // bst.insert(10);
    // bst.insert(14);

    int n;
    cin>>n;
    cout<<"inserted node = "<<n<<" ";
    bst.insert(n);
    cout<<"\n";

    // bst.inorder();

    cout << "Top view: ";
    bst.topview();


    cout<<"\nclockwise rotated value = ";
    bst.rotatedval();
    // bst.rhtside2();
    // bst.lefval();
    // bst.lftside2();


    return 0;
}

