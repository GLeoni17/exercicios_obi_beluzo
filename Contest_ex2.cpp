//URI Ex:1129  https://www.urionlinejudge.com.br/judge/pt/problems/view/1129

#include <iostream>
#include <vector>
using namespace std;

vector <int> resultados;

int rec(int N){
	int soma;
	for(int i=N; i>=0; i--){
		soma+=i*i;
	}
	return soma;
}

int main(){
	int N;
	do{
		cin>>N;
		resultados.push_back(rec(N));
	}while(N!=0);
	
	for(int i=0; i<resultados.size()-1; i++) cout<<resultados[i]<<endl;
	
	return 0;
}
