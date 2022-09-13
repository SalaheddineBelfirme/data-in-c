#include<stdio.h>
#include<math.h>
#include<string.h>
// creation of two types of structures related to each other(student, teacher) ;
//printing, and saving them in a file;
//same process for a list of these two structures
typedef struct{//creation of structure teacher
    char nametetch[20];
    char subject[20];
}teacher;
typedef struct {//creation of structure student
    int id;
    char name[30];
    float note;
    teacher ts;
}studnet;
int main(){
	int n,i;
	studnet s1;
    s1.id=1;
    printf("type the number of pepole");
    scanf("%d",&n);
    studnet sT[n];
    for(i=0;i<n;i++){
     printf("type ur info and the info of ur teacher ");
    scanf("%s %f %s %s",,&sT[i].name,&sT[i].note,&sT[i].ts.nametetch,&sT[i].ts.subject);	
	}
	for(i=0;i<n;i++){
		 printf("\nhy %s ur note is : %f in subject :%s ",sT[i].name,sT[i].note,sT[i].ts.subject);
	}
	FILE *f;
	f=fopen("ST.txt","a");
	for(i=0;i<n;i++){
			fprintf(f,"name : %s , note: %f , subject : %s \n",sT[i].name,sT[i].note,sT[i].ts.subject); 
	}
    fclose(f);
    return  0;
	}
