#include <iostream>

using namespace std;
long binary(int n)
{
    long n2;
    while(n>0)
    {
        int n1=n%2;
        n2=n2*10+n1;
        n=n/2;
    }
    return n2;
}
int octal(int n)
{
    int n2;
    while(n>0)
    {
        int n1=n%8;
        n2=n2*10+n1;
        n=n/8;
    }
    return n2;
}
int hexadecimal(int n)
{   int n2;
    while(n>0)
    {
        int n1=n%16;
        n2=n2*10+n1;
        n=n/16;
    }
    return n2;
}



int main()
{
    cout << "Enter number" << endl;
    int n,n1;
    cin>>n;
    long bi=binary(n);
    cout<<"binary quivalent is "<<bi<<endl;
    cout<<"octal equivalent is "<<octal(n)<<endl;
    cout<<"hexadecimal equivalent is "<<hexadecimal(n)<<endl;
    return 0;
}
