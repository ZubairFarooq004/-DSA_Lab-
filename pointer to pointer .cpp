#include<iostream>
using namespace std;
int main() {
int num = 42;
int* ptr1 = &num;
int** ptr2 = &ptr1;
cout <<  "Value of num: "<< **ptr2 << endl;
return 0;
}

