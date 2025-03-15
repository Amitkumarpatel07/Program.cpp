#include<iostream>
using namespace std;
int main(){
    int x = 12;
    int y = 45;
    cout<<x<<" "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}
