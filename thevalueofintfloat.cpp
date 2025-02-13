#include<iostream>
using namespace std;
int main (){ 
int a = 45;
float b = 45.46;
cout<<"The value of a is "<<(float)a;
cout<<"The value of a is "<<float(a);
 
cout<<"The value of b is "<<(int)b;
cout<<"The value of b is "<<int(b);
int c = int(b);

cout<<"The expression is "<<a + b;
cout<<"The expression is "<<a + int(b);
cout<<"The expression is "<<a + (int)b;

return 0;
}
