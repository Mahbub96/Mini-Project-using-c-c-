///Minimum Note finder
#include<stdio.h>
#define max 8

void output(int *amount,int *i,int *note,int *amound){
    int m = max;
    printf("\nTotal note:%d \n Notes are:\n\n",*i);
    int c = 0,n = 0;
    while(m+1){
        while(note[m] == amount[n]){
            c++;
            n++;
        }
        if(c)
            printf("\t %d x %d = %d \n",note[m],c,note[m]*c);
        c = 0;
        m--;
    }
    printf("\t----------------\n\tTotal : %d\n",*amound);
}

int totalNote(int *amound){
    int note[] = {1,2,5,10,20,50,100,500,1000};
    int noteNumber[50000];
    int count = 0;
    int n = *amound;
    int m = max;
    while(n != 0){
        while(n < note[m])
            m--;
        n = n - note[m];
        noteNumber[count] = note[m];
        count++;
    }
    output(noteNumber,&count,note,amound);
}
void menu(){
    int n;
    printf("\n.....Minimum Note finder for Bangladesh....\n\nEnter Amount[ Maximum 10M ] :");
    scanf("%d",&n);
    totalNote(&n);
    menu();

}
int main(){
    menu();
    return 0;
}
