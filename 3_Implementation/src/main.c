#include<stdio.h>
#include<string.h>
struct employee {
    int empid,empadhar;
    char empname[40],empdept[50];
    float empsalary;
};
    struct employee e[100];
void display();                                                         // This function is used for display the employees details
void create();                                                          // This function is used for create new employee details
void update();                                                          // This function is used for upadate the existing employee details
void search();                                                          // This function is used for serach the employees in the programs
void department();                                                      // This function is used for the to serach the employee with the help of department name
void name();                                                            // This function is used to saerch the employee with help of name
int l=20;
void main()                                                             // This is the main function
{
    int i,n;
    int choice;                                                         // to enter the choice for the swich startment
    e[0]=(struct employee){1,100,"Ram","CSE",5000};// employee dateils like employee id , employee adhaar number ,employee name, employee department, employee salary
    e[1]=(struct employee){2,101,"Pavan","ECE",6000};
    e[2]=(struct employee){3,102,"Kevin","MECH",5500};
    e[3]=(struct employee){4,103,"Charan","CIVIL",4000};
    e[4]=(struct employee){5,104,"Prem","EEE",7000};
    e[5]=(struct employee){6,105,"Rakesh","CSE",4500};
    e[6]=(struct employee){7,106,"Danusha","ECE",6000};
    e[7]=(struct employee){8,107,"Venela","MECH",4000};
    e[8]=(struct employee){9,108,"Kavitha","CIVIL",3500};
    e[9]=(struct employee){10,109,"Lokitha","EEE",5000};
    e[10]=(struct employee){11,110,"Ram","ESE",1000};
    e[11]=(struct employee){12,111,"Sreemahesh","EEE",10000};
    e[12]=(struct employee){13,112,"Siva","ECT",4000};
    e[13]=(struct employee){14,113,"Syam","BSE",8000};
    e[14]=(struct employee){15,114,"Madhu","EEE",9000};
    e[15]=(struct employee){16,115,"Navya","CSE",10000};
    e[16]=(struct employee){17,116,"Elisha","CST",8000};
    e[17]=(struct employee){18,117,"Prem","CST",9000};  
    e[18]=(struct employee){19,118,"Pavan","ECT",8000};
    e[19]=(struct employee){20,119,"John","MECH",9000};
    printf("\t\t*WELCOME TO EMPLOYEE MANAGEMENT SYSTEM*\t\t\n");                            // To print the welcome massage on display
    while(1) {
        printf("\n\t\t**MAIN MENU*\t\t\n");
        printf("\t\t[1].Create details of an employee\n");
        printf("\t\t[2].Display list of employees\n");
        printf("\t\t[3].Update salary of employee\n");
        printf("\t\t[4].Search a employee detail\n");
        printf("\t\t[5].Department wise list\n");
        printf("\t\t[6].name wise list\n");
        printf("\t\t[7].Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch(choice) {                                  // this switch statement is used for the folllowing functions like create, display, update, search, department, name
    case 1 : create();
            break;
    case 2 :display();
            break;
    case 3 :update();
            break;
    case 4 :search();
            break;
    case 5 :department();
            break;
     case 6 :name();
            break;
    case 7 :return 0;
}
        
    }
}
void create() {                                                          // this create function should create the new employee details in the program
    int n;
 printf("Enter no.of employees in a company : ");
            scanf("%d",&n);                                             // to read the number of employees in the company

            for(int i=0;i<n;i++) {                                      // the for loop is  used to iterate the statements or a part of the program several times
                printf("Enter empid,empadhar,empname,empdept,empsalary : ");
                scanf("%d%d\n%s%s%f",&e[l].empid,&e[l].empadhar,e[l].empname,e[l].empdept,&e[l].empsalary);
                l++;
                printf("\n");                                               // print new line
            }
}
void display() {                                                            // this function to display the entire employees in the company
            int epid;
        //printf("Enter employee id number : ");
       // scanf("%d",&epid); // to read the employee id number
       printf(" \tEmpid\tEmpaddhar\tName\t\tDepartment\t\tSalary\n");
        for(int i=0;i<l;i++) {                                              // the for loop is used to iterate the statements or a part of the program several times
            printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
            }
        }
    
void update() {                                                             // This function is used to update the existing employee details
            int epid,n;
            float epsalary;
            printf("Enter employee id number : ");
            scanf("%d",&epid);                                               // read the employee id number
            printf("Enter new salary : ");
            scanf("%f",&epsalary);                                          // read the employee new salary
            //printf("id\tadhar\tname\tsalary\n");
            for(int i=0;i<100;i++) {                                        //for loop is used to iterate the statements or a part of the program several times
                if(epid==e[i].empid) {                                      // The if conditions is true whenever entered  employee id is equal to exsting employee id number
                    e[i].empsalary=epsalary;                                // the new salary is replaced by the existing salary
                }
                //printf("%d\t%d\t%s\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empsalary); // print updated employee details with new salary
            }
    }
void search() {                                                              // this function is used to search the employees in company
            int epid,n;
            printf("Enter employee id number : ");
            scanf("%d",&epid);                                              // reda the employee id
            printf("\tiId\tAdhar\t\tName\t\tDepartment\t\tSalary\n");
            for(int i=0;i<100;i++) {                                        //the for loop is used to iterate the statements or a part of the program several times
                if(epid==e[i].empid) {                                      // The if conditions is true whenever entered  employee id is equal to exsting employee id number
                    printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
                }
            }
  }  
 void department() {                                                        // This function is used to serach the employee for perticular department
    char epdp[20];
    int f=0;
    printf("Enter employees department : ");
    scanf("%s",epdp);                                                       // read the department name
    printf("\tId\tAdhar\t\tName\t\tDepartment\t\tSalary\n");
    for(int i=0;i<100;i++) {                                                // the for loop is used to iterate the statements or a part of the program several times
        if(strcmp(epdp,e[i].empdept)==0) {                                  // the if condition  is compare the two strings
            printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
            f=1;
        }
    }
    if(f==0) {                                                              // if enterd department is not there is the employee details
        printf("Enter valid depatment\n");  
    }
 }
 
 void name() {                                                              // This function is used to find the employee in the company by using name
         char epname[100],n;
            printf("Enter employee name : ");
            scanf("%s",epname);                                               // read the employee name
            printf("\tiId\tAdhar\t\tName\t\tDepartment\t\tSalary\n");
            for(int i=0;i<100;i++) {                                          // the for loop is used to iterate the statements or a part of the program several times
                if(strcmp(epname,e[i].empname)==0)                            // compare the employee names
                {
                    printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
                }
                
            }
  }
