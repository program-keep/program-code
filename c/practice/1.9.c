#include <stdio.h>
/* 把输入复制到输出，将相连的多个空格用一个空格代替程序 */ 
main() {
	
	int ns;
	int c;
	ns=0;
	while((c=getchar())!=EOF){
		if(c==' '){
			++ns;
			if(ns==1){
				putchar(c);
			}
		}else {
			ns=0;
			putchar(c);
		}
	}
}
