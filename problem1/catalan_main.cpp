#include "catalan.h"
#include <iostream>

int main(int argc, char *argv[]){
    Catalan myCatalan;

    int n = stoi(argv[1]);
    unsigned long long output = myCatalan.CalculateCatalan(n);

    cout << output << endl;

    return 0;

}