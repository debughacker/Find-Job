#include <iostream>

using namespace std;

/*int LongestPalindrome(const char *s,int n)
{
    int i,j,max;
    if(s==0||n<1)
        return 0;
    max=0;

    for(i=0;i<n;++i){
        for(j=0;(i-j>=0)&&(i+j<n);++j)
        if(s[i-j]!=s[i+j])
            break;
        if((j-1)*2+1>max)
            max=(j-1)*2+1;
        for(j=0;(i-j>=0)&&(i+j+1<n);++j)
        if(s[i-j]!=s[i+j+1])
            break;
        if((j-1)*2+2>max)
            max=(j-1)*2+2;
    }
    return max;
}
int main()
{
    const char s[]="qwerewq";
    cout << LongestPalindrome(s,7) << endl;
    return 0;
}*/
int LongestPalindrome(const char *s,int n)
{
    int i,j,max;
    if(s==0||n<1)
        return 0;
    max=0;

    for(i=0;i<n;++i){
        for(j=0;(i-j>=0)&&(i+j<n);++j)
        if(s[i-j]!=s[i+j])
            break;
        if((j-1)*2+1>max)
            max=((j-1)*2)/2;
    }
    return max;
}
int main()
{
    const char s[]="#q#w#e#r#e#w#q#";
    cout << LongestPalindrome(s,15) << endl;
    return 0;
}








