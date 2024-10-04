#include <chrono>
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <cstdio>


int search(vector<string> data, string search_item) {
    std::cout << "Search for " << search_item;

    auto start = chrono::high_resolution_clock::now();
    int x = linear_search(data, search_item);
    auto end = chrono::high_resolution_clock::now();

    std::cout << "[not_here]"






    return 0;
}


int main() {

    vector<string> data = {"aaaaa","bbbbb"};

    search(data, "not here");



    return 0;
}