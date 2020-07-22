#include<iostream>
#include<stdio.h>
#include<string> 
#include<cstdlib>

#define j 10000

using namespace std;

FILE *in, *out; 

int main() 
{ 
	in = fopen("ASCII.txt","r"); 
	out = fopen("Result.txt","w"); 
	int num[1000]={0,},i=0; 
	char ch;
	char s[j]; 

	while(fgets(s,j,in) != NULL)
	{ 
		for(i=0;i<j;i++)
		{
			if(s[i]>=48 && s[i]<=57)
			{
				fprintf(out,"%c",s[i]); 
				cout<<s[i];
			}
			if(s[i] == EOF)
				break;
		}
	}
		
	/*
	while((fscanf(in,"%c",&ch))!=EOF) 
	{ 
		if(ch==' ') 
		{ 
			fprintf(out,"%c",num[i]); 
			printf("%c",num[i]); 
			i++; 
		} 
		
		else 
		{ 
			num[i] = num[i]*10 + (int)ch-48; 
		} 
	} 
	
	printf("\n"); 
	*/
	fclose(in); 
	fclose(out); 
}
