#include<stdio.h>
#include<string.h>

struct info 
{
	char firstName[50];
	char lastName[50];
	int studentNumber;
	char CourseName[50];
	int grade;
}b[50];

void main()
{
	int i,j,count,n,m;
	int option;
	int TotalStudents;
	char tempFirstName[10];
	char TempStudentNumber[10];
	char tempLastName[10];
	int temp;
	int avg = 0;
	int sum = 0;
	float average;
	char tempcourse[10];
	char tempname[50];



	do
	{
	printf ("Please select:\n");
	printf ("0. Add a new student to the system \n");
	printf ("1. Show list of student \n");
	printf ("2. Search student by First Name \n");
	printf ("3. Search student by Number \n");
	printf ("4. Register new student \n");
	printf ("5. Edit student first name \n");
	printf ("6. Edit student last name \n");
	printf ("7. Edit student number \n");
	printf ("8. Edit student grade \n");
	printf ("9. Edit student Course \n");
	printf ("10. Remove student \n");
	printf ("11. Get total average of grades \n");
	printf ("12. Get average of grades by course \n");
	printf ("13. Sort student by grade \n");
	printf ("14 Sort students by name (A-Z) \n");
	printf ("15 Exit \n");
	scanf("%d", &option);



switch (option)
{ 
case 0:
	    printf("Enter firstName, lastName, studentNumber, CourseName,and grade for student %d \n",count);
        scanf("%s %s %d %s %d",b[count].firstName,b[count].lastName,&b[count].studentNumber,b[count].CourseName,&b[count].grade);
        count++;
        break;
case 1:
	printf("Here is the List of Students: \n");
    for(i=0;i<count;i++)
	{
    	if(b[i].studentNumber != -1)
            printf("First name: %s \nLast name: %s\nstudentNumber: %d\nCourseName: %s\ngrade: %d\n",b[i].firstName,b[i].lastName,b[i].studentNumber,b[i].CourseName,b[i].grade);
    }
	break;

case 2:
	printf ("Enter Student First Name: ");
	scanf("%s", tempFirstName);
    for (i=0;i<count;i++)
	{
    	if(strcmp(tempFirstName,b[i].firstName)==0)
		{
			printf("First name: %s \nLast name: %s\nstudentNumber: %d\nCourseName: %s\ngrade: %d\n",b[i].firstName,b[i].lastName,b[i].studentNumber,b[i].CourseName,b[i].grade);
		}
	}
	break;

case 3:
	printf ("Enter Student Number: ");
	scanf("%d", &temp);
    for (i=0;i<count;i++)
	{
    	if(temp == b[i].studentNumber)
		{
			printf("First name: %s \nLast name: %s\nstudentNumber: %d\nCourseName: %s\ngrade: %d\n",b[i].firstName,b[i].lastName,b[i].studentNumber,b[i].CourseName,b[i].grade);
		}
	}
	break;

case 4:
	printf("Enter firstName, lastName, studentNumber, CourseName,and grade for student %d \n",count);
    scanf("%s %s %d %s %d",b[count].firstName,b[count].lastName,&b[count].studentNumber,b[count].CourseName,&b[count].grade);
    count++;
    break;

case 5:
	printf("Enter Student First Name \n");
	scanf ("%s",&tempFirstName);
    for (i=0;i<count;i++)
	{
		if(strcmp(b[i].firstName,tempFirstName) == 0)
		{
            printf("Enter updated firstName for this student:");
            scanf("%s",b[i].firstName);
		}
	}
	break;

case 6:
	printf("Enter Student First Name \n");
	scanf ("%s",&tempFirstName);
    for (i=0;i<count;i++)
	{
		if(strcmp(b[i].firstName,tempFirstName) == 0)
		{
            printf("Enter updated lastName for this student:");
            scanf("%s",b[i].lastName);
		}
	}
	break;

case 7:
	printf("Enter Student First Name \n");
	scanf ("%s",&tempFirstName);
    for (i=0;i<count;i++)
	{
		if(strcmp(b[i].firstName,tempFirstName) == 0)
		{
            printf("Enter updated studentNumber for this student:");
            scanf("%d",&b[i].studentNumber);
		}
	}
	break;

case 8:
	printf("Enter Student First Name \n");
	scanf ("%s",&tempFirstName);
    for (i=0;i<count;i++)
	{
		if(strcmp(b[i].firstName,tempFirstName) == 0)
		{
			printf("Enter updated grade for this student:");
            scanf("%d",&b[i].grade);

		}
	}
	break;

case 9:
	printf("Enter Student First Name \n");
	scanf ("%s",&tempFirstName);
    for (i=0;i<count;i++)
	{
		if(strcmp(b[i].firstName,tempFirstName) == 0)
		{
			printf("Enter updated course name for this student:");
            scanf("%s",b[i].CourseName);
		}
	}
	break;

case 10:
	printf("Enter Student First Name \n");
	scanf ("%s",&tempFirstName);
    for (i=0;i<count;i++)
	{
		if(strcmp(b[i].firstName,tempFirstName) == 0)
		{
            strcpy(b[i].firstName,"none");
            strcpy(b[i].lastName,"none");
            strcpy(b[i].CourseName,"none");
            b[i].studentNumber = -1;
            b[i].grade = -1;
            break;
		}
	}

case 11:
	printf("Total Average of Students: ");
    avg = 0;
    int total = 0;
    for(i=0;i<count;i++)
    	if(b[i].studentNumber!=-1)
            {
			total = total + b[i].grade;
        	}
			avg = total / count;
            printf("%d\n",avg);
            break;
case 12:
    printf("Enter course name to get the average: ");
    scanf("%s",tempcourse);
    temp = 0;
    for(i=0;i<count;i++)
		{
		if((strcmp(b[i].CourseName,tempcourse) == 0 && b[i].studentNumber!=-1))
            {
			total = total + b[i].grade;
			temp++;
    		}
            avg = total / temp;
        }
        printf("The average for this course is: %d\n",avg);
        break;

case 13:
	for(i=0;i<count;i++)
	{
    	for(j=i;j<count;j++)
		{
        	if(b[i].grade>b[j].grade)
			{
                strcpy(tempname,b[i].firstName);strcpy(b[i].firstName,b[j].firstName);strcpy(b[j].firstName,tempname);
                strcpy(tempname,b[i].lastName);strcpy(b[i].lastName,b[j].lastName);strcpy(b[j].lastName,tempname);
                strcpy(tempname,b[i].CourseName);strcpy(b[i].CourseName,b[j].CourseName);strcpy(b[j].CourseName,tempname);
                temp = b[i].studentNumber;b[i].studentNumber = b[j].studentNumber;b[j].studentNumber = temp;
                temp = b[i].grade;b[i].grade = b[j].grade;b[j].grade = temp;
        	}
        }
    }
    printf("The students list has been sorted by grades, choose 1 to check \n");
    break;



case 14:
    for(i=0;i<count;i++)
	{
        for(j=i;j<count;j++)
		{
            if(strcmp(b[i].lastName,b[j].lastName)>0)
			{
                strcpy(tempname,b[i].firstName);strcpy(b[i].firstName,b[j].firstName);strcpy(b[j].firstName,tempname);
                strcpy(tempname,b[i].lastName);strcpy(b[i].lastName,b[j].lastName);strcpy(b[j].lastName,tempname);
            	strcpy(tempname,b[i].CourseName);strcpy(b[i].CourseName,b[j].CourseName);strcpy(b[j].CourseName,tempname);
                temp = b[i].studentNumber;b[i].studentNumber = b[j].studentNumber;b[j].studentNumber = temp;
                temp = b[i].grade;b[i].grade = b[j].grade;b[j].grade = temp;
            }
        }
    }
    printf("The students list has been sorted by last name(A-Z), choose 1 to check \n");


}
}while(option != 15);

}
