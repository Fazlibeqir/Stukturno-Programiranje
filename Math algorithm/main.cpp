#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to find the nth permutation
void find_nth_permutation(int n, vector<int>& elements) {
    int size = elements.size();
    int total_permutations = factorial(size);
    if (n < 1 || n > total_permutations) {
        cout << "Error: Invalid value of n.\n";
        return;
    }
    n--; // Adjust n to 0-based indexing
    for (int i = 0; i < size; i++) {
        int index = n / factorial(size - 1 - i);
        swap(elements[i], elements[i + index]);
        sort(elements.begin() + i + 1, elements.end());
        n -= index * factorial(size - 1 - i);
        if (n == 0) {
            break;
        }
    }
}

// Main function to test find_nth_permutation function
int main() {
    vector<int> elements = {1, 2, 3,4,5,6,7};
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    find_nth_permutation(n, elements);
    cout << "The " << n << "th permutation is: ";
    for (auto element : elements) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}