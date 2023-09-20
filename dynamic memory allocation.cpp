#include <iostream>
using namespace std;
int main() {
int* ptr = ( int*)malloc(sizeof(int));
*ptr = 77;
cout <<  "Value : " <<*ptr << endl;
free (ptr);
return 0;
}

