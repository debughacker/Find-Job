#include <iostream>
#include <string.h>
using namespace std;

void CalcNext(char* p,int next[])
{
    int nLen=strlen(p);
    next[0]=-1;
    int k=-1; //ǰ׺
    int j=0;  //��׺
    while(j<nLen)
    {
        if(p[j]==p[k]||k==-1)
        {
            k++;
            j++;
            next[j]=k;
        }
        else
        {
            k=next[k];
        }
    }
}

/*
void CalcNext2(char* p,int next[])
{
    int nLen=strlen(p);
    next[0]=-1;
    int k=-1;
    int j=0;
    while(j<nLen)
    {
        if(k==-1||p[j]==p[k])
        {
            ++k;
            ++j;
            if(p[j]==p[k])
                next[j]=next[k];
            else
                next[j]=k;
        }
        else
        {
            k=next[k];
        }
    }
}
*/

int main()
{
    char s[]="abaabcaba";
    int next[100];
    CalcNext(s,next);
    int n=strlen(s);
    for(int i=0;i<n;i++)
        cout<<next[i]<<"\n";
    return 0;
}
