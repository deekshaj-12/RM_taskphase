#include <iostream>

using namespace std;
void bubblesort(string c,int l)
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
    cout<<endl<<c<<endl;
}

int main()
{
    int n;
    cout << "Enter the number of words" << endl;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" word"<<endl;
        cin>>s[i];
    }
    //char c[n][100];
    //for(int i=0;i<n;i++)


       // int j=s[i].size();
       // c[n][j];
       /* for(int k=0;k<j;k++)
        {
            c[i][k]=s[i][k];
        }*/
       /* for(int i=0;i<n;i++)
        {
           int l= sizeof(c[i]);

        }*/
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].size()>s[j+1].size())
            {
                string t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
                /*for(int k=0;k<p;k++)
                {
                    c[j][k]=t2[k];
                }
                int o=s[i].size();
                for(int k=0;k<o;k++)
                {
                    c[j+1][k]=t1[k];
                }
                }*/
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<endl<<s[k]<<endl;
    }
    string s1[n];
    for(int i=0;i<n;i++)
    {
        s1[i]=s[i];
        bubblesort(s1[i],s1[i].size());
    }
    /*for(int k=0;k<n;k++)
    {
        cout<<endl<<s1[k]<<endl;
    }*/
    return 0;
}
