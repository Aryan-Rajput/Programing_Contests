
#include <iostream>
#include <vector>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    std::vector<int> dp(n + 1, 0);
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    std::cout << "Enter the position of the Fibonacci number: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}
