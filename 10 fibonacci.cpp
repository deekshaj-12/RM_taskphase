#include <iostream>

using namespace std;
int fibonacci(int n)
{
    if(n<=1)
    {
        return 1;
    }
    int sum=fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    for(int i=0;i<40;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}
