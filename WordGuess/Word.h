class Word {
	string word;
public:
	Word() {
		word = "|_____ ";
	}
	Word(string word) {
		this->word = word;
	}
	string GetWord() {
		return word;
	}
	void AddLetter(char move) {
		word[word.find('|') + 1] = '|';
		word[word.find('|')] = move;
	}
	void DeleteLetterBehind() {
		word[word.find('|') - 1] = '|';
		word[word.find('|') + 1] = '_';
	}
	void DeleteLetterFront() {
		for (int i = word.find('|'); i < word.size(); i++) {
			if (word[i] != '_' && word[i] != '|') {
				word[i] = '_';
				break;
			}
		}
	}
	void MoveCursor(char move) {
		char tempLetter;
		if (move == 75) {
			tempLetter = word[word.find('|') - 1];
			word[word.find('|') - 1] = '|';
			word[word.find('|') + 1] = tempLetter;
		}
		else if (move == 77) {
			tempLetter = word[word.find('|') + 1];
			word[word.find('|') + 1] = '|';
			word[word.find('|')] = tempLetter;
		}
	}
	void PrintWord(vector<string> listWord, string theWord, Font& font) {
		string allWord;
		for (int k = 1; k < listWord.size(); k++) {
			allWord = listWord[k];
			allWord.erase(allWord.find('|'), 1);
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < word.size(); j++) {
					if (j != listWord[k].find('|')) {
						cout << " ";
					}
					if (listWord[k][j] >= 97 && listWord[k][j] <= 122) {
						bool letterFind = false;
						int counterLetters = 0;
						int counterMaxLetters = 0;
						for (int z = 0; z < theWord.size(); z++) {
							if (listWord[k][j] == theWord[z]) {
								counterLetters++;
							}
						}
						for (int z = 0; z < theWord.size(); z++) {
							if (listWord[k][j] == theWord[z]) {
								if (counterMaxLetters == counterLetters) {
									letterFind = false;
									break;
								}
								if (listWord[k][j] == listWord[k][z]) {
									counterMaxLetters++;
								}
								else {
									letterFind = true;
									break;
								}
							}
						}
						if (listWord[k][j] == theWord[j] && i == 6) {
							for (int i = 0; i < font.GetFont()[listWord[k][j] - 97][6].size(); i++) {
								cout << '#';
							}
							letterFind = false;
						}
						else if (letterFind && i == 6) {
							for (int i = 0; i < font.GetFont()[listWord[k][j] - 97][6].size(); i++) {
								cout << '*';
							}
						}
						else {
							cout << font.GetFont()[listWord[k][j] - 97][i];
						}
					}
					else if (listWord[k][j] == 95) {
						cout << font.GetFont()[26][i];
					}
				}
				cout << endl;
			}
			cout << "=------------------------------------=" << endl << endl;
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < word.size(); j++) {
				if (j != word.find('|') && j - 1 != word.find('|')) {
					cout << " ";
				}
				if (word[j] >= 97 && word[j] <= 122) {
					cout << font.GetFont()[word[j] - 97][i];
				}
				else if (word[j] == 124) {
					cout << font.GetFont()[27][i];
				}
				else if (word[j] == 95) {
					cout << font.GetFont()[26][i];
				}
			}
			cout << endl;
		}
	}
	void PrintTheWord(string word, Font& font) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < word.size(); j++) {
				cout << " ";
				if (word[j] >= 97 && word[j] <= 122) {
					cout << font.GetFont()[word[j] - 97][i];
				}
			}
			cout << endl;
		}
	}
};