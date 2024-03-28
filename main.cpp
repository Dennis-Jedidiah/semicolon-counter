/*
Okay so how am I gonna do this?
first i need to accept command line parameters
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream file("testfile.txt");
    string line;
    while (!file.eof())
    {
        file>>line;
        cout<<line<<endl;
    }
    
    // for (size_t i = 0; i < argc; i++)
    // {
    //     cout<<"argv: "<<argv[i]<<endl;
    // }
    file.close();
    return 0;
}
