#include<iostream>
using namespace std;

int main(){
	string s;
	cout << "Enter Plaintext: " ;
	cin >> s;
	int i,j,l,k=0;
	
	l = s.length();
	int bsize=5;
	char encry[l];

	int key[5];
	cout << "Enter key: ";
	for(i=0;i<5;i++)
		cin >> key[i];
	/*
	for(i=0;i<5;i++){
		encry[i] = s[key[i]-1];
	}
	*/

	for(i=0;i<l;i=i+5){
		//cout << "\n" << i << " " << endl;
		int keyi = 0;
		for(j=i;j<=i+5-1;j++){
			//cout << j << " ";
			encry[j] = s[i+key[keyi]-1];
			keyi++;
		}

	}

	
	cout << encry << endl;
	int m;
	//Decrytion
	char decry[l];
	int deck[5];
	for(i=0;i<5;i++){
		m = key[i]-1;
		deck[m] = i;

	}
	/*for(i=0;i<5;i++)
		cout << deck[i] << " ";
*/
	for(i=0;i<l;i=i+5){
		int keyi = 0;
		for(j=i;j<=i+5-1;j++){
			//cout << j << " ";
			decry[j] = encry[i+deck[keyi]];
			keyi++;
		}
	}
	//cout << decry << endl;
	for(i=0;i<l;i++)
		cout << decry[i];

	cout << endl;

}