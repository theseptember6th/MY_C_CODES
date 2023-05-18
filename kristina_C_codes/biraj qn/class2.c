#include <stdio.h>

void UNION(int setA[], int setB[],int a, int b){
	
	int setC[6];
	
	int i,j;
    int x=0;
	
	for(i=0;i<a; i++){
		for (j = 0; j<b; j++){
			if (setA[i]!= setB[j]){
				setC[i] = setA[i];
			} else {
				x=x+1;
				break;
			}
		}
		
	}
	
	i = i-x;
	
	for(j=0; j < b ; j++){
		setC[i]=setB[j];
		i++;
	}

	printf("The union is: ");
	for (i=0 ; i< 6; i++){
		printf("%d ", setC[i]);
	}
}

int main(){
    int setA[4]={3,1,2,6};
    int setB[4]={3,4,5,8};
    
    UNION(setA,setB,sizeof(setA)/sizeof(setA[0]),sizeof(setB)/sizeof(setB[0]));
    return 0;
}