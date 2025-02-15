#include <stdio.h> 

int power(int m,int n);

/* 测试power函数 第二个版本 */ 
main(){
	int i;
	
	for(i=0;i<=10;++i){
		printf("%d %d %d\n",i,power(2,i),power(-3,i));
	}
	return 0;
} 

/* power：求底的n次幂；n>=0 */
int power(int base,int n) {
	int p;
	p=1;
	for(;n>0;--n){
		p = p*base;
	}
	return p;
	
}
