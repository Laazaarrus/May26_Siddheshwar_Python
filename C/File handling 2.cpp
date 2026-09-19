#include<stdio.h>
main()
{
	FILE *pracfile;
	pracfile=fopen("prac.txt","w");
	fprintf(pracfile,"Hello Suraj");
}
