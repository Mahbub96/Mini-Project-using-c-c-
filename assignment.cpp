///Making a Line in c
#include<iostream>
#include<stdio.h>
using namespace std;
void line(int h,int w,int x1,int y1,int x2,int y2){
    cout<<endl<<endl;
        int X,Y;
        int i,j;
        int min,max;
        if(x1>x2) {
            min = x2;
            max = x1;
        }
        else {
            min = x1;
            max = x2;
        }
        for(i = 0; i <= h; i++){
            Y = h - i;
            printf("%3d |",Y);
            for( j = 0; j <=w; j++ ){
                X = j;
                if(Y){
                    if( min==X && y1==Y) {
                        cout<<"*";
                        if(min<max) min++;
                    }
                    else cout<<" ";
                }
                else cout<<"_";
                
               
            }
            cout<<endl;
        }
   
}

int main(){
    int height,width;
    height = 6;
    width = 20;
    line(height,width,1,3,1,4);///line(graph_height,graph_width,x1,y1,x2,y2);
    return 0;
}
