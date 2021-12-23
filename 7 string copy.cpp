#include <iostream>

using namespace std;

int main()
{

    string copy="",s="",*s1;
    cout << "Enter a string: " << endl;
    getline(cin,s);
    s1=&s;
    cout<<" the copy of the string is "<<*s1;
    return 0;
}
