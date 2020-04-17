const int N=10000+5
int s[N],tot;

int top(){
	return s[tot];
}

void push(int x){
	tot++;
	s[tot] = x;
}

void pop(){
	tot--;
}

void debug(){
	printf("[%d]",tot);
	for(int i=1;i<=n;i++){
		printf("%d ",s[i]);
	}
	puts("");//equal to `cout<<endl;`
}
