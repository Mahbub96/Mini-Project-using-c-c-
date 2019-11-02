///MoneyBag using c language
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

struct moneyBag{
    int save;
    char date[12];
    char cause[50];
}m;

void back(){
    int ch;
    printf("\n\n\t Press ESC to menu: ");
    do{
        ch = getche();
        if(ch == 8 ) printf(" ");
        else printf("\b");
    }while(ch != 27);
    menu();
}

void addMoney(){
    FILE *fp;
    fp = fopen("data.dat","a");
    system("cls");
    char date[12];
    printf("*******Add Money ******* ");
    printf("\n\tEnter Date (01/01/2000): ");
    gets(m.date);
    printf("Enter amount:");
    scanf("%d",&m.save);
    fflush(stdin);
    printf("Enter Details:");
    gets(m.cause);
    fwrite(&m,sizeof(m),1,fp);
    fclose(fp);
}

void removeMoney(){
    FILE *fp;
    int save;
    fp = fopen("data.dat","a");
    system("cls");
    char date[12];
    printf("*******Add Money ******* ");
    printf("\n\tEnter Date (01/01/2000): ");
    gets(m.date);
    printf("Enter amount:");
    scanf("%d",&save);
    m.save = -save;
    fflush(stdin);
    printf("Enter Details:");
    gets(m.cause);
    fwrite(&m,sizeof(m),1,fp);
    fclose(fp);
}

void View(){
    system("cls");
    FILE *fpr;
    int amount = 0;
    fpr = fopen("data.dat","r");
    if(!fpr){
        printf("File is Empty!\a");
        getche();
        fclose(fpr);
        menu();
    }
    printf(" type\t   Date\t\tAmount\t\tDetails\n");
    int i = 80;
    while(i){
        printf("-");
        i--;
    }
    while(fread(&m,sizeof(m),1,fpr)){
        amount += m.save;
        if( m.save < 0) printf("\n Credit");
        else printf("\n Davit ");
       printf("%10s %10d %10s\n",m.date,m.save,m.cause);

    }
    i = 80;
    while(i){
        printf("-");
        i--;
    }
    printf("\n\nAfter all Calculation , your have : %d taka",amount);
    fclose(fpr);
    back();
}

void menu(){
    while(1){
        system("cls");
        char choice;
        printf("1.for add money \t 2.for Put out money \t3.View\t4.Exit");
        printf("\n\tPress any key : ");
        do{
            choice = getche();
            if(choice == 8 ) printf(" ");
            else printf("\b");
        }while(choice!='1' && choice != '2' && choice != '3' && choice != '4');
        if(choice == '1') addMoney();
        else if(choice == '2') removeMoney();
        else if(choice == '3') View();
        else exit(1);
    }
}

int main(){
    menu();
    return 0;
}
