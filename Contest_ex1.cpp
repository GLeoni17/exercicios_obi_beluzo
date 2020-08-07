// URI ex: 1021  https://www.urionlinejudge.com.br/judge/pt/problems/view/1021


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	float valores[12]={100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05};
	float N;
	cin>>N;
	
	cout<<"NOTAS:"<<endl;
	for(int i=0; i<11; i++){
		
		if(i==6) cout<<"MOEDAS:"<<endl;
		
		cout<<fixed<<setprecision(0);
		
			cout<<floor(N/valores[i]); 
			N-=valores[i]*(floor(N/valores[i]));
		
		cout<<fixed<<setprecision(2);
		
		if(i>=6){
			cout<<" moeda(s) "; 
		}else{
			cout<<" nota(s) ";	
		} 
		
		cout<<"de R$ "<<valores[i]<<endl;
		
	}
	
	cout<<fixed<<setprecision(0);
	cout<<N*100<<" moeda(s) de R$ 0.01"<<endl;
	
	return 0;
}
