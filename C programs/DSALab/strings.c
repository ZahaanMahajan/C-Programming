// C program to read strings

#include<stdio.h>

void main()
{
	char str[50] = "Imaan";    // declaring string
	char str2[50];
	
	int i = 0;
	// printf("Enter the String to copy : ");
	// scanf("%s",str);

	printf("\n");
	while(str[i] != '\0'){
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';

	printf("The Resultant string is : %s ", str2);
	printf("\n");
	printf("\n");

}
