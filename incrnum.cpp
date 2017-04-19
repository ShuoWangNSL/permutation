#include "incrnum.h"
Incrnum::Incrnum(int length){
	int i;
	len = length;
	for(int i = 0;i < len; i++){
		arr.push_back(0);
	}
}

void Incrnum::print(){
	int i;
	for(int i = len - 1;i >= 0; i--){
		cout<<arr[i];
	}
	cout<<endl;
}

bool Incrnum::addone(){
	int i,flag = 0;
//	for (i = 0;i < len;i++){
	//	if (arr[i] < i + 1){
//			flag = 1;
//			break;
//		}		
//	}

//	if(flag == 0){
//		cout<<"Maximum Already."<<endl;
//		return;
//	}
	arr[0]++;
	for (i = 0;i < len -1;i++){		
		if (arr[i] > i+1){
//			arr[i] = arr[i] - (i+2);
			arr[i] = 0;
			arr[i + 1]++;                               
		}
	}
	if (arr[len -1] > i+1){
		cout<<"Maximum Already."<<endl;
		arr[len - 1] = 0;
		return false;
	}
	else
		return true;
}
