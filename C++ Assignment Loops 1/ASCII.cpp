// Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int i = 0;
    while(i < 26) {
        cout << "ASCII value of " << ch << " = " << int(ch) << endl;
        ch++;
        i++;
    }
}

