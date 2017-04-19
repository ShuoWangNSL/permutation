//
// Created by shuowang on 17-4-18.
//
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Incrnum{
public:
    Incrnum(int length);
    bool addone();
	void print();
    vector <int> transform();
private:
    int len;
    vector <int> arr;
};