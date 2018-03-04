//Search characters in string
#include <stdio.h>

main(){
	
	char text1[100];
	char text2[100];
	int m=1; //starts from 1 to evaluate the second character of the text2
	int i=0; //starts from 0 to evaluate the first character until the last of the text1
	
	printf ("first string?\n");
	gets (&text1[0]);
	
	printf ("second string?\n");
	gets (&text2[0]);
	
	for (i; text1[i]!=NULL;i++){ //I verify until I searched in all the text1
		if (text1[i]==text2[0]){//If the character "i" of the text1 is equal to the first character of text2
	
			for (int n=(i+1);text2[m]!=NULL;n++,m++){// I check from the second character of each text to compare them
			if(text1[n]!=text2[m]){ //If they are different I end with the comparation
					break;
				}
			}
			if (text2[m]==NULL){ //If "m" reaches NULL, it means that the text2 is contained in the first text
					printf ("In the position %d of %s appears %s\n", i, &text1[0], &text2[0]); //print in that case
				}
		} //"if" ends
		m=1; //m resets to 1 for another comparation 
	}
}
