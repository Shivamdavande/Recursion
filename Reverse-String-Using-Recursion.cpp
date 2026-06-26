#include<iostream>
using namespace std;

// void printarr(string str, int i, int j) {
//     for(int k = i; k <= j; k++) {
//         cout << str[k] << " ";
//     } cout << endl;
// }

void reverse(string &str, int i, int j) {

   cout << "reverse :- " << str << endl;

    if(i > j) {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}

int main () {

    string name = "shivam";

    reverse(name, 0, name.length() - 1);

    cout << name << endl;
}