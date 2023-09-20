#include <iostream>
using namespace std;
int add(int a,int b){
return a + b;
}
int main (){
int (* ptr)(int , int) = add;
int (** pptr)(int , int) = &ptr;
cout  << " Sum: " << (*pptr)(5,7) << endl;
return 0;
}

