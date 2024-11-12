#include "Header.h"

int wordsCounter(const std::string &str) {
    int ch = 0;
    std::string::const_iterator it, i;
    i = str.end() - 1;

    for (it = str.begin(); it != str.end()-1; it++){

        if (std::isalpha(*it) and ((*(it+1) == ' ') or (*(it+1) == ',') or (*(it+1) == '.'))) {
            ch++;
        }

    }
    if (std::isalpha(*(str.end() - 1))) {
        ch++;
    }

    return ch;
}
