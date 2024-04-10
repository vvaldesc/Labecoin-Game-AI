#include <iostream>
#include <string>


#include "Labecoin.h"

using namespace std;


int main()
{
    
    try
    {
        Labecoin labecoin;
        labecoin.init();
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}