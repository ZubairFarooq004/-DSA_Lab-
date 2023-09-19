#include<iostream>
using namespace std;
int main() {
int num = 42;
int* ptr = &num;
cout << "Value of num: " << num << endl;
cout << "Value pointed to by ptr: " << *ptr << endl;
return 0;
}

