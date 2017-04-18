#include "dict_buf.h"

void dict_buf(string str){
	int len = str.length();
	int time;
	int *** buf = (int ***)malloc(len * sizeof(int **));
	int i,j;
	for (i = 0;i < len;i++){
		buf[i] = (int **)malloc(frac(i+1) * sizeof(int *));
		for (j = 0;j< frac(i+1);j++){
			buf[i][j] = (int *)malloc(i * sizeof(int));
		}
	}
	for (i = 0;i < len;i++){
		create_seq(i,buf);
	}
//	for (i = 0 ;i < frac(len);i++){
//		for (j =0;j < len;j++)
//			cout<<str[buf[len - 1][i][j]];
//			time = str[buf[len - 1][i][j]];
//		cout<<endl;
//	}
}

void create_seq(int n,int *** buf){
	int i,j,k,m;
	for (i = 0;i< frac(n);i++){
		buf[n][n * frac(n) + i][0] = n;
		for (j = 0;j < n;j++){
			buf[n][n * frac(n) + i][j + 1] = buf[n-1][i][j];
		}
	}
	for (k = 0;k < n;k++){
		string tmp;
		for (m = 0;m < k;m++){
			tmp.append(1,m);
		}
		for (m = k + 1;m <= n;m++){
			tmp.append(1,m);
		}

		for (i = 0;i< frac(n);i++){
		buf[n][k * frac(n) + i][0] = k;
			for (j = 0;j < n;j++){
				buf[n][k * frac(n) + i][j + 1] = tmp[buf[n-1][i][j]];
			}

		}
	}

}

int frac(int n){
	int i,res = 1;
	for (i = n;i > 1;i--){
		res = res * i;
	}
	return res;
}

