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
    float cgpa;
    char hallticketno[15];
    char name[100];
    char fatherName[100];
    char address[100];
    int marks[4];
    float percentage;
    long int mobileNo;
} stu;



int main(){
    int n,ans;
    printf("How many students are there:");
    scanf("%d",&n);
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
        printf("Enter your mobile no:");  
        scanf("%ld",&st[i].mobileNo);
        st[i].rollNo = slice(st[i].hallticketno, 8, 11);
    } 
     printf("Do you want to enter marks?\n press 1 to enter");  
     scanf("%d",&ans);
     if(ans==1){
        for(int i=0; i<n; i++){
            
            printf("Enter marks of mathamatics for student %d:",i+1);
            scanf("%d",&st[i].marks[0]);
            printf("Enter marks of physics for student %d:",i+1);
            scanf("%d",&st[i].marks[1]);
            printf("Enter marks of pps for student %d:",i+1);
            scanf("%d",&st[i].marks[2]);
            printf("Enter marks of eg for student %d:",i+1);
            scanf("%d",&st[i].marks[3]);
            st[i].percentage = st[i].marks[0]+st[i].marks[1]+st[i].marks[2]+st[i].marks[3];
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
         printf("Mobile no.:%d\n",st[i].mobileNo);  
        if(ans==1){
            st[i].percentage /= 400;
         printf("Obtained marks: %.2f",st[i].percentage*100);  
        }
     } 




    return 0;
}