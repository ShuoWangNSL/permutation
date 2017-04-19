#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Dcrnum{
public:
    Dcrnum(int length);
    bool addone();
	void print();
private:
    int len;
    vector <int> arr;
};