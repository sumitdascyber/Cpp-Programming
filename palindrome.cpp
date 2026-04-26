#include<iostream>
using namespace std;

int main(){
    int n, reversed = 0, remainder, original;

    cout<< "Enter a number: ";
    cin>> n;
    original = n;

    while(n != 0){
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed){
        cout<< "The number is Palindrome" << endl;
    }
    else{
        cout<< "The number is not Palindrome" << endl;
    }
    
    return 0;
}