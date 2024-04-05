/*
Okay so how am I gonna do this?
first i need to accept command line parameters
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int semi_count = 0;
    string filename = argv[1];
    ifstream file(filename);
    string line;
    while (!file.eof())
    {
        file>>line;
        size_t index_of_semi = line.find(';');
        if (index_of_semi != string::npos)
        {
            semi_count++;
        }
        
    }

    cout<<"The number of semicolons in this file is: "<< semi_count<<endl;
    
    file.close();
    return 0;
}
