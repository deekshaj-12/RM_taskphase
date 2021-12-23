#include <iostream>

using namespace std;
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin>>n;
    int p=fact(n);
    cout<<"Factorial of the number "<<n<<" is "<<p;
    return 0;
}
