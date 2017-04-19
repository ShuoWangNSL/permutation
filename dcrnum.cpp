#include "dcrnum.h"
Dcrnum::Dcrnum(int length){
	int i;
	len = length;
	for(int i = 0;i < len; i++){
		arr.push_back(0);
	}
}

void Dcrnum::print(){
	int i;
	for(int i = len - 1;i >= 0; i--){
		cout<<arr[i];
	}
	cout<<endl;
}

bool Dcrnum::addone(){
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
		if (arr[i] > len - i){
//			arr[i] = arr[i] - (len + 1 - i);
			arr[i] = 0;
			arr[i + 1]++;                               
		}
	}
	if (arr[len -1] > 1){
		cout<<"Maximum Already."<<endl;
		arr[len - 1] = 0;
		return false;
	}
	else
		return true;
}
