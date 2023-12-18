#ifndef COORDINATES_H
#define COORDINATES_H

#include <iostream>

//Created a struct for the x and y coordinate that are being passes in the main command line
struct Coordinates{

    //constructor
    Coordinates();

    //setter
    void set_x(int x);
    void set_y(int y);

    //getter
    int x() const;
    int y() const;

    //destructor
    ~Coordinates();

private:

    //private data memeber
    int x_;
    int y_;
};
#endif