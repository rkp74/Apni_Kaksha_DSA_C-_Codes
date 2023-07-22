#include <vector>
#include <cmath>
using namespace std;

int minSquare(int n) {
    if (n <= 0)
        return 0;

    // Create a vector to store the minimum squares required for each number from 0 to n
    vector<int> dp(n + 1, INT_MAX);

    // Base case: 0 requires 0 squares
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            // Update dp[i] if we find a smaller value
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    return dp[n];
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int result = minSquare(n);
    cout << "Minimum number of squares that add up to " << n << " is: " << result << endl;

    return 0;
}
