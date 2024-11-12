#pragma once
#include <vector>
#include <list>
#include <string>
#include <map>

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);//1

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el);//2

int wordsCounter(const std::string&);//3

std::map<std::string, int> wordsMapCounter(const std::string&);//4

std::vector<std::string> uniqueWords(const std::string&);//5

int diffWordsCounter(const std::string&);//6

void reverseNum(std::list<int>&);//7

void plusesDeleter(std::vector<int>&);//8

void Sort(std::list<int>&);//9
