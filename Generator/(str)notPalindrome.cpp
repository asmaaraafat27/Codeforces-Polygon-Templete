#include "testlib.h"
#include <iostream>
using namespace std;

const int MAXLEN = 500;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    int n = rnd.next(0,1);
    int len = rnd.next(2, MAXLEN);
    string s="";
    for (int j = 0; j < len*2; ++j)
    {
        if (j < len && n)
        {
            s += char(rnd.next('A', 'Z'));
        }
        else
        {
            s += char(rnd.next('a', 'z'));
        }
    }
    cout << s << endl;

    return 0;
}

