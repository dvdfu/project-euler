#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>

using namespace std;

// Factorial Digit Sum
// Problem 20
// Find the sum of the digits in the number 100!

void multiplyNum (vector<int> &num, int m) {
    for (int i = num.size()-1; i >= 0; i--) {
        num[i] *= m;
    }
    for (int i = 0; i < num.size(); i++) {
        if (num[i] > 9) {
            if (i < num.size()-1) {
                num[i+1] += num[i]/10;
            }
            else {
                num.push_back(num[i]/10);
            }
            num[i] %= 10;
        }
    }
}

void printNum (const vector<int> num) {
    for (int i = num.size()-1; i >= 0; i--) {
        cout << num[i];
    }
    cout << endl;
}

void printSum (const vector<int> num) {
    int sum = 0;
    for (int i = num.size()-1; i >= 0; i--) {
        sum += num[i];
    }
    cout << sum << endl;
}

int main() {
    vector<int> number;
    number.push_back(1);
    for (int i = 1; i <= 100; i++) {
        multiplyNum(number, i);
    }
    printSum(number);

    return 0;
}