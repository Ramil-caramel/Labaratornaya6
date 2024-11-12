#include "Header.h"
std::vector<std::string> uniqueWords(const std::string& str) {
	std::map<std::string, int> sl = wordsMapCounter(str);
	std::vector<std::string> st;
	for (auto per : sl) {
		st.push_back(per.first);
	}
	return st;
}
