/* ----------------------------------------------------------------------------
 * Copyright copy; 2016 Gary Kam <kamgary109@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
//shape.h

#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "neighborhood.h"
#include "buffer.h"

class Neighborhood;

class Shape {
private:
    std::string type_;
    std::string type_art_;
    
public:
    static const unsigned int size_x = 5;
    static const unsigned int size_y = 3;
    
    Shape(const std::string & type="empty");
    ~Shape();
    
    std::string getType();
    
    void drawToBuffer(Buffer & b, unsigned int x, unsigned int y) const;
    void setType(const std::string & type);
    bool isHappy( const Neighborhood & n,
                 unsigned int x,
                 unsigned int y ) const;
};

#endif
