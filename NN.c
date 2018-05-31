void bubo(const int const *a,int *b){        //a因為值跟位址都不可以改 所以乾脆用b取a值來改 
	
		
	
		int temp,j,i;
			for (j=0;j<5;j++){			
				for(i=0;i<5;i++){ 
					
					if(b[i]>b[i+1]){
					temp=b[i];
					b[i]=b[i+1];
					b[i+1]=temp;//交換位址裡面的值 
					} 
				}
			}
	}	
