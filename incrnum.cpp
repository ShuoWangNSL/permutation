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

vector <int> Incrnum::transform(){
    int i,j;
    vector <int> seq(len + 1);
    vector <bool> flag(len + 1);
    for (i = len - 1;i >= 0;i--){
        int cnt = 0;
        for(j = 0;;j++){
            if (flag[j] == true)continue;
            if (cnt == arr[i])break;
            cnt++;
        }
        seq[j] = i + 2;
        flag[j] = true;
    }
    for (j =0;j<len+1;j++)
        if(flag[j]==false)
            seq[j] = 1;
    return seq;
}