/* ----------------------------------------------------------------------------
 * Copyright copy; 2016 Gary Kam <kamgary109@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
//neighborhood.h

#ifndef NEIGHBORHOOD_H
#define NEIGHBORHOOD_H
#include "shape.h"

class Shape;
class Neighborhood {
    
private:
    Shape * neighborhood_;
    
public:
    const unsigned int size_x;
    const unsigned int size_y;
    
    Neighborhood(unsigned int size_x, unsigned int size_y);
    ~Neighborhood();
    Shape get(unsigned int x, unsigned int y) const;
    void set(unsigned int x, unsigned int y, const Shape & s);
    void move(unsigned int old_x, unsigned int old_y);
    void animate(unsigned int frames);
};

#endif
