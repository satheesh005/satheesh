#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h>
 struct student{
     char student_id[50];
     char student_name[50];
     char marks[10];

}a;
int main(int y,char *satheesh[])

{int i=0,k,m=0,n,j,q=0;char l;
    FILE *fp=fopen(satheesh[1],"w");
    if(y==1)
    {
        printf("please provide the command line");
       return 0;
    }

	fclose(fp);
x: printf("enter: 1 Add student record into the file.\n2 Display the names of students who obtained less than 30 marks.\n3:Display the names of students who have insufficient attendance.\n 4:Print the contents of the file\n5:exit");

scanf("%d",&j);

switch (j)
{
case 1:
    {
        fp=fopen(satheesh[1],"a");
        printf("enter the studentid student name and marks");
        scanf("%s%s%s",a.student_id,a.student_name,a.marks);
     if((atoi (a.marks)) <100)
{
            fprintf(fp,"%s\t%s\t%s\n",a.student_id,a.student_name,a.marks);
}
else 
{printf("wrong input marks are not in the limit\n");
}


fclose(fp);
goto x;
break;
    }
case 2:
    {
        fp=fopen(satheesh[1],"r");

while(1)
        {
            fscanf(fp,"%s%s%s",a.student_id,a.student_name,a.marks);

            if(feof(fp))
            {
                break;
            }
            if((atoi(a.marks))<30 && strcmp(a.marks,"I")!=0 && strcmp(a.marks,"A")!=0)
           {
               m=m+1;
                printf("%s\n",a.student_name);
           }

        }if(m==0)
        {
            printf("no student is less than 30 marks\n");
        }
        fclose(fp);
        goto x;
        break;
    }

case 3:
    {


          fp=fopen(satheesh[1],"r");
        while(1)
        {
            fscanf(fp,"%s%s%s",a.student_id,a.student_name,a.marks);
            if(feof(fp))
                break;
                l='I';
                if(a.marks[0]==l)
                {

q=q+1;
                printf("%s\n",a.student_name);
        }}
        if(q==0)
        {
            printf("no student is less attendence\n");
        }

        fclose(fp);
        goto x;
        break;
    }
case 4:
    {
          fp=fopen(satheesh[1],"r");

        if(fscanf(fp,"%s%s%s",a.student_id,a.student_name,a.marks)!=EOF){
         printf("+--------------------+------------------------+-----------+\n");
         printf("| student id         | student name           | marks     |\n");
         printf("+--------------------+------------------------+-----------+\n");
            fclose(fp);
            fp=fopen(satheesh[1],"r");

        while(1)
        {
            fscanf(fp,"%s%s%s",a.student_id,a.student_name,a.marks);
            if(feof(fp))
{
printf("+--------------------+------------------------+-----------+\n");
                break;}
printf("|%-20s| %-20s   |%-10s |\n",a.student_id,a.student_name,a.marks);
        }}
        else{
            printf("no data in file\n");
        }

fclose(fp);
goto x;
break;
    }

case 5:
    break;

default : 
{
printf("enter correct numbers");goto x;
}
}}
