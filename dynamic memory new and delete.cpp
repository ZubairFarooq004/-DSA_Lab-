#include <iostream>
using namespace std;
int main() {
int* ptr = new int;
* ptr = 88;
cout <<  "Value : " <<*ptr << endl;
delete (ptr);
return 0;
}

