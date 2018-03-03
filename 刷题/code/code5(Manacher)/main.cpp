#include <iostream>
#include <string.h>
using namespace std;

/*void Manacher(char* s,int* p)
{
    int size=strlen(s);
    p[0]=1;
    int id=0;
    int mx=1;
    for(int i=1;i<size;i++)
    {
        if(mx>i)
        {
            p[i]=min(p[2*id-i],mx-i);
        }
        else
        {
            p[i]=1;
        }
        for(;s[i+p[i]]==s[i-p[i]];p[i]++);
        if(mx<i+p[i])
        {
            mx=i+p[i];
            id=i;
        }
    }
}*/

void Manacher(char* s,int* p)
{
    int size=strlen(s);
    p[0]=1;
    int id=0;
    int mx=1;
    for(int i=1;i<size;i++)
    {
        if(mx>i)
        {
            if(p[2*id-i]!=mx-i)
            {
                p[i]=min(p[2*id-i],mx-i);
            }
            else
            {
                p[i]=p[2*id-i];
                for(;s[i+p[i]]==s[i-p[i]];p[i]++);
            }
        }
        else
        {
            p[i]=1;
            for(;s[i+p[i]]==s[i-p[i]];p[i]++);
        }
        if(mx<i+p[i])
        {
            mx=i+p[i];
            id=i;
        }
    }
}




int main()
{
    int p[100];
    char s[]="$#1#2#2#1#3#2#1#";
    int i,j;
    int size=strlen(s);
    Manacher(s,p);
    for(i=0;i<size;i++)
        cout<<p[i]<<endl;
    return 0;
}
