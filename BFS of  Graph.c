#include<stdio.h>
#include<conio.h>
int a[20][20],p[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v) {
	for (i=1;i<=n;i++)
	  if(a[v][i] && !visited[i])
		{
		printf("\n %d->%d",v,i);
	   p[++r]=i;
		}
	if(f<=r)
	{
		visited[p[f]]=1;
		bfs(p[f++]);
	}
}
void main() {
	int v;
	printf("\n Enter no. of vertices: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		p[i]=0;
		visited[i]=0;
	}
	printf("\n Enter graph data as matrix: \n");
	for (i=1;i<=n;i++)
	  for (j=1;j<=n;j++)
	   scanf("%d",&a[i][j]);
	printf("\n Enter first vertex: ");
	scanf("%d",&v);
	bfs(v);
	printf("\n Reachable Nodes:\n");

    for(i=1; i <= n; i++) {
        if(visited[i])
            printf("%d\n", i);
        else {
            printf("\n No Reachable nodes, BFS is not possible!");
            break;
        }
    }
}
