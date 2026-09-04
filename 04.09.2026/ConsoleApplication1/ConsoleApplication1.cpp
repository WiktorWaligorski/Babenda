#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // jedna linia ez
    ifstream File("./pary.txt");
    string myText;
    ///pętla (doxygen)
    while (getline(File, myText)) {
        cout << myText;
    }

    File.close();
    /*komentarz
    wielko 
    liniowy*/
}
