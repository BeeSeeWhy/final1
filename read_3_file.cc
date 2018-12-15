#include <fstream>
#include <iostream>
using namespace std;

int main() {
    string input; // hold file input
    int count = 0;
    fstream read_file; // filestream object

    // open file
    read_file.open("cards.txt", ios::in);
    if(read_file) {
        // read item
        getline(read_file, input);
        while (count < 3) {
            // display input
            cout << input << endl;

            // read next line
            getline(read_file, input);
            count++;
        }
        // close file
        read_file.close();
    }
    else
        cout << "ERROR: Cannot open file.\n";
    return 0;
}
