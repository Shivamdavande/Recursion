#include<iostream>
using namespace std;

bool isPalindrome(string str, int i, int j) {

    if( i> j)  
        return true;
    

    if(str[i] != str[j]) {
        return false;
    } 
    else {
        return isPalindrome(str, i+1, j-1);
    }
}

int main() {
    string name = "abcba";
    cout << endl;

    bool result = isPalindrome(name, 0, name.length() - 1);

    if(result) {
        cout << "Yes, it is a palindrome" << endl;
    } else {
        cout << "No, it is not a palindrome" << endl;
    }



    return 0;


}