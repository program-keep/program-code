#include <stdio.h>
/* �����븴�Ƶ���������Ʊ���滻��\t ���˷�����\b ��б���滻��\\���� */ 
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
