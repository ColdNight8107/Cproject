#include <stdio.h>
#include <stdlib.h>
/*��J����
��J�@��p��ܬ����������s�ο��A��J�@��n�A��Jn�������C
��X����
������ܢܡA�íp�⤣���h�ֿ��C
�p�G���h��ܢ�C*/
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
