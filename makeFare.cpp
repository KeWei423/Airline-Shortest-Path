#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    int temp;
    string line,
           input = "/home/allen/School/CS8/finaldata/Resources/RAW/USfaresOLD.dat",
           output = "/home/allen/School/CS8/finaldata/Resources/RAW/USfares.dat";
    ifstream in;
    fstream out;
    in.open(input);
    out.open(output);
    while(getline(in, line))
    {
        // IATA:COST
        out<<line.substr(line.find_first_not_of("1234567890\t"), 3)<<":"
           <<line.substr(line.find_last_of("\t")+1)<<endl;
    }
    in.close();
    out.close();
    cout<<"Finished!"<<endl;
    return 0;
}
