#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include<iostream>
#include<stdio.h>
using namespace std;
void Graph(int h,int w,int x,int y){
    cout<<endl<<endl;
        if(h < y || w < x) cout<<"Error Data !\a";
    else{
        int X,Y;
        int i,j;
        for(i = 0; i <= h; i++){
            ///print vertical wrapper
            Y = h - i;
            printf("%3d |",Y);
            for( j = 0; j < w; j++ ){
                ///Print coordinator
                if(Y){
                    X = j;
                    if(X == x && Y == y) cout<<"\b*";
                    else cout<<" ";
                }
                else cout<<"_";
            }
            cout<<endl;
        }
    }

    cout<<endl<<endl;
}

#endif // GRAPH_H_INCLUDED




/*

 if(h < y || w < x) cout<<"Error Data !\a";
    else{
        int X,Y;
        int i,j;
        for(i = 0; i <= h; i++){
            ///print vertical wrapper
            Y = h - i;
            printf("%3d |",Y);
            for( j = 0; j < w; j++ ){
                ///Print coordinator
                if(Y){
                    X = j;
                    if(X == x && Y == y) cout<<"\b*";
                    else cout<<" ";
                }
                else cout<<"_";
            }
            cout<<endl;
        }
    }
    */





////
