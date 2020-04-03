#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[10]="hostel",t[10];
    int i,n;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
             t[i]=s[i];
            s[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }

    return 0;
}

