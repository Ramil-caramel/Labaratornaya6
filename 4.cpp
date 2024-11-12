#include "Header.h"
std::map<std::string, int> wordsMapCounter(const std::string &str) {
	std::map<std::string, int> sl;
    std::string::const_iterator it, i;
    std::string prom;
    i = str.end() - 1;

    for (it = str.begin(); it != i; it++) {
        if (std::isalpha(*it)) {
            prom += *it;
        }
        if (std::isalpha(*it) and ((*(it + 1) == ' ') or (*(it + 1) == ',') or (*(it + 1) == '.'))) {
            sl[prom] += 1;
            prom = "";
        }

    }
    if (std::isalpha(*i)) {
        prom += *i;
        sl[prom] += 1;
    }

	return sl;
}
