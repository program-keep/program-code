#include <stdio.h> 

int power(int m,int n);

/* ����power���� */ 
main(){
	int i;
	
	for(i=0;i<=10;++i){
		printf("%d %d %d\n",i,power(2,i),power(-3,i));
	}
	return 0;
} 

/* power����׵�n���ݣ�n>=0 */
int power(int base,int n) {
	int i,p;
	
	p = 1;
	for(i=0;i<n;++i){
		p = p*base;
	}
	return p;
	
}
