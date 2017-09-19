//
// Created by mosch on 9/18/17.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Life {
private:
    int L[12][12] = { { 0 } };
    int gen;
    int freq;
    const string fileName = "hw3.dat";
public:
    // why cant I initialize an array inside a constructor?
    Life() {gen = 10; freq = 1;}
    void print() const {
        for (int i = 1; i < 11; i++) {
            for (int j = 1; j < 11; j++) {
                cout << L[i][j] << ' ';
            }
            cout << endl;
        }
    }
    // populate array based on input from text file. values are shifted over to (1, 1) to avoid leaving array bounds on check
    void loadState() {
        ifstream init;
        init.open(fileName);
        string data;
        int rowIndex = 1;
        while (!init.eof()) {
            getline(init, data);
            for (int h = 0; h < data.size(); h++) {
                if (data[h] == '*') {
                    L[rowIndex][h + 1] = 1;
                }
            }
            rowIndex++;
            data.clear();
        }
        init.close();
    }
    // check whether the cell lives or dies
    void checkCell() {
        int sum = 0;
        for (int i = 1; i < 11; i++) {
            for (int j = 1; j < 11; j++) {
                // if (L[i][j] == 1) {
                    for (int k = -1; k < 2; k++) {
                        for (int l = -1; l < 2; l++) {
                            // can't count (0, 0) to the sum
                            if ((L[i + k][j + l] == 1) && (k*k + l*l != 0)) {
                            // if ((L[i + k][j + l] == 1) && ((k != 0) && (l != 0))) {
                                // cout << "FOUND ONE" << endl;
                                sum++;
                            }
                        }
                    }
                    // remove sum increment from the base cell
                    // sum--;
                    // cout << "SUM: " << sum << endl;
                // }
                cout << sum << ' ';
                if (sum < 2) {
                    // cell dies from underpopulation
                    L[i][j] = 0;
                } else if (sum > 3) {
                    // cell dies from overpopulation
                    L[i][j] = 0;
                } else if (sum == 3) {
                    // reproduction
                    L[i][j] = 1;
                }
                sum = 0;
            }
            cout << endl;
        }

    }

};

int main() {

    Life x;
    x.loadState();
    x.print();
    cout << "*******************" << endl;
    cout << endl;
    cout << "*******************" << endl;
    x.checkCell();
    cout << "*******************" << endl;
    cout << endl;
    cout << "*******************" << endl;
    x.print();

    return 0;
}
