#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    int index;

    
    Node* constructBSTHelper(const vector<int>& preorder, int lowerBound, int upperBound) {
        if (index >= preorder.size() || preorder[index] < lowerBound || preorder[index] > upperBound) {
            return nullptr;
        }

        int rootValue = preorder[index++];
        Node* root = new Node(rootValue);

        root->left = constructBSTHelper(preorder, lowerBound, rootValue - 1);
        root->right = constructBSTHelper(preorder, rootValue + 1, upperBound);

        return root;
    }

public:
    Node* bstFromPreorder(vector<int>& preorder) {
        index = 0;
        return constructBSTHelper(preorder, numeric_limits<int>::min(), numeric_limits<int>::max());
    }

    void printInorder(Node* node) {
        if (node == nullptr) return;
        printInorder(node->left);
        cout << node->val << " ";
        printInorder(node->right);
    }
};

int main() {
    Solution sol;
    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    Node* root = sol.bstFromPreorder(preorder);

    cout << "Inorder traversal of the constructed BST: ";
    sol.printInorder(root);
    cout << endl;

    return 0;
}
