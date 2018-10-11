#include<iostream>
using namespace std;

int main(){
	string s;
	cout << "Enter Plaintext: " ;
	cin >> s;
	int i,l,k=0;
	
	l = s.length();
	char encry[l];
	for(i=0;i<l;i++){
		if(i%2 == 0){
			encry[k] = s[i];
			k++;
		}
	}

	for(i=0;i<l;i++){
		if(i%2 != 0){
			encry[k] = s[i];
			k++;
		}
	}

	cout << "Encrypted Text: " << encry << endl;

	//Decrytion
	char decry[l];
	if(l%2!=0){
	k=0;
	for(i=0;i<=l/2;i++){
		decry[k] = encry[i];
		k++;
		decry[k] = encry[i+int(l/2)+1];
		k++;


	}}

	else if(l%2==0){
	k=0;
	for(i=0;i<l/2;i++){
		decry[k] = encry[i];
		k++;
		decry[k] = encry[i+int(l/2)];
		k++;
	}}

	cout << "Decrypted Text: " << decry << endl;


}