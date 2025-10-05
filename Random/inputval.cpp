#include <bits/stdc++.h> 
using namespace std;

int main() {
    vector<int> arr;
    string s;
    getline(cin, s);
    stringstream ss(s);
    int i;
    while (ss >> i) {
        arr.push_back(i);
        if (ss.peek() == ' ') ss.ignore();
    }
    int n = arr.size();
    // int sum = 0;
    for (int i = 0; i < n; i++) {
        cout<<"["<<arr[i]<<"]";
    }
    return 0;

}