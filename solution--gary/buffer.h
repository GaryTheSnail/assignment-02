/* ----------------------------------------------------------------------------
 * Copyright copy; 2016 Gary Kam <kamgary109@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
//buffer.h

#ifndef BUFFER_H
#define BUFFER_H

#include <string>

class Buffer {
private:
    char * data_;
    
public:
    const unsigned int size_x;
    const unsigned int size_y;
    
    Buffer(unsigned int size_x, unsigned int size_y);
    ~Buffer();
    
    char get(unsigned int x, unsigned int y) const;
    void set(unsigned int x, unsigned int y, char c);
    void set(unsigned int pos_x, unsigned int pos_y, std::string s);
    void draw() const;
    void clear();
};

#endif
