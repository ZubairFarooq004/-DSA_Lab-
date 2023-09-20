#include <iostream>
using namespace std;
int main() {
 int num = 42;
int* const ptr = &num;
*ptr = 50;
return 0;
}

