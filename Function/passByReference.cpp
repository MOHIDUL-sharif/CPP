#include<bits/stdc++.h>
using namespace std;

void passByReference(int *x){
      *x=500;
}
int main()
{
    int a=10;
    int *ptr=&a;
    passByReference(ptr);
    cout<<a<<endl;
    return 0;
}
