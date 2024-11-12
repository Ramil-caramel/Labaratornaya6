#include"Header.h"

void plusesDeleter(std::vector<int> &v) {
    std::vector<int> v1;
    for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
        if (*i <= 0) {
            v1.push_back(*i);
        }
    }
    v = v1;
}
