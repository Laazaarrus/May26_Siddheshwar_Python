#include<iostream>
using namespace std;
main()
{
	FILE *file;
	file=fopen("tempo.txt","w");
	fprintf(file,"Hello People!");
}
