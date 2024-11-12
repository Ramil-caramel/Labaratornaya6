#include"Header.h"

void reverseNum(std::list<int> &v) {
	std::list<int> v1;
	for (std::list<int>::iterator i = v.begin(); i != v.end(); ++i) {
		v1.push_back(*i * -1);
		v1.push_back(*i);
	}
	v = v1;
}
