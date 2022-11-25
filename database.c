#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int slice(char str[], int x, int y){
char new[100];
int j=0,z;
for(int i=x-1; i<y; i++,j++){
new[j] = str[i];
}
new[j] = '\0';
sscanf(new,"%d",&x);
return x;
}
typedef struct student{
    int rollNo;
    char hallticketno[15];
    char name[100];
    char fatherName[100];
    char address[100];
    int marks[4];
} stu;



int main(){
    int n,ans;
    printf("How many students are there:");
    scanf("%d",&n);
    float cgpa[n];
    stu st[n];

    for(int i=0; i<n; i++){
        printf("Enter your name:");  
        scanf("%s",&st[i].name);
        printf("Enter your hall ticket number:");  
        scanf("%s",&st[i].hallticketno);
        printf("Enter your father's name:");  
        scanf("%s",&st[i].fatherName);
        printf("Enter your address:");  
        scanf("%s",&st[i].address);
        st[i].rollNo = slice(st[i].hallticketno, 8, 11);
    } 
     printf("Do you want to enter marks?\n press 1 to enter");  
     scanf("%d",&ans);
     if(ans==1){
        for(int i=0; i<n; i++){
            for(int j=0; j<1; j++){
            
            printf("Enter marks of mathamatics:");
            scanf("%d",&st[i].marks[j]);
            printf("Enter marks of physics:");
            scanf("%d",&st[i].marks[j+1]);
            printf("Enter marks of pps:");
            scanf("%d",&st[i].marks[j+2]);
            printf("Enter marks of eg:");
            scanf("%d",&st[i].marks[j+3]);
            }
            cgpa[i] = ((st[i].marks[1]+st[i].marks[2]+st[i].marks[3]+st[i].marks[4])/400) * 100;
        }
     }
     else{
        exit(0);
     }
    for(int i=0; i<n; i++){
        printf("\n\n\n\nName: %s\n",st[i].name);
        printf("Hallticket no.: %s\n",st[i].hallticketno);
        printf("Roll no: %d\n",st[i].rollNo);
        printf("Father name: %s\n",st[i].fatherName);
        printf("Address: %s\n",st[i].address);
        if(ans==1){
         printf("Obtained marks: %.2f",cgpa[i]);  
        }
     } 




    return 0;
}