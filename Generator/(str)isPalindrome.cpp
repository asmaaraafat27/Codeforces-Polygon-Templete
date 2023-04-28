#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string s)
{
    int i =0, j = s.size()-1;
    while(i<j)
    {
        s[j]=s[i];
        i++;
        j--;
    }
    return s;
}
int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int N = rnd.next(1,500);
    string s = "";
    while(N)
    {
        s+=((N%10)+'0');
        N/=10;
    }
    reverse(s.begin(), s.end());
    string k = (rnd.next("[a-z]{"+s+"}"));
    string kk = (rnd.next("[A-Z]{"+s+"}"));
    int n = rnd.next(0,1);
    if(n)
    {
        cout<<isPalindrome(k)<<isPalindrome(kk);
    }
    else
    {
        cout<<isPalindrome(kk)<<isPalindrome(k);
    }
}
