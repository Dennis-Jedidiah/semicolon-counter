/*
Okay so how am I gonna do this?
first i need to accept command line parameters
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (size_t i = 0; i < argc; i++)
    {
        cout<<"argv: "<<argv[i]<<endl;
    }
    
    return 0;
}
