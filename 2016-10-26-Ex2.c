#include <stdio.h>
#include <stdlib.h>
/*輸入說明
輸入一個p表示為媽媽給的零用錢，輸入一個n，輸入n筆價錢。
輸出說明
不夠顯示Ｎ，並計算不夠多少錢。
如果夠則顯示Ｙ。*/
int main(){
	
	int n,i,p,a[n],sum=0;
	 
	scanf("%d",&p);
	scanf("%d",&n);
	scanf("%d",&a[n-1]);
	
	for(i=0;i<=n-1;i++) sum+=a[i];
	
	if(sum<p) printf("N%d",p-sum);
	else printf("Y"); 
	
	system("PAUSE");
	return 0;
}
