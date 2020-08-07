//URI Ex:1323  https://www.urionlinejudge.com.br/judge/pt/problems/view/1323

#include <iostream>
#include <vector>
using namespace std;

vector<char> resultados;

int main(){
	int N, valores[5], resp=0, onde_achou_resp;
	char letras[5]={'A', 'B', 'C', 'D', 'E'};
	do{
		cin>>N;
		for(int i=0; i<N; i++){
			for(int j=0; j<5; j++){
				cin>>valores[j];
				if(valores[j]<=127){
					resp++;
					onde_achou_resp=j;
				}	
			}
			if(resp==1){
				resultados.push_back(letras[onde_achou_resp]);	
			}else{
				resultados.push_back('*');
			}
			resp=0; 
		}	
	}while(N!=0);
	
	for(int i=0; i<resultados.size(); i++) cout<<resultados[i]<<endl;
	
	return 0;
}
