#include <iostream>
#include <string.h>
using namespace std;

void Swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}

void Reverse(char *a,char *b)
{
    while(a<b)
        Swap(a++,b--);
}

bool Next_permutation(char a[])
{
    char *pEnd=a+strlen(a);
    if(a==pEnd)
        return false;
    char *p,*q,*pFind;
    pEnd--;
    p=pEnd;
    while(p!=a)
    {
        q=p;
        --p;
        if(*p<*q)
        {
            pFind=pEnd;
            while(*pFind<=*p)
                --pFind;
            Swap(pFind,p);
            Reverse(q,pEnd);
            return true;
        }
    }
    Reverse(p,pEnd);
    return false;
}

int main()
{
    char a[]="75621";
    Next_permutation(a);
    cout<<a;
    return 0;
}
