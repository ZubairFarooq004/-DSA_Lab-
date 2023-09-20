#include <iostream>
using namespace std;
int main (){
int num1 = 10, num2 = 20, num3 = 30;
int* arr[] = {&num1,&num2,&num3};
cout  << " Value at arr[0]: " << *arr[0] << endl;
return 0;
}

