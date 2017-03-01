#include <Graph.h>
#include <iostream>
using std::cout;
using std::endl;

Graph::Graph(int k){
	n=k;
	a=new int *[n+1];
	reach=new int[n+1];
	pos=new int [n+1];
	for(int i=1;i<=n;i++)
		pos[i]=0;
	for(int j=1;j<=n;j++)
		a[j]=new int[n+1];

}




