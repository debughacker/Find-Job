#include <iostream>
using namespace std;
char str[]="123456678";
int size=sizeof(str)/sizeof(char);
int count=0;
void Premutation(int from,int to)
{
    if(from==to)
    {
        count++;
        cout<<count<<":\t";
        for(int i=0;i<=to;i++)
        {
            cout<<str[i];
        }
        cout<<'\n';
        return;
    }
    int mark[256];
    for(int i=0;i<256;i++)
        mark[i]=0;
    for(int i=from;i<=to;i++)
    {
        if(mark[str[i]]==1)
            continue;
        mark[str[i]]=1;
        swap(str[i],str[from]);
        Premutation(from+1,to);
        swap(str[i],str[from]);
    }
}
int main()
{
    Premutation(0,size-2);
    return 0;
}
