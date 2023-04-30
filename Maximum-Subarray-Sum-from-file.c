#include <stdio.h>

int findMaxSubarraySumFromFile(const char* filename){
	FILE *my_file;
	my_file=fopen(filename,"r");
	int i=0,t[30];
	while(fscanf(my_file,"%i",&t[i])!=EOF){
		i++;	
	}
	fclose(my_file);
	int max=t[0],j,l,n;
	for( j=1;j<=i;j++){
	for( l=0;l<i;l++){
   int sum=0;
	 for(n=l;n<n+j&&n+j<=i;n++){
		sum+=t[n];
	 }
	 if(sum>max){
		max=sum;
	 }
	}
	}
	return max;

}

int main(){
	printf("%i",findMaxSubarraySumFromFile("input.txt"));

}
