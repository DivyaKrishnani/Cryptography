#include<iostream>
using namespace std;

string encrypt(string txt,int key1, int key2){

	string encrytext = "";
	int i;

	for(i=0;i<txt.length();i++){
		if(isupper(txt[i]))
			encrytext += char((int(txt[i] * key1 + key2 - 65) % 26) + 65);

		else
			encrytext += char((int(txt[i] * key1 + key2 - 97) % 26) + 97);

	}
	return encrytext;
	//cout << encrytext << endl;
}


int main(){
	string txt,encry;
	cin >> txt;

	int key1,key2;
	cin >> key1 >> key2;

	encry = encrypt(txt,key1,key2);
	cout << encry << endl;

}