#include <stdio.h>
#include <stdlib.h>
/*輸入說明
輸入一個p表示為媽媽給的零用錢，輸入一個n，輸入n筆價錢。
輸出說明
不夠顯示Ｎ，並計算不夠多少錢。
如果夠則顯示Ｙ。*/
int main(int argc, char *argv[]){
	
	int n,i,p,sum=0;
	 
	scanf("%d",&p);
	scanf("%d",&n);
	
	int a[n];//先宣告完N再宣告陣列，不然N為NULL 
	
	for(i=0;i<n;i++){
	  scanf("%d",&a[i]);
	  sum+=a[i];
    }

	if(sum<=p){
	  printf("Y");
	}
	else{
	  printf("N%d",sum-p);
	}
	
	system("PAUSE");
	return 0;
}
