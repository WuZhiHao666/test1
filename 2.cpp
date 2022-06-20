#include <stdio.h>
#include <stdlib.h>
float operato(int a,int b,char d){
float add;
int c;
c=rand()%100+1;
int x;
x=rand()%4;
if(d=='+'){
	switch(x){
	case 0:
	add=a+b+c;
	if(add<0){
		break;
	}
	printf("%d%c%d+%d=\n",a,d,b,c);
	return(add);
	break;
	case 1:
	add=a+b-c;
	if(add<0){
		break;
	}
	printf("%d%c%d-%d=\n",a,d,b,c);
	return(add);
	break;
	case 2:
	add=a+b*c;
	if(add<0){
		break;
	}
	printf("%d%c%d*%d=\n",a,d,b,c);
	return(add);
	break;
	case 3:
	add=a+b/c;
	if(add<0){
		break;
	}
	printf("%d%c%d/%d=\n",a,d,b,c);
	return(add);
	break;
	}
}
if(d='-'){
    switch(x){
	case 0:
	add=a-b+c;
	if(add<0){
		break;
	}
	printf("%d%c%d+%d=\n",a,d,b,c);
	return(add);
	break;
	case 1:
	add=a-b-c;
	if(add<0){
		break;
	}
	printf("%d%c%d-%d=\n",a,d,b,c);
	return(add);
	break;
	case 2:
	add=a-b*c;
	if(add<0){
		break;
	}
	printf("%d%c%d*%d=\n",a,d,b,c);
	return(add);
	break;
	case 3:
	add=a-b/c;
	if(add<0){
		break;
	}
	printf("%d%c%d/%d=\n",a,d,b,c);
	return(add);
	break;
	}
}
if(d='*'){
    switch(x){
	case 0:
	add=a*b+c;
	if(add<0){
		break;
	}
	printf("%d%c%d+%d=\n",a,d,b,c);
	return(add);
	break;
	case 1:
	add=a*b-c;
	if(add<0){
		break;
	}
	printf("%d%c%d-%d=\n",a,d,b,c);
	return(add);
	break;
	case 2:
	add=a*b*c;
	if(add<0){
		break;
	}
	printf("%d%c%d*%d=\n",a,d,b,c);
	return(add);
	break;
	case 3:
	add=a*b/c;
	if(add<0){
		break;
	}
	printf("%d%c%d/%d=\n",a,d,b,c);
	return(add);
	break;
	}
}
if(d='/'){
    switch(x){
	case 0:
	add=a/b+c;
	if(add<0){
		break;
	}
	printf("%d%c%d+%d=\n",a,d,b,c);
	return(add);
	break;
	case 1:
	add=a/b-c;
	if(add<0){
		break;
	}
	printf("%d%c%d-%d=\n",a,d,b,c);
	return(add);
	break;
	case 2:
	add=a/b*c;
	if(add<0){
		break;
	}
	printf("%d%c%d*%d=\n",a,d,b,c);
	return(add);
	break;
	case 3:
	add=a/b/c;
	if(add<0){
		break;
	}
	printf("%d%c%d/%d=\n",a,d,b,c);
	return(add);
	break;
	}
}
return 0;
}
int main(){
printf("请输入题目个数:");
int i,times=0;
srand(100);
scanf("%d",&i);
do{
	int x,a,b;
	float add;
	char d;
	x=rand()%4;
	a=rand()%100+1;
	switch(x){
	   case 0:d='+';
	   break;
	   case 1:d='-';
	   break;
	   case 2:d='*';
	   break;
	   case 3:d='/';
	   break;
	}
	b=rand()%100+1;
	add=operato(a,b,d);
	if(add<0){
        i++;
        
        continue;
	}
	 printf("答案:%.2f\n",add);  
	 times++;
}while(times<i);
printf("题目数:%d",times);
return 0;
}
