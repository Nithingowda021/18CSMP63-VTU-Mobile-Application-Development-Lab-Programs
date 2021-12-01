#include"stdio.h"
#include"stdlib.h"

int getmax(int arr[],int n){

	int max,i;
	max = arr[0];
	for(i = 1;i<n;++i){
		if(arr[i] > max){
			max = arr[i];
		}//end of if


	}//end of for
	return max;
}//end of getmax
int main(){

	int n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements of the array\n");
	for(i = 0; i<n; i++){
		scanf("%d",&arr[i]);
	}//end of for

	//Radix Sort


	int m = getmax(arr,n);
	int exp;
	for(exp = 1;m/exp>0 ;exp *= 10){

		int output[n];
		int count[10]={0};

		for(i = 0 ; i<n ; ++i){
			count[(arr[i]/exp)%10]++;

		}//end of updatecount for
	

		for(i = 1;i<10; ++i){
			count[i] += count[i-1];
		}//end of cumulative for
		for(i = n-1;i>= 0;i--){
			output[count[(arr[i]/exp)%10]-1] = arr[i];
			count[(arr[i]/exp)%10]--;
		}//end of output updation for


		for(i = 0;i<n;++i){
			arr[i] = output[i];

		}//end of outputUpdation for

		printf("\nThe elements are \n");
		for(i = 0;i<n;++i){
			printf("%d\t",output[i]);
		}//end of printofor
		printf("\n");



	}//end of pass for



	return 1;
}//end of main
