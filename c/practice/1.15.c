#include <stdio.h> 

float temperatureTranslate(int fahr);

main(){
	int fahr;
	float celsius;
	int lower,step,upper;
	
	lower =0;
	step = 20;
	upper = 300;
	
	fahr = lower;
	
	while(fahr<=upper) {
		celsius = temperatureTranslate(fahr);
		printf("%3d %6.1f \n",fahr,celsius);
		fahr+=step;
	}
}

float temperatureTranslate(int fahr){
	return (5.0/9.0)*(fahr-32);
}
