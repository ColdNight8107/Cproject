#include <stdio.h>
#include <stdlib.h>
/*��J����
��J�@��p��ܬ����������s�ο��A��J�@��n�A��Jn�������C
��X����
������ܢܡA�íp�⤣���h�ֿ��C
�p�G���h��ܢ�C*/
int main(int argc, char *argv[]){
	
	int n,i,p,sum=0;
	 
	scanf("%d",&p);
	scanf("%d",&n);
	
	int a[n];//���ŧi��N�A�ŧi�}�C�A���MN��NULL 
	
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
