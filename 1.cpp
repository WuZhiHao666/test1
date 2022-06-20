#include<stdio.h>
#define N 88
int maxSubarry(int a[],int m){
int ThisSum,MaxSum;
int i;
ThisSum=MaxSum=0;
for(i=0;i<m;i++){
ThisSum+=a[i];
if(ThisSum>MaxSum)
MaxSum=ThisSum;
else if(ThisSum<0)
ThisSum=0;
}
return MaxSum;
}
void main(){
	int i,shuzu[N],n,m;
	printf("please inter the numbers：");
	scanf("%d",&n);
		printf("please enter the array elements:");
	for(i=0;i<n;i++){
	scanf("%d",&m);
	shuzu[i]=m;}
	shuzu[i]='\0';
n=maxSubarry(shuzu,N);
printf("最大子数组的和为：%d\n",n); }
