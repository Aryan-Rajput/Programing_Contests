// A number is a perfect square, or a square number, if it is the square of a positive integer.
// For example, 25 is a square number because 52 = 5 x 5 = 25
// The first 5 square numbers are: 1, 4, 9, 16, 25, and the sum of the odd squares is 1 + 9 + 25 = 35.
// Among the first 847 thousand square numbers, what is the sum of all the odd squares?

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long limit = 847000;
    long long sum = 0;
    for(long long i = 1; i <= limit; i += 2){
        sum += i * i;
    }
    cout << sum << endl;
    return 0;
}