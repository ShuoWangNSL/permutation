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
	clock_t start_stl, finish_stl ,start_dict , finish_dict ,start_buf , finish_buf ,start_incr , finish_incr ,start_dcr , finish_dcr;
	double time_stl,time_dict,time_buf,time_incr,time_dcr;
	string str = "012345789ab";
    int length =str.length();
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


	start_buf = clock();
//	dict_buf(str);
	finish_buf = clock();
    time_buf = (double)(finish_buf - start_buf)/CLOCKS_PER_SEC;

    start_incr = clock();

    vector <int> res1;
	Incrnum * num1 = new Incrnum(length - 1);
	num1->print();
	for (int i = 0;i < frac(length);i++){
        res1 = num1->transform();
//       for (int j = res1.size() -1;j >= 0;j--)
//           cout<<res1[j];
//        cout<<endl;
		if(num1->addone()){}
//		num1->print();
	}
    finish_incr = clock();
    time_incr = (double)(finish_incr - start_incr)/CLOCKS_PER_SEC;


    start_dcr = clock();
    vector <int> res2;
	Dcrnum * num2 = new Dcrnum(length - 1);
	num2->print();
	for (int i = 0;i < frac(length);i++){
        res2 = num2->transform();
 //       for (int j = res2.size() - 1;j >= 0 ;j--)
 //           cout<<res2[j];
 //       cout<<endl;
		if(num2->addone()){}
//		num2->print();
	}
    finish_dcr = clock();
    time_dcr = (double)(finish_dcr - start_dcr)/CLOCKS_PER_SEC;



    ofstream fp("/home/shuowang/permutation/res.txt",ios::app);
    if(!fp){cout<<"Fail Open!"<<endl;}
    fp<<"len = "<<str.length()<<endl;
    fp<<"STL:"<<time_stl<<endl;
    fp<<"dict:"<<time_dict<<endl;
    fp<<"buf:"<<time_buf<<endl;
    fp<<"incr:"<<time_incr<<endl;
    fp<<"dcr:"<<time_dcr<<endl<<endl;
    fp.close();
}