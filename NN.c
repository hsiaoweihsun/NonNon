	void bubo(const int *a,int *b){        
	
		
	
		int temp,j,i;
			for (j=0;j<5;j++){			
				for(i=0;i<5;i++){ 
					
					if(b[i]>b[i+1]){
					temp=b[i];
					b[i]=b[i+1];
					b[i+1]=temp;
					} 
				}
			}
	}	
