#include <stdio.h>
/* 把输入复制到输出，把制表符替换成\t 回退符换成\b 反斜杠替换成\\程序 */ 
main() {
	
	int ns;
	int c;
	ns=0;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			putchar('\\');
			putchar('t');
		}else if(c=='\b'){
			putchar('\\');
			putchar('b');

		}else if(c=='\\'){
			putchar('\\');
			putchar('\\');
		}else {
			putchar(c);
		}
	}
}
