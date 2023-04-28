#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int M = 500;
int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    int M = 1000;
    string s = inf.readString();
    ensuref(s.size()%2==0, "string is not an even length");
    ensuref(s.size()<=1000, "string must not exceed 1000 character");
    inf.readEoln();
    inf.readEof();
}
