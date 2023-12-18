#include "coordinates.h"

//default constructor
Coordinates::Coordinates() {
    this->x_ = 0;
    this->y_ = 0;
}

//setter
void Coordinates::set_x(int x) {
    this->x_ = x;
}

void Coordinates::set_y(int y) {
    this->y_ = y;
}

//getter
int Coordinates::x() const {
    return this->x_;
}

int Coordinates::y() const {
    return this->y_;
}

//destructor
Coordinates::~Coordinates() {
}
