#include "dict.h"
void dict(string str){
	int len = str.length();
	int i;
	cout<<str<<endl;
	if (len == 1){
	cout <<"End1"<<endl;
	return;
	}
	for(;;){
		int flag = -1;
		for (i = len - 2;i >= 0 ;i--){
			if (str[i] < str [i+1]){
				flag = i;
				break;
			}
		}
		if (flag == -1){
		cout << "End2"<<endl;
		return;
		}
		dict_next(flag,len,str);
	}
}

void dict_next(int flag,int len, string & str){
	int i,exchange;
	for (i = len - 1;i > flag;i--){
		if (str[i] > str[flag])break;
	}
	exchange = i;
	swap(str,flag,exchange);
	if (len - flag > 2)
		revsub(flag + 1,len ,str);
	//cout << str<<endl;
}

void revsub(int start,int len,string &str){
	int i;
	int sublen = len - start;
	string sub = str.substr(start,sublen);
	for (i = 0;i < sublen;i++){
		str[start + i] = sub[sublen - 1 - i];
	}
}