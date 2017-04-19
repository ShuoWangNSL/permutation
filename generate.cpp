#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "dict.h"
#include "dict_buf.h"
#include "incrnum.h"
#include "dcrnum.h"
using namespace std;
int main(){
	clock_t start_stl, finish_stl ,start_dict , finish_dict ,start_buf , finish_buf ,start_2 , finish_2 ,start_3 , finish_3;
	double time_stl,time_dict,time_buf;
	string str = "0123";
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

	start_buf = clock();
	dict_buf(str);
	finish_buf = clock();

	time_stl = (double)(finish_stl - start_stl)/CLOCKS_PER_SEC;
	time_dict = (double)(finish_dict - start_dict)/CLOCKS_PER_SEC;
	time_buf = (double)(finish_buf - start_buf)/CLOCKS_PER_SEC;

	ofstream fp("/home/shuowang/permutation/res.txt",ios::app);
	if(!fp){cout<<"Fail Open!"<<endl;}
//	fp.seekp(2);
	fp<<"len = "<<str.length()<<endl;
	fp<<"STL:"<<time_stl<<endl;
	fp<<"dict:"<<time_dict<<endl;
	fp<<"buf:"<<time_buf<<endl<<endl;
	fp.close();
	Incrnum * num1 = new Incrnum(3);
	num1->print();
	for (int i = 0;i<frac(4);i++){
		if(num1->addone())
		num1->print();
	}

	Dcrnum * num2 = new Dcrnum(3);
	num2->print();
	for (int i = 0;i<frac(4);i++){
		if(num2->addone())
		num2->print();
	}
}