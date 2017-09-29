#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <sstream>
using namespace std;

// thank goodness for the internet
int roundUp(int numToRound, int multiple)
{
    if (multiple == 0)
        return numToRound;

    int remainder = numToRound % multiple;
    if (remainder == 0)
        return numToRound;

    return numToRound + multiple - remainder;
}

string reverse(string msg) {
    string reverse = msg;
    for (int i = 0; i < msg.length() + 1; i++) {
        reverse[i - 1] = msg[msg.length() - i];
    }
    return reverse;
}

// finish this to make perfect
string spaceFix(string msg) {
    for (int i = 4; i < msg.length(); i+=4) {
        // need to insert a space
    }
}

// complete!
string decToBinary(int x) {
    string result;
    int remains;
    if (x == 0) {
        return "0000";
    }
    while (x != 0) {
        result += to_string(x % 2);
        x /= 2;
    }
    // need to pad with zeros to the nearest fourth. why is this so hard...
    for (int i = result.length(); i < roundUp(i, 4); i++) {
        result += '0';
    }
    return reverse(result);
}

string decToHex(int x) {
    string result;
    int remains;
    int letter = 0;
    if (x == 0) {
        return "0";
    }
    while (x != 0) {
        letter = x % 16;
        if (letter < 10) {
            result += to_string(letter);
        } else {
            switch (letter) {
                case 10:
                    letter = 'A';
                break;
                case 11:
                    letter = 'B';
                break;
                case 12:
                    letter = 'C';
                break;
                case 13:
                    letter = 'D';
                break;
                case 14:
                    letter = 'E';
                break;
                case 15:
                    letter = 'F';
                break;
                default:
                    letter = '0';
                break;
            }
            result += letter;
        }
        x /= 16;
    }
    return reverse(result);
}

// complete!
int binaryToDecimal(string x) {
    int result = 0;
    string bitstream = reverse(x);
    for (int i = 0; i < bitstream.length(); i++) {
        if (bitstream[i] == '1') {
            result += pow(2, i);
        }
    }
    return result;
}

// complete!
string binaryToHex(string x) {
    string bitstream = reverse(x);
    string result = "";
    int temp = 0;
    for (int i = 0; i < bitstream.length(); i += 4) {
        if (bitstream.length() < 4) {
            for (int j = 0; j < bitstream.length(); j++) {
                if (bitstream[j + i] == '1') {
                    temp += pow(2, j);
                }
            }
        } else {
            for (int k = 0; k < 4; k++) {
                if (bitstream[k + i] == '1') {
                    temp += pow(2, k);
                }
            }
        }
        if (temp > 9) {
            switch (temp) {
                case 10:
                    result += 'A';
                    break;
                case 11:
                    result += 'B';
                    break;
                case 12:
                    result += 'C';
                    break;
                case 13:
                    result += 'D';
                    break;
                case 14:
                    result += 'E';
                    break;
                case 15:
                    result += 'F';
                    break;
                default:
                    cout << "???" << endl;
                    break;
            }
        } else {
            result += to_string(temp);
        }
        temp = 0;
    }
    return reverse(result);
}

// complete!
int hexToDecimal(string x) {
    string hex = reverse(x);
    int letter;
    int result = 0;
    for (int i = 0; i < hex.length(); i++) {
        stringstream ss;
        ss << hex[i];
        ss >> letter;
        if (letter != 0) {
            result += letter * pow(16, i);
        } else {
            switch (hex[i]) {
                case 'A':
                    letter = 10;
                break;
                case 'B':
                    letter = 11;
                break;
                case 'C':
                    letter = 12;
                break;
                case 'D':
                    letter = 13;
                break;
                case 'E':
                    letter = 14;
                break;
                case 'F':
                    letter = 15;
                break;
                default:
                    cout << "..." << endl;
                    break;
            }
            result +=  letter * pow(16, i);
        }
    }
    return result;
}

string hexToBinary(string x) {
    int digit;
    string result;
    for (int i = 0; i < x.length(); i++) {
        stringstream ss;
        ss << x[i];
        ss >> digit;
        if (digit != 0) {
            result += decToBinary(digit);
        } else {
            switch (x[i]) {
                case 'A':
                    digit = 10;
                break;
                case 'B':
                    digit = 11;
                break;
                case 'C':
                    digit = 12;
                break;
                case 'D':
                    digit = 13;
                break;
                case 'E':
                    digit = 14;
                break;
                case 'F':
                    digit = 15;
                break;
                default:
                    digit = 0;
                break;
            }
            result += decToBinary(digit);
        }
        result += ' ';
    }
    return result;
}

int main() {
    bool a = true;
    while(a) {
        string bh;
        int dec;
        int choice;    
        cout << "BINARY/HEX/DECIMAL CALCULATOR" << endl;
        cout << "0 B->H, 1 B->D, 2 H->B, 3 H->D, 4 D->B, 5 D->H" << endl;
        cin >> choice;
        cout << "ENTER VALUE TO CONVERT" << endl;
        switch(choice) {
            case 0:
                cin >> bh;
                cout << binaryToHex(bh) << endl;
            break;
            case 1:
                cin >> bh;
                cout << binaryToDecimal(bh) << endl;
            break;
            case 2:
                cin >> bh;
                cout << hexToBinary(bh) << endl;
            break;
            case 3:
                cin >> bh;
                cout << hexToDecimal(bh) << endl;
            break;
            case 4:
                cin >> dec;
                cout << decToBinary(dec) << endl;
            break;
            case 5:
                cin >> dec;
                cout << decToHex(dec) << endl;
            break;
            default:
                cout << "GOODBYE" << endl;
                a = false;
            break;
        }
    }

    return 0;
}
