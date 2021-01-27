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
