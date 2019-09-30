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
vector <int> Dcrnum::transform(){
	int i,j;
	vector <int> seq(len + 1);
	vector <bool> flag(len + 1);
	for (i = 0;i < len;i++){
		int cnt = 0;
		for(j = 0;;j++){
			if (flag[j] == true)continue;
			if (cnt == arr[i])break;
			cnt++;
		}
		seq[j] = len + 1 - i;
		flag[j] = true;
	}
	for (j =0;j<len+1;j++)
		if(flag[j]==false)
			seq[j] = 1;
	return seq;

}