#include <iostream>
#include <string>

using namespace std;

void main(){
	string input, result = "";
	
	cout<<"Enter word to be converted to pig latin: ";
	cin>>input;

	for(int i = 1; i < input.length(); i++){
		result += input[i];
	}

	result = result + "-" +input[0] + "ay";
	cout<<"Word in pig latin: "<<result<<endl;
}