#include "Header.h"
int diffWordsCounter(const std::string &str) {
	int a = 0;
    std::map<std::string, int> sl = wordsMapCounter(str);
    for (auto per : sl) {
        a++;
    }
    return a;
}
