#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10]="how",b[10]="are",c[10]="you";
    int i;
    int n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            a[i]='%';
        }
    }
    for(i=0;i<n;i++){
        if(b[i]=='b'||b[i]=='c'||b[i]=='d'||b[i]=='f'||b[i]=='g'||b[i]=='h'||b[i]=='j'||b[i]=='k'||b[i]=='l'||b[i]=='m'||b[i]=='n'||b[i]=='p'||b[i]=='q'||b[i]=='r'||b[i]=='s'||b[i]=='t'||b[i]=='v'||b[i]=='w'||b[i]=='x'||b[i]=='y'||b[i]=='z')
        {
            b[i]='#';
        }
    }
    for(i=0;i<n;i++){
        if(c[i]>=97 && c[i]<=122)
        {
            c[i]=c[i]-32;
        }
    }
    for(i=0;i<n;i++)
    {
       cout<<a[i];
    }
    for(i=0;i<n;i++)
    {
       cout<<b[i];
    }
    for(i=0;i<n;i++)
    {
       cout<<c[i];
    }
    return 0;
}

