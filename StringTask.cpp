#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    if(ch=='A'|| ch=='E'|| ch=='O'|| ch=='I'|| ch=='U'|| ch=='Y'|| ch=='a'|| ch=='e'|| ch=='o'|| ch=='i'|| ch=='u'|| ch=='y')
        return true;
    return false;
}
int main()
{
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(!isVowel(s[i]))
        {
         ans+=".";
        if(isupper(s[i]))
            ans+=tolower(s[i]);
        else
            ans+=s[i];
        }
    }
    cout<<ans;
    return 0;
}