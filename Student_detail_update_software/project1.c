#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct project1
{
    char a[10];
    char f1[10],k1[10],l1[10],j1[10],p1[10] ;
};
struct ankit
{
    int m, n, v, o;
};


int main()
{
    struct project1 str;
    int m;
    char c;
    char uid[15],uk[10];
    char name[10],  section[10], group[10],  blood[10];
    struct ankit k1;
    char dk;

    int english, science, math, history;
    int ik;
    char vc,dkm;
    int player,i,choice;
    char marks;
    int count;
     int num;
   int n;
    while (ik > -1)
    {

        printf("\n------------------------------------------> STUDENT BIO DATA SOFTWARE <-----------------------------------------  \n");
       
        printf("--------------> HELLO I AM ANKIT 20BCA1307 <------------------------\n");

        printf("1: STUDENT DETAIL OR MARSKS \n2:UPDATE STUDENT DETAIL\n");
        scanf(" %d", &m);
        switch (m)
        {
        case 1:

            printf("\nENTER Y TO FILL THE DETAIL OF THE STUDENT OR ENTER N TO FILL STUDENT MARKS  = ");
            scanf("%s", &c);
            if (c == 'y' || c == 'Y')
            { 
                
              
    printf("\nHOW MANY STUDENT DETIAL YOU HAVE TO FILL  :");
    scanf("%d",&n);
                for(int tk=1;tk<=n;tk++){
                    printf("\nNUMBER OF THE STUDENT = ");
                    scanf("%d",&num);

                    printf("\n");
                    fgets(uk,10,stdin);

                printf(" \nENTER THE UID  = ");
                fgets(uid,15,stdin);
                   printf("\n");
                    

                printf("\nENTER THE NAME OF STUDENT = ");
                fgets(name,10,stdin);

                
                printf("\nTHE SECTION OF THE STUDENT  = ");
                fgets(section,10,stdin);
                printf("\nTHE GROUP OF THE STUDENT = ");
               fgets(group,10,stdin);
                printf("\nTHE BLOOD GROUP OF THE STUDENT = ");
                fgets(blood,10,stdin);
                printf("\n");
                printf("THE DETAIL YOU HAVE ENTER IS SAVED FOR ");
                printf("STUDENT = %d\n THE STUDENT UID = %s\n THE NAME OF THE STUDENT = %s\n THE SECTION OF THE STUDENT = %s\n THE SECTION OF STUDENT = %s\n THE BLOOD GROUP OF THE STUDENT = %s",num,uid,name,section,group,blood);
                
            }
            }
            else
            {
                  printf("HOW MANY STUDENT MARKS YOU HAVE TO FILL :");
    scanf("%d",&n);
            for(int p=1;p<=n;p++){
                  printf("\nNUMBER OF THE STUDENT = ");
                    scanf("%d",&num);
                printf("THE NUMBER OF THE STUDENT IN ENGLISH = ");

                scanf("%d", &english);
                 printf("THE NUMBER OF THE STUDENT IN MATH = ");
                scanf("%d", &math);
                 printf("THE NUMBER OF THE STUDENT IN SCIENCE = ");
                scanf("%d", &science);
                 printf("THE NUMBER OF THE STUDENT IN HISTORY= ");
                scanf("%d", &history);
                 printf("THE MARKS YOU HAVE ENTER IS SAVED FOR ");
                printf("STUDENT = %d\n ENGLISH = %d\n MATH = %d\n SCIENCE = %d\n HISTORY = %d",num,english,math,science,history);
            }}
            continue;
        case 2:
            printf("----------------------------------> STUDENT BIO DATA UPDATE <--------------------------------------------\n");
           
            printf("PRESS Y TO UPDATE STUDENT DETAIL OR N TO UPDATE MARKS OR PRESS ANY KEY IF U WANT TO EXIT FROM PROGEAM THE PRESS E : ");

            scanf("%s", &dk);
            if (dk == 'y' || dk == 'Y')
            {
                 printf("HOW MANY STUDENT DETAIL YOU HAVE TO UPDATE :");
    scanf("%d",&n);
         for(int j=1;j<=n;j++){
             printf("\nNUMBER OF THE STUDENT = ");
                    scanf("%d",&num);
                      printf("\n");
              fgets(str.p1,10,stdin);
              printf("\nTHE UID OF THE STUDENT = ");
            fgets(str.a,15,stdin);
            
           
               printf("\nTHE NAME OF THE STUDENT = ");
               fgets(str.f1,10,stdin);
                printf("\nTHE SECTION OF THE STUDENT IS   = ");
                fgets(str.k1,10,stdin);
                printf("\nTHE GROUP OF THE STUDENT IS = ");
                 fgets(str.l1,10,stdin);
                printf("\n\nTHE BLOOD GROUP OF THE STUDENT IS  = ");
                fgets(str.j1,10,stdin);
         
                
                
               
                    printf("THE DETAIL YOU HAVE ENTER IS SCUESSFULLY SAVED AND NOW SHOWING ON DISPLAY\n\n");
                    
                    strcpy(uid,str.a);
                    strcpy(name,str.f1);
                    strcpy(section,str.k1);
                    strcpy(group,str.l1);
                    strcpy(blood,str.j1);
                    printf("\nTHE NUMBER OF THE STUDENT IS  = %d",num);
                    printf("\nTHE UID  OF THE STUDENT IS  = %s ",uid);
                    printf("\nTHE NAME OF THE STUDENTN IS  = %s ",name);
                    printf("\nTHE SECTION OF THE STUDENT IS   = %s ",section);
                    printf("\nTHE GROUP OF THE STUDENT IS = %s ",group);
                     printf("\nTHE BLOOD GROUP OF THE STUDENT IS  = %s ",blood);
                    
            }
            }
            else if (dk == 'n' || dk == 'N')
            {
                              printf("HOW MANY STUDENT MARKS YOU HAVE TO UPDATE :");
    scanf("%d",&n);
              for(int k=1;k<=n;k++){
                
                  printf("\nTHE NUMBER OF THE STUDENT IS = ");
                    scanf("%d",&num);
                printf("THE NUMBER OF THE STUDENT IN ENGLISH = ");
                scanf("%d", &k1.m);
                 printf("THE NUMBER OF THE STUDENT IN MATH = ");
                scanf("%d", &k1.n);
                printf("THE NUMBER OF THE STUDENT IN SCIENCE  = ");
                scanf("%d", &k1.v);
                 printf("THE NUMBER OF THE STUDENT IN HISTORY = ");
                scanf("%d", &k1.o);
                int lkm = k1.m;
                k1.m = english;
                english = lkm;

                int plk = k1.n;
                k1.n = math;

                math = plk;

                int kke = k1.v;
                k1.v = science;
                science = kke;

                int vvr = k1.o;
                k1.o = history;
                history = vvr;
                  printf("\nTHE STUDENT MARKS YOU HAVE ENTER IS SCUESSFULLY SAVED AND NOW SHOWING ON DISPLAY ");
                
                printf("\nTHE NUMBER OF THE STUDENT= %d",num);
                 printf("\nTHE NUMBER OF THE STUDENT IN ENGLISH = %d",english);
                printf("\nTHE NUMBER OF THE STUDENT IN MATH  = %d",math);
                printf("\nTHE NUMBER OF THE STUDENT IN SCIENCE = %d",science);
                printf("\nTHE NUMBER OF THE STUDENT IN HISTORY = %d",history);
                
            }}
            else
            {
                printf("YOU ARE SCUESSFULLY EXIT\n ");
                    break;
                
            
            }
         
        }
          ik++;
          
    }
   return 0;
    
    }