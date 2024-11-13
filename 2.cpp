#include "Header.h"

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el) {
    std::vector<int>::iterator l = first, r = last, sr;
    int f = 0;
    if (*first > el ) {
        return last;
    }

    while (l < r) {
        sr = l + (r - l) / 2;
        if (*sr > el) {
            r = sr ;
        }
        if (*sr < el){
            l = sr + 1;
        }
        if (*sr == el){
            return sr;
        }
    }
    if (!f) {
        return last;
    }
    if (el == *l or l==r) {
        return l;
    }
    return last;
}
