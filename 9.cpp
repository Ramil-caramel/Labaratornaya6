#include"Header.h"

void Sort(std::list<int> &vec) {
	for (std::list<int>::iterator i = vec.begin(); i != vec.end(); ++i) {
		for (std::list<int>::iterator j = i; j != vec.end(); ++j) {
			if (*j > *i) {
				int pr = *j;
				*j = *i;
				*i = pr;
			}
		}
	}
}
