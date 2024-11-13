#include <iostream>
#include <vector>
#include"Header.h"

int main()
{
    std::vector<int> v = { 6, 8, 1, 2, 3, 4, 5 };
    std::vector<int>::iterator it = Find(v.begin(), v.end(), 5);
    std::cout << "1)" << std::endl;
    if (it == v.end()) {
        std::cout << "function return iterator last" << std::endl;
    }
    else {
        std::cout << *it << std::endl;
    }
    

    std::cout << "2)" << std::endl;
    std::vector<int> v2 = { 1, 2, 3, 4, 6 };
    std::vector<int>::iterator it3 = findInSorted(v2.begin(), v2.end(), 6);
    if (it3 == v2.end()) {
        std::cout << "function return iterator last" << std::endl;
    }
    else {
        std::cout << *it3 << std::endl;
    }


    std::cout << "3)" << std::endl;
    std::string q = "can you can";
    std::cout << wordsCounter(q);
    std::cout << std::endl;


    std::cout << "4)" << std::endl;
    std::map<std::string, int> sl = wordsMapCounter(q);
    for (auto per : sl) {
        std::cout << per.first << "\t" << per.second << std::endl;
    }

    std::cout << "5)" << std::endl;
    std::vector<std::string> q1 = uniqueWords(q);
    for (auto i = q1.begin(); i != q1.end(); ++i) {
        std::cout << *i << std::endl;
    }
    std::cout << "6)" << std::endl;
    int sl1 = diffWordsCounter(q);
    std::cout << sl1 << std::endl;
    

    std::cout << "7)" << std::endl;
    std::list<int> nums1 = { 1, 5, 4, -3 };
    reverseNum(nums1);
    for (std::list<int>::iterator i = nums1.begin(); i != nums1.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;



    std::cout << "8)" << std::endl;
    std::vector<int> v1 = { 1, 0, -8, -9, 0, 10, 23, -7 };
    plusesDeleter(v1);
    for (std::vector<int>::iterator i = v1.begin(); i != v1.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;



    std::cout << "9)" << std::endl;
    std::list<int> nums = { 1, 5, 4, -3, 0, 9, 100,-10 };
    for (std::list<int>::iterator i = nums.begin(); i != nums.end(); ++i) {
        std::cout << *i  << " ";
    }
    std::cout << std::endl;
    Sort(nums);
    for (std::list<int>::iterator i = nums.begin(); i != nums.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}
