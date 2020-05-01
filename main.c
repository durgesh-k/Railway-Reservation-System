//Project :Railway Reservation System
/*Presented By
1.Durgesh Kudalkar(E53)
2.Aayush Jangada(E44)
3.Siddhant Kothari(E52)
4.Swaraj Jain(E42)
*/
//PASSWORD-Durgesh
void about()
{
    printf("\n\n........................................................................................................................................................................");
    printf("\t\t\t\t\t\t\t\t\t   --About Us--\n");
    printf("........................................................................................................................................................................\n");
    printf("\n\n");
    printf("\n\t\t\t\t\tThis MINI PROJECT demonstrates a 'RAILWAY RESERVATION SYSTEM' presented by:");
    printf("\n\n\t\t\t\t\t1.Durgesh Kudalkar (E-53)");
    printf("\n\t\t\t\t\t2.Aayush Jangada (E-44)");
    printf("\n\t\t\t\t\t3.Siddhant Kothari (E-52)");
    printf("\n\t\t\t\t\t4.Swaraj Jain (E-42)");
    printf("\n\n\t\t\t\t\t                                   First Year[CSE]");
    printf("\n\t\t\t\t\t                        WALCHAND INSTITUTE OF TECHNOLOGY,SOLAPUR");

}
void verify_captcha(int n)
{
    char first='3'+n,second='4'+n,third='Y'-(2*n),fourth='T'-n,fifth='l'+n,sixth='o'-n,seventh='i'+n;
    char captchacheck[8],captcha[8];
    int i=0;
    captchacheck[0]=first;
    captchacheck[1]=second;
    captchacheck[2]=third;
    captchacheck[3]=fourth;
    captchacheck[4]=fifth;
    captchacheck[5]=sixth;
    captchacheck[6]=seventh;
    captchacheck[7]='\0';
    printf("\n\n........................................................................................................................................................................");
    printf("\t\t\t\t\t\t\t\t\t    --Verification--\n");
    printf("........................................................................................................................................................................\n");
    printf("\n\n");
entercaptcha:
    printf("\n\n\t\t\t\t\t\t\t\tPlease Enter the following CAPTCHA to proceed");
    printf("\n\t\t\t\t\t\t\t\t     (Confirming you are not a robot)");
    printf("\n\n\t\t\t\t\t\t\t\t      ----------------------");
    printf("\n\t\t\t\t\t\t\t\t      | %c       %c     %c    |",captchacheck[0],captchacheck[3],captchacheck[5]);
    printf("\n\t\t\t\t\t\t\t\t      |   %c  %c    %c      %c |",captchacheck[1],captchacheck[2],captchacheck[4],captchacheck[6]);
    printf("\n\t\t\t\t\t\t\t\t      ----------------------");
    printf("\n\n\t\t\t\t\t\t\t\tCAPTCHA:");
    scanf("%s",captcha);
    if(strcmp(captcha,captchacheck)==0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t          --=>| Verified! |<=--");
    }
    else
    {
        printf("%s",captchacheck);
        captchacheck[0]=first+19+i;
        captchacheck[1]=second-1+i;
        captchacheck[2]=third+17-(2*i);
        captchacheck[3]=fourth+20-i;
        captchacheck[4]=fifth+3+i;
        captchacheck[5]=sixth-2+(3*i);
        captchacheck[6]=seventh-3+i;
        i++;
        goto entercaptcha;
    }
}
void available_trains()
{
    printf("\n\t\t\t\t\t ______________________________________________________________________________________________");
    printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
    printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
    printf("\n\t\t\t\t\t|  19567    |    VIVEK EXP           |  SUR   |    00:15   | PUNE  |    05:00    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  11014    |    LOKMANYA TT EXP     |  SUR   |    06:00   | PUNE  |    10:40    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  12158    |    HUTATMA EXP         |  SUR   |    06:30   | PUNE  |    10:30    | Not Running|");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  11042    |    MUMBAI EXP          |  SUR   |    04:40   | CSMT  |    13:35    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  12628    |    KARNATAKA EXP       |  SUR   |    00:10   |  BNC  |    13:08    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  11301    |    UDYAN EXP           |  SUR   |    16:15   |  BNC  |    08:10    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  22155    |    SUR MRJ SFAST       |  SUR   |    07:05   |  MRJ  |    11:55    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  21028    |    MUMBAI MAIL         |  SUR   |    18:20   |  NGP  |    17:25    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  12701    |    HUSSAINSAGAR EXP    |  SUR   |    05:45   |  HYB  |    12:10    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|  22133    |    SUR KOP SF EXP      |  SUR   |    23:50   |  KOP  |    05:30    |  Running   |");
    printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
    printf("\n\t\t\t\t\t|_____________________________________________________________________________________________|");
}

void train()
{
    printf("\n\n........................................................................................................................................................................");
    printf("\t\t\t\t\t\t\t\t\t   --Seat Details--\n");
    printf("........................................................................................................................................................................\n");
    printf("\n\n");

    printf("\n\t\t\t\t         (    )");
    printf("\n\t\t\t\t         (   )");
    printf("\n\t\t\t\t        _/  /");
    printf("\n\t\t\t\t      _/ __/");
    printf("\n\t\t\t\t     (__/     ");
    printf("\n\t\t\t\t      ||        ");
    printf("\n\t\t\t\t   ___||_  ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ____ ");
    printf("\n\t\t\t\t (|Engine|-|GD|-|GN|-|GN|-|GN|-|A1|-|B2|-|B1|-|S9|-|S8|-|S7|-|S6|-|S5|-|S4|-|S3|-|S2|-|S1|-|GN|-|GN|-|GN|-|GD|");
    printf("\n\t\t\t\t /******** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** ");
    printf("\n\t\t\t\t   O    O   O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O  O O");
    printf("\n\t\t\t\t------------------------------------------------------------------------------------------------------------------");

}


int seat_selection(char coach[3])
{
    int seatsa1[26][2]= {{0,0},{0,1},{0,2},{0,0},{0,3},{0,4},{0,0},{0,5},{0,6},{0,0},{0,7},{0,8},{0,0},{0,9},{0,10},{0,0},{0,11},{0,12},{0,0},{0,13},{0,14},{0,0},{0,15},{0,16}};
    int seatsgn[27][9]= {{0,0,0,0,0,0,0,0,0},{0,1,2,3,0,7,8,9},{0,4,5,6,0,10,11,12},{0,0,0,0,0,0,0,0,0},{0,13,14,15,0,19,20,21},{0,16,17,18,0,22,23,24},{0,0,0,0,0,0,0,0,0},{0,25,26,27,0,31,32,33},{0,28,29,30,0,34,35,36},{0,0,0,0,0,0,0,0,0},{0,37,38,39,0,43,44,45},{0,40,41,42,0,46,47,48},{0,0,0,0,0,0,0,0,0},{0,49,50,51,0,55,56,57},{0,52,53,54,0,58,59,60},{0,0,0,0,0,0,0,0,0},{0,61,62,63,0,67,68,69},{0,64,65,66,0,70,71,72},{0,0,0,0,0,0,0,0,0},{0,73,74,75,0,79,80,81},{0,76,77,78,0,82,83,84},{0,0,0,0,0,0,0,0,0},{0,85,86,87,0,88,89,90},{0,91,92,93,0,94,95,96},{0,0,0,0,0,0,0,0,0},{0,97,98,99,0,103,104,105},{0,100,101,102,0,106,107,108}};
    int seatsb[23][5]= {{0,0,0,0,0},{0,1,2,0,5},{0,3,4,0,6},{0,0,0,0,0},{0,7,8,0,11},{0,9,10,0,12},{0,0,0,0,0},{0,13,14,0,17},{0,15,16,0,18},{0,0,0,0,0},{0,19,20,0,23},{0,21,22,0,24},{0,0,0,0,0},{0,25,26,0,29},{0,27,28,0,30},{0,0,0,0,0},{0,31,32,0,35},{0,33,34,0,36},{0,0,0,0,0},{0,37,38,0,41},{0,39,40,0,42},{0,0,0,0,0},{0,43,44,0,45}};
    int seats[27][6]= {{0,0,0,0,0,0},{0,1,2,3,0,7},{0,4,5,6,0,8},{0,0,0,0,0,0},{0,9,10,11,0,15},{0,12,13,14,0,16},{0,0,0,0,0,0},{0,17,18,19,0,23},{0,20,21,22,0,24},{0,0,0,0,0,0},{0,25,26,27,0,31},{0,28,29,30,0,32},{0,0,0,0,0,0},{0,33,34,35,0,39,},{0,36,37,38,0,40},{0,0,0,0,0,0},{0,41,42,42,0,47},{0,44,45,46,0,48},{0,0,0,0,0,0},{0,49,50,51,0,55},{0,52,53,54,0,56},{0,0,0,0,0,0},{0,57,58,59,0,63},{0,60,61,62,0,64},{0,0,0,0,0,0},{0,65,66,67,0,71},{0,68,69,70,0,72}};
    int i,j,s;
    if(strcmp(coach,"A1")==0)
    {
        for(i=0; i<25; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<2; j++)
                {
                    if(j%2!=0)
                    {
                        if(seatsa1[i][j]<10)
                        {
                            printf("[0%d]",seatsa1[i][j]);
                        }
                        else
                        {
                            printf("[%d]",seatsa1[i][j]);
                        }
                    }

                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t\t--------------------");

            }
            printf("\n\t\t\t\t\t\t\t\t");
        }
        printf("\n\t\t\t\t\t\t\t\t\tEnter Seat no:");
        scanf("%d",&s);
        for(i=0; i<25; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<2; j++)
                {
                    if(j%2!=0)
                    {
                        if(seatsa1[i][j]==s)
                        {
                            printf("[##]");
                        }
                        else
                        {
                            if(seatsa1[i][j]<10)
                            {
                                printf("[0%d]",seatsa1[i][j]);
                            }
                            else
                            {
                                printf("[%d]",seatsa1[i][j]);
                            }
                        }
                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t\t--------------------");

            }
            printf("\n\t\t\t\t\t\t\t\t");
        }
    }
    else if(strcmp(coach,"B1")==0||strcmp(coach,"B2")==0)
    {
        for(i=0; i<23; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<5; j++)
                {
                    if(j%3!=0)
                    {
                        if(seatsb[i][j]<10)
                        {
                            printf("[0%d]",seatsb[i][j]);
                        }
                        else
                        {
                            printf("[%d]",seatsb[i][j]);
                        }
                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t---------------------------------------");
            }
            printf("\n\t\t\t\t\t\t\t");
        }
        printf("\n\t\t\t\t\t\t\t\t\tEnter Seat no:");
        scanf("%d",&s);
        for(i=0; i<23; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<5; j++)
                {
                    if(j%3!=0)
                    {
                        if(seatsb[i][j]==s)
                        {
                            printf("[##]");
                        }
                        else
                        {
                            if(seatsb[i][j]<10)
                            {
                                printf("[0%d]",seatsb[i][j]);
                            }
                            else
                            {
                                printf("[%d]",seatsb[i][j]);
                            }
                        }
                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t---------------------------------------");

            }
            printf("\n\t\t\t\t\t\t\t");
        }
    }
    else if(strcmp(coach,"GN")==0)
    {
        for(i=0; i<27; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<9; j++)
                {
                    if(j%4!=0)
                    {
                        if(seatsgn[i][j]<10)
                        {
                            printf("[0%d]",seatsgn[i][j]);
                        }
                        else
                        {
                            printf("[%d]",seatsgn[i][j]);
                        }
                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t----------------------------------------------------");
            }
            printf("\n\t\t\t\t\t\t");
        }
        printf("\n\t\t\t\t\t\t\t\t\tEnter Seat no:");
        scanf("%d",&s);
        for(i=0; i<27; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<9; j++)
                {
                    if(j%4!=0)
                    {
                        if(seatsgn[i][j]==s)
                        {
                            printf("[##]");
                        }
                        else
                        {
                            if(seatsgn[i][j]<10)
                            {
                                printf("[0%d]",seatsgn[i][j]);
                            }
                            else
                            {
                                printf("[%d]",seatsgn[i][j]);
                            }
                        }
                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t-----------------------------------------------------");

            }
            printf("\n\t\t\t\t\t\t");
        }
    }
    else if(strcmp(coach,"S1")==0||strcmp(coach,"S2")==0||strcmp(coach,"S3")==0||strcmp(coach,"S4")==0||strcmp(coach,"S5")==0||strcmp(coach,"S6")==0||strcmp(coach,"S7")==0||strcmp(coach,"S8")==0)
    {
        for(i=0; i<27; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<6; j++)
                {
                    if(j%4!=0)
                    {
                        if(seats[i][j]<10)
                        {
                            printf("[0%d]",seats[i][j]);
                        }
                        else
                        {
                            printf("[%d]",seats[i][j]);
                        }
                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t---------------------------------------");

            }
            printf("\n\t\t\t\t\t\t\t");
        }
        printf("\n\t\t\t\t\t\t\t\t\tEnter Seat no:");
        scanf("%d",&s);
        for(i=0; i<27; i++)
        {
            if(i%3!=0)
            {
                for(j=0; j<6; j++)
                {
                    if(j%4!=0)
                    {
                        if(seats[i][j]==s)
                        {

                            printf("[##]");
                        }
                        else
                        {
                            if(seats[i][j]<10)
                            {
                                printf("[0%d]",seats[i][j]);
                            }
                            else
                            {
                                printf("[%d]",seats[i][j]);
                            }
                        }

                    }
                    else
                    {
                        printf("\t|  |\t");
                    }
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t---------------------------------------");

            }
            printf("\n\t\t\t\t\t\t\t");
        }
    }

    return s;
}
int fare(char coach[3],int f)
{
    int w;
    if(strcmp(coach,"A1")==0)
    {
        w=f+200;
    }
    else if(strcmp(coach,"B1")==0)
    {
        w=f+100;
    }
    else if(strcmp(coach,"B2")==0)
    {
        w=f+100;
    }
    else if(strcmp(coach,"GN")==0)
    {
        w=f-150;
    }
    else
    {
        w=f;
    }
    return w;
}
//----------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ph[11],gender[2],name[10],surname[10],fullname[20],destination[10],to[20];
    int i,age,tktno,choice,trainno,f,totalfare,ticketno;
    char coach[3],pass[50],ch,date[9],time[6],trainname[20],b[50],b1[50],e1[50],captcha[8],e[50];
    int j,s,g,n=0,k,a[50],c[50],d[50],flag=0,q,a1[50],c1[50],d1[50];
    char login[]="Durgesh";
    int pnr1=484,pnr2=4884*tktno,z=0;

//This is Password for login
    printf("\t\t\t\t\t\t\t(Please ensure you have entered Fullscreen Mode)");
password:
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter Password:");
    j=0;
    for(i=0; i<50; i++)
    {
        ch=getch();

        if(ch==13)
        {
            pass[i]='\0';
            break;
        }
        else if(ch==8)
        {
            if(i>0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if(ch==32)
        {
            continue;
        }
        else
        {
            if(64<ch<91 || 96<ch<127)
            {
                pass[j]=ch;
                printf("*");
                j++;
            }
            else
            {
                continue;
            }
        }
    }
    if(strcmp(pass,login)==0)
    {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t\tYour entered-%s",pass);
        printf("\n\n\t\t\t\t\t\t\t\t\tACCESS GRANTED!!!");
        goto reservation;
    }
    else
    {
        system("cls");
        printf("\n\t\t\t\t\t\t\t\t\tIncorrect Password!!!\n\t\t\t\t\t\t\t\t\tPlease try again");
        goto password;
    }
//Here Password is verified

reservation:

    printf("\n\n\n\n\n\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n//\t\t\t\t\t\t\t\t\tRAILWAY RESERVATION SYSTEM                                                                    //");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
userchoice:
    printf("\n\t\t\t\t\t\t\t\t\t1.Available Trains");
    printf("\n\t\t\t\t\t\t\t\t\t2.Reservation");
    printf("\n\t\t\t\t\t\t\t\t\t3.View Reservations");
    printf("\n\t\t\t\t\t\t\t\t\t4.Cancel Reservation");
    printf("\n\t\t\t\t\t\t\t\t\t5.About Us");
    printf("\n\t\t\t\t\t\t\t\t\t6.Exit");
    printf("\n\t\t\t\t\t\t\t\t\tYour Choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\n\n........................................................................................................................................................................");
        printf("\t\t\t\t\t\t\t\t\t   --Available Trains--\n");
        printf("........................................................................................................................................................................\n");
        printf("\n\n");
        available_trains();
        printf("\nPress Enter to continue");
        char ch=getch();
        if(ch==13)
        {
            system("cls");
            goto reservation;
        }
    }
    if(choice==2)
    {
        n++;
        FILE *fp=fopen("reservation.txt","a+");
        if(fp==NULL)
        {
            printf("Error");
        }
        printf("\n\n........................................................................................................................................................................");
        printf("\t\t\t\t\t\t\t\t\t   --Personal Details--\n");
        printf("........................................................................................................................................................................\n");
        printf("Booking No.%d",n);
        printf("\n\t\t\t\t\t\t\t\t\tFirstname:");
        scanf("%s",name);
        printf("\n\t\t\t\t\t\t\t\t\tSurname:");
        scanf("%s",surname);
        printf("\n\t\t\t\t\t\t\t\t\t[Tip:Please enter M for Male and F for Female]");
gender:
        printf("\n\t\t\t\t\t\t\t\t\tGender:");
        scanf("%s",gender);
        if(strcmp(gender,"M")!=0 && strcmp(gender,"F")!=0)
        {
            printf("\n\t\t\t\t\t\t\t\t\tError!\n");
            goto gender;
        }
        printf("\n\t\t\t\t\t\t\t\t\tAge:");
        scanf("%d",&age);
phone:
        printf("\n\t\t\t\t\t\t\t\t\tPhone:");
        scanf("%s",ph);
        if(ph[10]!='\0')
        {
            printf("\n\t\t\t\t\t\t\t\t\tError!\n");
            goto phone;
        }
        printf("\n\n");
        tktno=20149*age+(n*n);
        printf("\n\t\t\t\t\t\t\t\t\tYour Ticket no.:%d",tktno);
        d[n-1]=tktno;

        printf("\n\n........................................................................................................................................................................");
        printf("\t\t\t\t\t\t\t\t\t   --Train Details--\n");
        printf("........................................................................................................................................................................\n");
        printf("\n\n");
        printf("\n\t\t\t\t[Tip:Make sure you have checked the Available Trains list above,if not press ENTER to view,press any key to continue]");
        char ch=getch();
        if(ch==13)
        {
            available_trains();
        }
        printf("\n\n\t\t\t\t\t\t\t\t\tFrom:Solapur");
city:
        printf("\n\t\t\t\t\t\t\t\t\tTo:");
        scanf("%s",destination);

        if(strcmp(destination,"Pune")==0)
        {
            strcpy(to,"PUN");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|  19567    |    VIVEK EXP           |  SUR   |    00:15   | PUNE  |    05:00    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
            printf("\n\t\t\t\t\t|  11014    |    LOKMANYA TT EXP     |  SUR   |    06:00   | PUNE  |    10:40    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
            printf("\n\t\t\t\t\t|  12158    |    HUTATMA EXP         |  SUR   |    06:30   | PUNE  |    10:30    | Not Running|");
            printf("\n\t\t\t\t\t-----------------------------------------------------------------------------------------------");
select:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);
            if(trainno==19567)
            {
                strcpy(trainname,"VIVEK EXP          ");
                strcpy(time,"00:15");
                f=300;
                goto seats;


            }
            else if(trainno==11014)
            {
                strcpy(trainname,"LOKMANYA TT EXP    ");
                strcpy(time,"06:00");
                f=345;
                goto seats;
            }
            else if(trainno==12158)
            {
                printf("\n\t\t\t\t\t\t\t\t\tSorry!\n\t\t\t\t\t\t\t\t\tThis Train is not running currently");
                goto select;
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\t\tTrain not found");
                goto select;
            }
        }
        else if(strcmp(destination,"Mumbai")==0)
        {
            strcpy(to,"CST");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
            printf("\n\t\t\t\t\t|  11042    |    MUMBAI EXP          |  SUR   |    04:40   | CSMT  |    13:35    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
select2:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);

            if(trainno==11042)
            {
                strcpy(trainname,"MUMBAI EXP         ");
                strcpy(time,"04:40");
                f=500;
                goto seats;
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\tTrain not found");
                goto select2;
            }
        }
        else if(strcmp(destination,"Banglore")==0)
        {
            strcpy(to,"BNC");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|  12628    |    KARNATAKA EXP       |  SUR   |    00:10   |  BNC  |    13:08    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
            printf("\n\t\t\t\t\t|  11301    |    UDYAN EXP           |  SUR   |    16:15   |  BNC  |    08:10    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
select3:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);
            if(trainno==12628)
            {
                strcpy(trainname,"KARNATAKA EXP      ");
                strcpy(time,"00:10");
                f=650;
                goto seats;

            }
            else if(trainno==11301)
            {
                strcpy(trainname,"UDYAN EXP          ");
                strcpy(time,"16:15");
                f=675;
                goto seats;
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\tTrain Not found");
                goto select3;
            }
        }
        else if(strcmp(destination,"Hyderabad")==0)
        {
            strcpy(to,"HYB");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|  12701    |    HUSSAINSAGAR EXP    |  SUR   |    05:45   |  HYB  |    12:10    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
select4:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);
            if(trainno==12701)
            {
                strcpy(trainname,"HUSSAINSAGAR EXP   ");
                strcpy(time,"05:45");
                f=500;
                goto seats;
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\tTrain Not found");
                goto select4;
            }
        }
        else if(strcmp(destination,"Nagpur")==0)
        {
            strcpy(to,"NGP");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|  21028    |    MUMBAI MAIL         |  SUR   |    18:20   |  NGP  |    17:25    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
select5:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);
            if(trainno==21028)
            {
                strcpy(trainname,"MUMBAI MAIL        ");
                strcpy(time,"18:20");
                f=600;
                goto seats;
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\tTrain Not found");
                goto select5;
            }
        }
        else if(strcmp(destination,"Miraj")==0)
        {
            strcpy(to,"MRJ");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|  22155    |    SUR MRJ SFAST       |  SUR   |    07:05   |  MRJ  |    11:55    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
select6:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);
            if(trainno==22155)
            {
                strcpy(trainname,"SUR MRJ SFAST      ");
                strcpy(time,"07:05");
                f=350;
                goto seats;
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\tTrain Not found");
                goto select6;
            }
        }
        else if(strcmp(destination,"Kolhapur")==0)
        {
            strcpy(to,"KOP");
            printf("\n\t\t\t\t\t______________________________________________________________________________________________");
            printf("\n\t\t\t\t\t|Train No.  |       Train Name       |  From  | Dept. Time |  To   |  Arr. Time  |  Status    |");
            printf("\n\t\t\t\t\t|___________|________________________|________|____________|_______|_____________|____________|");
            printf("\n\t\t\t\t\t|  22133    |    SUR KOP SF EXP      |  SUR   |    23:50   |  KOP  |    05:30    |  Running   |");
            printf("\n\t\t\t\t\t|-----------|------------------------|--------|------------|-------|-------------|------------|");
select7:
            printf("\n\n\t\t\t\t\t\t\t\t\tEnter Train No. to select:");
            scanf("%d",&trainno);
            if(trainno==22133)
            {
                strcpy(trainname,"SUR KOP SF EXP     ");
                strcpy(time,"23:50");
                f=300;
                goto seats;
            }
            else
            {
                printf("\t\t\t\t\t\t\t\t\tTrain Not found");
                goto select7;
            }
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tSorry!\n\t\t\t\t\t\t\t\t\tNo trains are available currently for following Destination");
            goto city;
        }
seats:
        printf("\n\t\t\t\t\t\t\t\t\t[Tip1:Please Enter a valid date]");
        printf("\n\t\t\t\t\t\t\t\t\t[Tip2:Please type date in format dd/mm/yy compulsorily]\n");
date:
        printf("\n\t\t\t\t\t\t\t\t\tEnter Date:");
        scanf("%s",date);
        if(date[8]!='\0')
        {
            printf("\n\t\t\t\t\t\t\t\t\tError!\n");
            goto date;
        }
        train();
        printf("\n\t\t\t\t\t\t\t\t\t[Tip:Please type coach name referring to above Figure]");
        printf("\n\t\t\t\t\t\t\t\t\t[Eg:For General coach you may type 'GN']");
coachselection:
        printf("\n\n\t\t\t\t\t\t\t\t\tEnter Coach:");
        scanf("%s",coach);
        if(strcmp(coach,"GN")==0||strcmp(coach,"A1")==0||strcmp(coach,"B1")==0||strcmp(coach,"B2")==0||strcmp(coach,"S1")==0||strcmp(coach,"S2")==0||strcmp(coach,"S3")==0||strcmp(coach,"S4")==0||strcmp(coach,"S5")==0||strcmp(coach,"S6")==0||strcmp(coach,"S7")==0||strcmp(coach,"S8")==0)
        {
            goto fare;
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tError!\n");
            goto coachselection;
        }
fare:
        totalfare=fare(coach,f);
selection:
        s=seat_selection(coach);

        for(i=1; i<n; i++)
        {
            if(a[i-1]==trainno&&b[i-1]==coach[0]&&c[i-1]==s&&e[i-1]==coach[1])
            {
                printf("\n\t\t\t\t\t\t\t\t\tSorry!Seat has already been Booked\n\n\t\t\t\t\t\t\t\t\tYou would like to change\n\t\t\t\t\t\t\t\t\t1.Coach\n\t\t\t\t\t\t\t\t\t2.Seat\n\t\t\t\t\t\t\t\t\t");
                scanf("%d",&g);
                if(g==1)
                {
                    goto coachselection;
                }
                else
                {
                    goto selection;
                }
            }
            else
            {
                printf("\n\t\t\t\t\t\t\t\tChecking if this seat is available for booking(%d)",i);
            }
        }
        a[n-1]=trainno;
        b[n-1]=coach[0];
        c[n-1]=s;
        e[n-1]=coach[1];

        printf("\n\n\n\t\t\t\t\t\t\t\tYour seat has been Booked Successfully");
        printf("\n\n\t\t\t\t\t\t\t\t      --=>| Coach=%s/Seat=%d |<=--",coach,s);
        verify_captcha(n);
        printf("\n\n........................................................................................................................................................................");
        printf("\t\t\t\t\t\t\t\t\t      --Ticket--\n");
        printf("........................................................................................................................................................................\n");
        printf("\n\n");
ticket:
        if(s>10&&s<100)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t");
            printf("\n\t\t\t\t\t\t________________________________________________________________________________");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||                             :HAPPY JOURNEY:                                ||");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t|| PNR NO. %d-%d\t               | Ticket No.%d\t      ||",pnr1,pnr2,tktno);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||Train no.%d     | Train Name:%s\t  |Seat:\t%s/%d ||",trainno,trainname,coach,s);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||Name:%s %s\t                               | Time-%s           ||",name,surname,time);
            printf("\n\t\t\t\t\t\t||Age:%d                                               | Date:%s        ||",age,date);
            printf("\n\t\t\t\t\t\t||Gender:%s                                             |----------------------||",gender);
            printf("\n\t\t\t\t\t\t||                                                     | R.Fee:120/-          ||");
            printf("\n\t\t\t\t\t\t||From:SUR                                             | Fare:%d/-\t      ||",totalfare);
            printf("\n\t\t\t\t\t\t||To:%s                                               | Total:%d/-          ||",to,totalfare+120);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||                             :HAPPY JOURNEY:                                ||");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||////////////////////////////////////////////////////////////////////////////||");
            printf("\n\t\t\t\t\t\t||____________________________________________________________________________||");
            printf("\n\n");
        }
        else if(s<10)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t");
            printf("\n\t\t\t\t\t\t________________________________________________________________________________");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||                             :HAPPY JOURNEY:                                ||");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t|| PNR NO. %d-%d\t               | Ticket No.%d\t      ||",pnr1,pnr2,tktno);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||Train no.%d     | Train Name:%s\t  |Seat:\t%s/0%d ||",trainno,trainname,coach,s);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||Name:%s %s\t                               | Time-%s           ||",name,surname,time);
            printf("\n\t\t\t\t\t\t||Age:%d                                               | Date:%s        ||",age,date);
            printf("\n\t\t\t\t\t\t||Gender:%s                                             |----------------------||",gender);
            printf("\n\t\t\t\t\t\t||                                                     | R.Fee:120/-          ||");
            printf("\n\t\t\t\t\t\t||From:SUR                                             | Fare:%d/-\t      ||",totalfare);
            printf("\n\t\t\t\t\t\t||To:%s                                               | Total:%d/-          ||",to,totalfare+120);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||                             :HAPPY JOURNEY:                                ||");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||////////////////////////////////////////////////////////////////////////////||");
            printf("\n\t\t\t\t\t\t||____________________________________________________________________________||");
            printf("\n\n");
        }
        else if(s>100)
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t");
            printf("\n\t\t\t\t\t\t________________________________________________________________________________");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||                             :HAPPY JOURNEY:                                ||");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t|| PNR NO. %d-%d\t               | Ticket No.%d\t      ||",pnr1,pnr2,tktno);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||Train no.%d     | Train Name:%s\t  |Seat:\t%s/%d||",trainno,trainname,coach,s);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||Name:%s %s\t                               | Time-%s           ||",name,surname,time);
            printf("\n\t\t\t\t\t\t||Age:%d                                               | Date:%s        ||",age,date);
            printf("\n\t\t\t\t\t\t||Gender:%s                                             |----------------------||",gender);
            printf("\n\t\t\t\t\t\t||                                                     | R.Fee:120/-          ||");
            printf("\n\t\t\t\t\t\t||From:SUR                                             | Fare:%d/-\t      ||",totalfare);
            printf("\n\t\t\t\t\t\t||To:%s                                               | Total:%d/-          ||",to,totalfare+120);
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||                             :HAPPY JOURNEY:                                ||");
            printf("\n\t\t\t\t\t\t||----------------------------------------------------------------------------||");
            printf("\n\t\t\t\t\t\t||////////////////////////////////////////////////////////////////////////////||");
            printf("\n\t\t\t\t\t\t||____________________________________________________________________________||");
            printf("\n\n");
        }
        printf("\n\t\t\t\t\t\t\t\t\t\tCONGRATULATIONS !\n\t\t\t\t\t\t\t\t\tYOU HAVE SUCCESSFULLY BOOKED A TICKET\n\t\t\t\t\t\t\t\t\tTHANK YOU FOR USING OUR SERVICES!");

        printf("\n\nPress ENTER to continue");
        char ch1=getch();
        if(ch1==13)
        {
            system("cls");
            goto reservation;
        }
    }
    if(choice==3)
    {
        printf("\n\n........................................................................................................................................................................");
        printf("\t\t\t\t\t\t\t\t\t    --All Tickets--\n");
        printf("........................................................................................................................................................................\n");
        printf("\n\n");
view:
        {

            printf("\n\t\t\t\t\t\t\t  -------------------------------------------------------");
            printf("\n\t\t\t\t\t\t\t  |SrNo.  | Ticket No. |   Train No. |   Coach  |  Seat |");
            printf("\n\t\t\t\t\t\t\t  -------------------------------------------------------");
            for(i=0; i<n; i++)
            {
                printf("\n\t\t\t\t\t\t\t  -------------------------------------------------------");
                printf("\n\t\t\t\t\t\t\t    %d      %d         %d          %c%c         %d ",i+1,d[i],a[i],b[i],e[i],c[i]);
                printf("\n\t\t\t\t\t\t\t  -------------------------------------------------------");
            }
        }
        if(z==0)
        {
            printf("\nPress ENTER to continue");
            char ch5=getch();
            if(ch5==13)
            {
                system("cls");
                goto reservation;
            }
        }
        else
        {
            z=0;
            goto cancel;
        }
    }
    if(choice==4)
    {
        printf("\n\n........................................................................................................................................................................");
        printf("\t\t\t\t\t\t\t\t\t    --Cancellation--\n");
        printf("........................................................................................................................................................................\n");
        printf("\n\n");
        printf("[Tip:Before Entering Ticket no, would you like to check your Ticket?(Y/N)]");
        char ch6=getch();
        if(ch6=='Y'||ch6=='y')
        {
            z=1;
            goto view;

        }
cancel:
        printf("\n\n\t\t\t\t\t\t\t\t\tEnter Ticket No.");
        scanf("%d",&ticketno);
        for(i=0; i<n; i++)
        {
            if(d[i]==ticketno)
            {
                q=i;
                flag=1;
                printf("\n\t\t\t\t\t\t\t\t\tThese are the details of your Ticket:");
                if(s<10)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
                    printf("\n\t\t\t\t\t\t\t\t\t|Train No.:%d                   |",a[q]);
                    printf("\n\t\t\t\t\t\t\t\t\t|Coach:%c%c  Seat:0%d                 |",b[q],e[q],c[q]);
                    printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
                }
                else if(s>10&&s<100)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
                    printf("\n\t\t\t\t\t\t\t\t\t|Train No.:%d                   |",a[q]);
                    printf("\n\t\t\t\t\t\t\t\t\t|Coach:%c%c  Seat:%d                  |",b[q],e[q],c[q]);
                    printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
                }
                else if(s>100)
                {
                    printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
                    printf("\n\t\t\t\t\t\t\t\t\t|Train No.:%d                   |",a[q]);
                    printf("\n\t\t\t\t\t\t\t\t\t|Coach:%c%c  Seat:%d                |",b[q],e[q],c[q]);
                    printf("\n\t\t\t\t\t\t\t\t\t------------------------------------");
                }
                break;
            }
        }
        if(flag==1)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\tConfirm Cancellation?(Y/N)");
            char ch3=getch();
            if(ch3=='Y'||ch3=='y')
            {
                for(i=q; i<n-1; i++)
                {
                    d[i]=d[i+1];
                    a[i]=a[i+1];
                    b[i]=b[i+1];
                    c[i]=c[i+1];
                }
                d1[1]=d[n-1];
                a1[1]=a[n-1];
                b1[1]=b[n-1];
                c1[1]=c[n-1];
                d1[1]=d[n-1];
                e1[1]=e[n-1];
                n--;
                printf("\n\t\t\t\t\t\t\t\t\tTicket Canceled Successfully");
            }
            else
            {
                system("cls");
                flag=0;
                goto reservation;
            }
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\tError!No Ticket Found");
            flag=0;
            goto cancel;
        }
        printf("\n\nPress ENTER to continue");
        char ch4=getch();
        if(ch4==13)
        {
            system("cls");
            flag=0;
            goto reservation;
        }



    }
    if(choice==5)
    {
        about();
        printf("\nPress ENTER to continue");
        char ch7=getch();
        if(ch7==13)
        {
            system("cls");
            goto reservation;
        }
    }
    if(choice==6)
    {
        exit(1);
    }
}



