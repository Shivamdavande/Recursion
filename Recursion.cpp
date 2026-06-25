#include<iostream>
using namespace std;

int factorial(int n) {

    if(n == 0) 
    return 1;

    int smallerproblem = factorial(n - 1);
    int bigproblem = n * smallerproblem;

    return bigproblem;
}

int main() {

    int  n;
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of " << n << " is " << ans << endl;

    
    return 0;
}

