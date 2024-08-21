#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int N;
	printf("Enter NxN : ");
	scanf("%d",&N);
	int n[N][N],i,j,a,b,c,d,p=0,x,y;
	char m[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			n[i][j]=rand()%2;
			m[i][j]='*';
		}
	}
	printf("  ");
	for(d=0;d<N;d++){
		printf("%d ",d);
	}
	printf("\n");
	for(a=0;a<N;a++){
		printf("%d ",a);
		for(b=0;b<N;b++){
			printf("%c ",m[a][b]);
		}
		printf("\n");
	}
	do{
		printf("Enter (x,y): ");
		scanf("%d %d",&x,&y);
		printf("\n");
		m[x][y] =n[x][y]+'0';
		printf("  ");
		for(d=0;d<N;d++){
		printf("%d ",d);
		}
		printf("\n");
		for(a=0;a<N;a++){
		printf("%d ",a);
		for(b=0;b<N;b++){
			printf("%c ",m[a][b]);
		}
		printf("\n");
		}
		printf("\n");
		if(m[x][y]=='0'){
			p++;
		}
	} while(!(n[x][y]));
	printf("\n--------Game Over--------\n");
	printf("point = %d",p);
}
