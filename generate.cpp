#include <algorithm>
#include <iostream>
#include <string>
#include <time.h>
#include "dict.h"
#include "dict_buf.h"
using namespace std;
int main(){
	clock_t start_stl, finish_stl ,start_dict , finish_dict ,start_buf , finish_buf ,start_2 , finish_2 ,start_3 , finish_3;
	double time_stl,time_dict,time_buf;
	string str = "0123456789a";
//	sort(str.begin(),str.end());
	start_stl = clock();
	cout<<str<<endl;
	while (next_permutation(str.begin(),str.end())){
	//	cout<<str<<endl;
	}
	finish_stl = clock();
//	cout << str<<endl;
	cout <<endl;
	
	start_dict = clock();
	dict(str);
	finish_dict = clock();

	time_stl = (double)(finish_stl - start_stl)/CLOCKS_PER_SEC;
	time_dict = (double)(finish_dict - start_dict)/CLOCKS_PER_SEC;
	cout<<"STL:"<<time_stl<<endl;
	cout<<"dict:"<<time_dict<<endl;

	string test = "wang";
	test = test + test[1];
	cout<<test<<endl;
	cout<<test.substr(2,3);
	for (int i = 1;i<2;i++){
	cout<<"1111111"<<endl;
	}

	str = "0123456789a";
	start_buf = clock();
	dict_buf(str);
	finish_buf = clock();

	time_stl = (double)(finish_stl - start_stl)/CLOCKS_PER_SEC;
	time_dict = (double)(finish_dict - start_dict)/CLOCKS_PER_SEC;
	time_buf = (double)(finish_buf - start_buf)/CLOCKS_PER_SEC;
	cout<<"STL:"<<time_stl<<endl;
	cout<<"dict:"<<time_dict<<endl;
	cout<<"buf:"<<time_buf<<endl;

}