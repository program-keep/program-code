#include <stdio.h>
/* 打印华氏温度与摄氏温度对照表 */
main(){
	float fahr,celsius;
	int lower,upper,step;
	
	lower = 0;
	upper =300;
	step =20;
	
	fahr = lower;
	
	while(fahr<=upper){
		celsius = 5.0/9.0*(fahr-32);
		printf("%3.0f %6.1f\n",fahr,celsius);
		fahr = fahr+step;
	}
}
