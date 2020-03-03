#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ry");
	string S, c;
	fstream text1;
	fstream text2;
	text1.open("text1.txt");
	text2.open("text2.txt");
	getline(text2, S , '\0');
		for (int i = 0;i < S.size(); i++) {
		text1 << S.at(i);
	}
	text1.close();
	text2.close();
return 0;
}	