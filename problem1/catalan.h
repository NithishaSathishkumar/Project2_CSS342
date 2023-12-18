#ifndef CATALAN_H
#define CATALAN_H
#include <iostream>
using namespace std;

class Catalan{
public:
    //construct
    Catalan();
    Catalan(int n);

    //setter and getter
    bool set_n(int n);
    int n() const; 

    //checks the N value and prints the result
    unsigned long long int CheckN(const int n);

    //calculates the catalan
    unsigned long long int CalculateCatalan(unsigned int n);
    
private:
    int n_;
};
#endif