#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/*HARVY JONES PONTILLAS DICT 1-2*/

int main()
{   int empno, yrsosrvc, totalnoempp;
    int twnty=0;
    int tfive=0;
    int thrty=0;
    int thfive=0;
    char ans, empfname[15], emplname[15];

    do{
        p("\n\t\t\tABC SOFTWARE SERVICES COMPANY");
        p("\n\t\t\tMAIN ST. COBAO, QUEZON CITY");
        p("\n\nEMPLOYEE NUMBER\t\t\t: ");
        s("%d",&empno);
        p("EMPLOYEE NAME\t\t\t: ");
        s("%s %s",&empfname,&emplname);
        p("YEARS OF SERVICE (20,25,30,35)\t: ");
        s("%d",&yrsosrvc);

        p("\n\t\tEMPLOYEE NUMBER : %d", empno);
        p("\n\t\tEMPLOYEE NAME   : %s %s", empfname, emplname);
        p("\n\t\tYEARS OF SERVICE: %d", yrsosrvc);
        if(yrsosrvc==20){
            p("\n\t\tBONUS\t\t: 20000");
            twnty++;
        }
        else if(yrsosrvc==25){
            p("\n\t\tBONUS\t\t: 25000");
            tfive++;
        }
        else if(yrsosrvc==30){
            p("\n\t\tBONUS\t\t: 30000");
            thrty++;
        }
        else if(yrsosrvc==35){
            p("\n\t\tBONUS\t\t: 35000");
            thfive++;
        }
        else
            p("\n\t\t\t\t  INVALID INPUT!");
        totalnoempp=twnty+tfive+thrty+tfive;
        p("\n\nPROCESS ANOTHER? (Y/N): ");
        s("%s",&ans);
    }while(ans=='Y'||ans=='y');

    p("\nTOTAL NO. OF EMPLOYEES PROCESSED: %d", totalnoempp);
    getch();
    return 0;
}

/*2.
HARVY JONES PONTILLAS DICT 1-2

int main()
{   int studno, tnosp=0, tnosf=0, tnosprocessed=0;
    float mgrade, fgrade, agrade;
    char studfname[15], studlname[15], ans;

    do{
        p("\n\t\t\tPUP INSTITUTE OF TECHNOLOGY");
        p("\n\t\t\tPUREZA ST. STA. MESA, MANILA");
        p("\n\nSTUDENT NO.: ");
        s("%d",&studno);
        p("STUDENT NAME: ");
        s("%s %s",&studfname,&studlname);
        p("MIDTERM GRADE: ");
        s("%f",&mgrade);
        p("FINAL GRADE: ");
        s("%f",&fgrade);
        p("AVERAGE GRADE: %.2f",agrade=(mgrade+fgrade)/2);
        if(agrade<=3.00){
            p("\nREMARK: PASSED");
            tnosp=tnosp+1;
        }
        else if(agrade>3.00){
            p("\nREMARK: FAILED");
            tnosf=tnosf+1;
        }
        tnosprocessed=tnosf+tnosp;
        p("\n\nPROCESS ANOTHER? (Y/N): ");
        s("%s",&ans);
    }while(ans=='Y'||ans=='y');
    p("\nTOTAL NO. OF STUDENTS PASSED: %d", tnosp);
    p("\nTOTAL NO. OF STUDENTS FAILED: %d", tnosf);
    p("\nTOTAL NO. OF STUDENTS PROCESSED: %d", tnosprocessed);
    getch();
    return 0;
}*/




/*1.

#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

HARVY JONES PONTILLAS DICT 1-2

int main()
{   char fname[15],lname[15], ans;
    int cstatus;

    do{
        p("\n\t\t\t\tCIVIL STATUS CHECKER");
        p("\n\nENTER YOUR NAME: ");
        s("%s %s", &fname,&lname);
        p("SELECT YOUR CIVIL STATUS");
        p("\n1 - SINGLE, 2 - MARRIED, 3 - ANNULED, 4 - SEPARATED, 5 - WIDOW: ");
        s("%d", &cstatus);
        if(cstatus==1)
            p("\nHI, %s %s YOU ARE SINGLE.", fname, lname);
        else if(cstatus==2)
            p("\nHI, %s %s YOU ARE MARRIED.", fname, lname);
        else if(cstatus==3)
            p("\nHI, %s %s YOU ARE ANNULED.", fname, lname);
        else if(cstatus==4)
            p("\nHI, %s %s YOU ARE SEPARATED.", fname, lname);
        else if(cstatus==5)
            p("\nHI, %s %s YOU ARE WIDOW.", fname, lname);
        else
            p("\nINVALID ENTRY!");
        p("\n\n\t DO YOU WANT TO CONTINUE? (TYPE Y OR N): ");
        s("%s", &ans);
    }while(ans=='Y'||ans=='y');
    p("\n\n\t\t\t THANK YOU FOR USING THIS PROGRAM");

    getch();
    return 0;
}*/
