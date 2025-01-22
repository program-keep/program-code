#include <stdio.h>
/* 把输入复制到输出，把制表符替换成\t 回退符换成\b 反斜杠替换成\\程序 */ 
main() {
	
	int c;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			printf("\\t");
		}else if(c=='\b'){
			printf("\\b");
		}else if(c=='\\'){
			printf("\\\\");
		}else {
			putchar(c);
		}
	}
}
