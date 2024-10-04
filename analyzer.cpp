#include <chrono>
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <cstdio>

int binary_search(vector<string> data, string element){

    int low = 0;
    int high = size(data);
    int mid = (low + high) / 2;
    while (low <= high){
      if (data[mid] == element){
        return mid;
      } else if (data[mid] < element){
        low = mid + 1;
      } else {
          return mid;
      }
     }

    return -1;
}


int linear_search(vector<string> data, string element){
    for (int i = 0; i < data.size(); i++){
      if (data[i] == element){
        return i;
        }
    }

    return -1;
}



int search(vector<string> data, string search_item) {
    std::cout << "Search for " << search_item;

    auto start = chrono::high_resolution_clock::now();
    int x = linear_search(data, search_item);
    auto end = chrono::high_resolution_clock::now();

    std::cout << "[not_here] Linear Search: " << (start-end) << " at position " << x;

    start = chrono::high_resolution_clock::now();
    int y = binary_search(data, search_item);
    end = chrono::high_resolution_clock::now();

    std::cout << "[not_here] Binary Search: " << (start-end) << " at position " << x;

    return 0;
}


int main() {

    vector<string> data = {"aaaaa","bbbbb"};

    search(data, "not here");
    search(data, "aaaa");
    search(data, "zzzz");




    return 0;
}