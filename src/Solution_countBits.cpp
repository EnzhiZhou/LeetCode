#include "../include/Solution_countBits.h"

vector<int> Solution_countBits:: countBits(int n) {
    vector<int> bits(n+1);
    int HighBits=0;
    for (int i =1; i<n+1; ++i){
        if ((i&(i-1))==0){
            HighBits=i;
        }
        bits[i]=bits[i-HighBits]+1;
    }
    return bits;
}



