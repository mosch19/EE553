//
// Created by mosch on 10/13/17.
//
#include <vector>
#include <iostream>

void fill2(int m[10][10], int r, int c, int newColor, int startColor) {
    if(m[r][c] != startColor) {
        return;
    } else {
        m[r][c] = newColor;
        if (r > 0) {
            fill2(m, r-1, c, newColor, startColor);
        }
        if (r < 10-1) {
            fill2(m, r+1, c, newColor, startColor);
        }
        if (c > 0) {
            fill2(m, r, c-1, newColor, startColor);
        }
        if (c < 10-1) {
            fill2(m, r, c+1, newColor, startColor);
        }
    }
}


void fill(int m[10][10], int r, int c, int val) {
    // check starting color
    int startColor = m[r][c];
    fill2(m, r, c, val, startColor);

}

void fill3(int m[10*10], int r, int c, int val) {
    std::vector<int> todo;
    int here = r * 10 + c;
    int startColor = m[here];
    todo.push_back(here);
    while(todo.size() > 0) {
        int pixPos = todo.back();
        todo.pop_back();
        if (m[pixPos] == startColor) {
            m[pixPos] = val;
            // make sure its not off the edge
            if(pixPos % 10 < 9 && m[pixPos + 1] == startColor) {

            }
        }
    }
}

void print(int m[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << m[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int m[10][10] = { 0 };   // row major order. m00 -> m01 -> m02
    m[0][0] = 5;
    m[8][3] = 2;
    print(m);
    std::cout << "************************" << std::endl;
    fill(m, 5, 5, 1);
    print(m);
    fill3(m, 5, 5, 4);
    return 0;
}
