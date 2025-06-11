#include<iostream>
#include<cstring>
#include<map>

using namespace std;

int main(){
	string dna;
	getline(cin, dna);
	int count = 1;
	int max = 1;
	for(int i = 1; i < dna.length(); i++){
		
		if(dna[i] == dna[i-1]){
			count++;
		}
		
		else{
			count = 1;
		}
		if(count > max) max = count;
	}
	cout << max;
	return 0;
}
