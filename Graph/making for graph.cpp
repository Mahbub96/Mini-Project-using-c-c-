///making a graph
#include<iostream>
#include"graph.h"
using namespace std;
int main(){
    int height,width;
    height = 10;
    width = 50;
    int x,y;
    cout<<"Enter X and Y point:";
    cin>>x>>y;
    Graph(height,width,x,y);
    return 0;
}
