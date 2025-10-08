#include<stdio.h>
//mai function
int main(){
	
	//variable declaration
	int password;
	
	password = 1200;
	
	do {
		printf("Enter the password:\n");
		scanf("%d" ,&password);
	
		if(password ==1200){
		printf("Your access is granted\n");
		break;
		
		}else{
			printf("Your access is denied,try again\n");
		}
	}while (1);
			
	
	return 0;
}