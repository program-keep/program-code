#include <stdio.h>
/* 统计空格 制表符 换行符个数的程序 */ 
main() {
	
	int ns,nt,nn;
	int c;
	ns=nt=nn =0;
	while((c=getchar())!=EOF){
		if(c==' '){
			++ns;
		}else if(c=='\t'){
			++nt;
		}else if(c=='\n'){
			++nn;
		}
	}
	printf("空格个数：%d，制表符个数：%d，换行符个数：%d\n",ns,nt,nn);
}
