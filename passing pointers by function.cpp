#include<iostream>
using namespace std;
void modifyValue(int* ptr) {
*ptr = 99;
}
int main (){
int num = 42;
cout << "Before: " << num <<endl;
modifyValue (&num);
cout << "After: " << num <<endl;
return 0;
}

