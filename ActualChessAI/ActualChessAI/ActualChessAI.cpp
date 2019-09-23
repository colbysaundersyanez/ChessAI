#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

class chessMatchInfo {
public:
	int numberOfPieces;
	bool newGame;
	vector<int> numberForPieces;
	vector<string> stringPieces;
	int numberOfItemsInArray;
	int numberTypePieces[32];
	string nameTypeArray[32];

	int printingVector() {
		for (int x = 0; x != numberForPieces.size(); ++x) {
			return numberForPieces[x];
		}
	}
};

int main() {
	string allPieces[32] = { "Pawn", "Rook", "Kight", "Bishops", "Queen", "King" };
	chessMatchInfo mainClass;
	mainClass.numberOfPieces = 10;
	mainClass.newGame = true;
	if (mainClass.newGame = true) {
		for (int c = 0; c <= 31; c++) {
			mainClass.nameTypeArray[c] = allPieces[c];
			cout << mainClass.nameTypeArray[c] << " ";
		}

	}
	cout << "\n";
	//mainClass.numberForPieces.push_back(1);
	try {
		for (int x = 0; x <= 31; x++) {
			mainClass.numberTypePieces[x] = x;
			cout << mainClass.numberTypePieces[x] << " ";
		}
	}
	catch (exception e) { cout << "exception at line 35"; }
	for (int i = 0; i <= 31; i++) {
		int arrayInt = mainClass.numberTypePieces[i];
		mainClass.numberForPieces.push_back(arrayInt);
		cout << mainClass.printingVector();
		//for (std::vector<char>::const_iterator i = mainClass.numberForPieces.begin(); i != path.end(); ++i)
		//	std::cout << *i << ' ';
		for (int n = 0; n <= 32; n++) {
			int size = sizeof(mainClass.nameTypeArray);
			//cout << size;
			//mainClass.stringPieces.push_back(mainClass.nameTypeArray);
			//mainClass.nameTypeArray[n] = stringPieces;
		}
	}
}
