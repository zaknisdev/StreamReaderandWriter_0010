#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    
    ofstream outfile;

    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    while (true) {
        cout << "- ";
        getline(cin,baris);

        if (baris == "q") break;

        outfile << baris << endl;
    }
    outfile.close();

    ifstream infile;

    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membacca file " << endl;

    if(infile.is_open())
    {
        while (getline(infile, baris))
        {
            cout << baris << '\n';
        }
        infile.close();
    }
    else cout << "Unable to open file";
    return 0;
}