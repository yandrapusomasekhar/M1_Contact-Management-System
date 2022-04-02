#include<stdio.h>
#include<string.h>
struct employee {
    int empid,empadhar;
    char empname[40],empdept[50];
    float empsalary;
};
    struct employee e[100];
void display();
void create();
void update();
void search();
void department();
void name();
int l=10;
void main() 
{
    int i,n;
    int choice;
    e[0]=(struct employee){1,100,"Ram","CSE",5000};
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
    printf("\t\t*WELCOME TO EMPLOYEE MANAGEMENT SYSTEM*\t\t\n");
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
    switch(choice) {
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
void create() {
    int n;
 printf("Enter no.of employees in a company : ");
            scanf("%d",&n);

            for(int i=0;i<n;i++) {
                printf("Enter empid,empadhar,empname,empdept,empsalary : ");
                scanf("%d%d\n%s%s%f",&e[l].empid,&e[l].empadhar,e[l].empname,e[l].empdept,&e[l].empsalary);
                l++;
                printf("\n");
            }
}
void display() {
            int epid;
        //printf("Enter employee id number : ");
       // scanf("%d",&epid);
       printf(" \tEmpid\tEmpaddhar\tName\t\tDepartment\t\tSalary\n");
        for(int i=0;i<l;i++) {
            printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
            }
        }
    
void update() {
            int epid,n;
            float epsalary;
            printf("Enter employee id number : ");
            scanf("%d",&epid);
            printf("Enter new salary : ");
            scanf("%f",&epsalary);
            //printf("id\tadhar\tname\tsalary\n");
            for(int i=0;i<100;i++) {
                if(epid==e[i].empid) {
                    e[i].empsalary=epsalary;
                }
                //printf("%d\t%d\t%s\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empsalary);
            }
    }
void search() {
            int epid,n;
            printf("Enter employee id number : ");
            scanf("%d",&epid);
            printf("\tiId\tAdhar\t\tName\t\tDepartment\t\tSalary\n");
            for(int i=0;i<100;i++) {
                if(epid==e[i].empid) {
                    printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
                }
            }
  }  
 void department() {
    char epdp[20];
    int f=0;
    printf("Enter employees department : ");
    scanf("%s",epdp);
    printf("\tId\tAdhar\t\tName\t\tDepartment\t\tSalary\n");
    for(int i=0;i<100;i++) {
        if(strcmp(epdp,e[i].empdept)==0) {
            printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
            f=1;
        }
    }
    if(f==0) {
        printf("Enter valid depatment\n");
    }
 }
 
 void name() {
         char epname[100],n;
            printf("Enter employee name : ");
            scanf("%s",epname);
            printf("\tiId\tAdhar\t\tName\t\tDepartment\t\tSalary\n");
            for(int i=0;i<100;i++) {
                if(strcmp(epname,e[i].empname)==0) {
                    printf("\t%d\t%d\t\t%s\t\t\t%s\t\t%f\n",e[i].empid,e[i].empadhar,e[i].empname,e[i].empdept,e[i].empsalary);
                }
                
            }
  }
