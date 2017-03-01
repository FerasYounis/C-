

#ifndef GRAPH_H_
#define GRAPH_H_

class graph
{
	private:int n;
		int **a;
		int *reach;
		int *pos;
	public:graph(int k=10);
		graph();
		void create();
		void dfs();
		void dfs(int v,int label);
		int begin(int v);
		int nextvert(int v);
};



#endif /* GRAPH_H_ */
