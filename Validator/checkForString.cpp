#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    int M = 1000;
    string s = inf.readToken("[a-zA-Z]{1,1000}");
    inf.readEoln();
    inf.readEof();
    ensuref(s.size() % 2 == 0, "string is not an even length");
}