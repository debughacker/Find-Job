#include <iostream>
#include <string.h>
using namespace std;

int BruteForceSearch(const char* s,const char* p)
{
    int i=0;
    int j=0;
    int size=(int)strlen(s);
    int psize=(int)strlen(p);
    while((i<size)&&(j<psize))
    {
        if(s[i+j]==p[j])
        {
            j++;
        }
        else
        {
            j=0;
            i++;
        }
    }
    if(j>=psize)
        return i;
    return -1;
}
int main()
{
    char s[]="f234324fregtgt";
    char p[]="f234";
    cout<<BruteForceSearch(s,p)<<"\n";
    return 0;
}
