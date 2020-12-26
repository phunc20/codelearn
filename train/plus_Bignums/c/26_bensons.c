#include <stdio.h>
#include <stdlib.h>

void sumarr(char** src,char* des);

int main(){
  char des[100];
	//char* src[3]={"123","456","789"};
  char *src[10] = {"1769091","20054906338","7207999882834307764084","9213321719781684873205219","9991547099886097","2434201378352050","30788208017412","6547310012769032200","30247","1187285930339102809243992"};
	sumarr(src,des);
	printf("sum=%s\n",des);
	return 0;
}

void sumarr(char** src, char * des){
	long long int sum=0;
	char ** p=src;
	while(*p!=NULL){
		sum+=atol(*p);	
		p++;
	}
	sprintf(des,"%ld",sum);
}

