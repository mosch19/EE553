//
// Created by mosch on 9/18/17.
// Sources: http://www.cplusplus.com/reference/sstream/stringstream/stringstream/ (string stream to pull out gen/freq data)
//
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

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
    int getGen() {
        return gen;
    }
    int getFreq() {
        return freq;
    }
    void print() const {
        for (int i = 1; i < 11; i++) {
            for (int j = 1; j < 11; j++) {
                if (L[i][j] == 0) {
                    cout << '-' << ' ';
                } else {
                    // cout << L[i][j] << ' ';
                    cout << '*' << ' ';
                }
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
            if (rowIndex ==1) {
                stringstream ss;
                ss << data;
                ss >> gen >> freq;
            }
            for (int h = 0; h < data.size(); h++) {
                if (data[h] == '*') {
                    L[rowIndex - 1][h + 1] = 1;
                }
            }
            rowIndex++;
            data.clear();
        }
        init.close();
        // cout << "GEN: " << gen << ", FREQ: " << freq << endl;
    }
    // check whether the cell lives or dies
    void checkCell() {
        int sum = 0;
        // make temp array to hold L values
        int next[12][12] = { {0} };
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                next[i][j] = L[i][j];
            }
        }
        for (int i = 1; i < 11; i++) {
            for (int j = 1; j < 11; j++) {
                // get rid of this double for loop by using an 1d array and adding width of total to get to other side
                // look at the library to get terminal length and width and then I can print character by character
                for (int k = -1; k < 2; k++) {
                    for (int l = -1; l < 2; l++) {
                        // can't count (0, 0) to the sum
                        if ((L[i + k][j + l] == 1) && (k*k + l*l != 0)) {
                            // cout << '(' << k << ',' << l << ')' << ' ';
                            sum++;
                        }
                    }
                }
                // cout << sum << ' ';
                if (sum < 2) {
                    // cell dies from underpopulation
                    next[i][j] = 0;
                } else if (sum > 3) {
                    // cell dies from overpopulation
                    next[i][j] = 0;
                } else if (sum == 3) {
                    // cell reproduction
                    next[i][j] = 1;
                }
                sum = 0;
            }
            // cout << endl;
        }
        // need to copy the other array back...
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                L[i][j] = next[i][j];
            }
        }

    }

};

void displayGen(int x) {
    cout << "*******************" << endl;
    if (x < 10) {
        cout << "** GENERATION " << '0' << x << " **" << endl;
    } else if (x < 100) {
        cout << "** GENERATION " << x << " **" << endl;
    } else {
        cout << "* GENERATION " << x << " *" << endl;
    }
    cout << "*******************" << endl;
}

int main() {

    Life x;
    x.loadState();
    int gen = x.getGen();
    int freq = x.getFreq();
    int count = freq;

    for (int z = 0; z <= gen; z++) {
        if (count == freq) {
            count = 0;
            displayGen(z);
            x.print();
        }
        x.checkCell();
        count++;
    }

    return 0;
}
