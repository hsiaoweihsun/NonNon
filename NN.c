void bubo(const int const *a,int *b){        //a�]���ȸ��}�����i�H�� �ҥH���ܥ�b��a�Ȩӧ� 
	
		
	
		int temp,j,i;
			for (j=0;j<5;j++){			
				for(i=0;i<5;i++){ 
					
					if(b[i]>b[i+1]){
					temp=b[i];
					b[i]=b[i+1];
					b[i+1]=temp;//�洫��}�̭����� 
					} 
				}
			}
	}	
