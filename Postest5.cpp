#include <iostream>
using namespace std;

int main(){
	
	int nilaikuis[5] = {90,78,85,75,100};
	
	for(int i =0;i < 5;i++){
		cout << nilaikuis[i] << " ";
		
	}
	nilaikuis[1] = 95;
	cout << endl;
	for(int i = 0;i < 5;i++){
		cout << nilaikuis[i] << " ";
	}
}
