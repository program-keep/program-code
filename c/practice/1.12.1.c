#include <stdio.h>
/* 每行一个单词的方式打印输入的程序
 */ 
#define IN 1 // 单词内 
#define OUT 0  // 单词外

main() {
	int c,state;
	state = OUT;
	
	while((c = getchar())!=EOF){
		if(c== ' '|| c== '\t' || c=='\n'){
			if(state == IN){
				state = OUT;
				putchar('\n');
			}
		}else if(state == OUT) {
			state = IN;	// 单词的开始 
			putchar(c);
		}else {
			putchar(c);	// 在单词内 
		}
	}
}
