/* ----------------------------------------------------------------------------
 * Copyright copy; 2016 Gary Kam <kamgary109@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
//buffer.cpp

#include <cstdlib>
#include <iostream>
#include "buffer.h"
using std::endl;
using std::cout;
using std::cin;

Buffer::Buffer(unsigned int size_x, unsigned int size_y) : size_x(size_x), size_y(size_y) {
    data_ = new char[size_x*size_y];
    clear();
}

Buffer::~Buffer() {
    delete[] data_;
}

char Buffer::get(unsigned int x, unsigned int y) const {
    if (x >= size_x || y >= size_y) {
        std::cerr << "ERROR: `Buffer::get`: index out of bounds\n";
        exit(1);
    }
    return data_[y * size_x + x];
}

void Buffer::set(unsigned int x, unsigned int y, char c) {
    if (x >= size_x || y >= size_y) {
        std::cerr << "ERROR: `Buffer::get`: index out of bounds\n";
        exit(1);
    }
    data_[y * size_x + x] = c;
}

void Buffer::set(unsigned int pos_x, unsigned int pos_y, std::string s) {
    for (int i = 0, a = pos_x, b = pos_y; i < s.length(); i++) {
        if (s[i] == '\n') {
            b++;
            a = pos_x;
        }
        else
            set(a++, b, s[i]);
    }
}

void Buffer::draw() const {
    for (int y = 0; y < size_y; y++) {
        for (int x = 0; x < size_x; x++)
            cout << get(x, y);
    }
    cout << endl;
}

void Buffer::clear() {
    for (unsigned int z = 0; z < size_x*size_y; z++)
        data_[z] = ' ';
    
};
