#include "swap.h"
bool swap(string &str,int i,int j){
/*
	int length = str.length();
	if (i >= length || j >=length)
		return false;
	else  if (i == j)
		return true;
	else{
*/
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		return true;
//	}
}