#include <iostream>
#include <algorithm>

using namespace std;
void bubblesort(char c[],int l)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l-i;j++)
        {
            if(c[j]>c[j+1])
            {
                char t=c[j];
                c[j]=c[j+1];
                c[j+1]=t;

            }
        }
    }

    for(int k=0;k<=l;k++)
    {
        cout<<c[k];
    }

}
int main()
{
    string word;
    cout<<"Enter word";
    getline(cin,word);
    int l=word.length();
    remove(word.begin(), word.end(), ' ');
    char s[l];
    for(int i=0;i<l;i++)
    {
        s[i]=word[i];
        cout<<s[i];
    }

    bubblesort(s,l);
    return 0;
}
