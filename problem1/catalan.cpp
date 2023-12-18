#include "catalan.h"

//constructor
Catalan::Catalan()
{
    this->n_ = 0;
}

Catalan::Catalan(int n)
{
    CheckN(n);
}

//setter
bool Catalan::set_n(int n)
{
    this->n_ = n;
    return true;
}

//getter
int Catalan::n() const
{
    return this->n_;
}

//checks if the n value 
unsigned long long int Catalan::CheckN(const int n)
{
    if(n < 0 && n >= 35){
        cout << "The number is an negative value or the number is greater than or equal to 100" << endl;
        return -1;
    }else{
        return CalculateCatalan(n);
    }
}

//recursion function for calculating catalan number
unsigned long long int Catalan::CalculateCatalan(unsigned int n)
{
    unsigned long long int catalan_array[n + 1];

    catalan_array[0] = catalan_array[1] = 1;

    for(int i = 2; i <= n; i++){
        catalan_array[i] = 0;
        for(int j = 0; j < i; j++){
            catalan_array[i] += catalan_array[j] * catalan_array[i - j - 1];
        }
    }

    return catalan_array[n];
}
