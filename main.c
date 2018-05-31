#include <stdio.h>
#include <stdlib.h>
//常數資料的常數指標 (內容不可變 位址也不可變) 
#define ARR_SIZE 5
int main(){

int i,j;
const int const a[ARR_SIZE] = {3 , 9 , 11 , 4 , 8};//常數指標 常數資料 
	
		  bubo( &a,&a);	  
		  
			for(i=1;i<6;i++) {
				
				printf("a[%d]%d\n",i-1,a[i]);
				
						 	}
						 	
			}


