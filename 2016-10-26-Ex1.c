#include <stdio.h>
#include <stdlib.h>
/*輸入n與m,分別代表媽媽給的零用錢與小明想買的東西的價格。
輸出說明：
不夠，顯示Ｎ，並計算他不夠多少錢。如果足夠則顯示Ｙ。*/
int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	if(n<m) printf("N%d",m-n);
	else printf("Y"); 
	
	system("PAUSE");
	return 0;
}
