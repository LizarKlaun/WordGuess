#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

class Font {
protected:
	vector<vector<string>> font;
public:
	void Ñursor() {
		font[font.size() - 2] =
		{ R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)" };
		font[font.size() - 1] =
		{ R"(       )",
		  R"(       )",
		  R"(       )",
		  R"(       )",
		  R"(       )",
		  R"(       )",
		  R"( _____ )",
		  R"(|_____|)" };
	}
	vector<vector<string>> GetFont() {
		return font;
	}
	virtual void ChooseFont() = 0;
};

class FontDoom : public Font {
public:
	void ChooseFont() override {
		font = {
			{
 R"(  ___  )",
 R"( / _ \ )",
 R"(/ /_\ \)",
 R"(|  _  |)",
 R"(| | | |)",
 R"(\_| |_/)",
 R"(       )",
 R"(       )"
},

			{
 R"(______ )",
 R"(| ___ \)",
 R"(| |_/ /)",
 R"(| ___ \)",
 R"(| |_/ /)",
 R"(\____/ )",
 R"(       )",
 R"(       )"
},
			{
 R"( _____ )",
 R"(/  __ \)",
 R"(| /  \/)",
 R"(| |    )",
 R"(| \__/\)",
 R"( \____/)",
 R"(       )",
 R"(       )"
},
			{
 R"(______ )",
 R"(|  _  \)",
 R"(| | | |)",
 R"(| | | |)",
 R"(| |/ / )",
 R"(|___/  )",
 R"(       )",
 R"(       )"
},
			{
 R"( _____ )",
 R"(|  ___|)",
 R"(| |__  )",
 R"(|  __| )",
 R"(| |___ )",
 R"(\____/ )",
 R"(       )",
 R"(       )"
},
			{
 R"(______ )",
 R"(|  ___|)",
 R"(| |_   )",
 R"(|  _|  )",
 R"(| |    )",
 R"(\_|    )",
 R"(       )",
 R"(       )"
},
			{
 R"( _____ )",
 R"(|  __ \)",
 R"(| |  \/)",
 R"(| | __ )",
 R"(| |_\ \)",
 R"( \____/)",
 R"(       )",
 R"(       )"
},
			{
 R"( _   _ )",
 R"(| | | |)",
 R"(| |_| |)",
 R"(|  _  |)",
 R"(| | | |)",
 R"(\_| |_/)",
 R"(       )",
 R"(       )"
},
			{
 R"( _____ )",
 R"(|_   _|)",
 R"(  | |  )",
 R"(  | |  )",
 R"( _| |_ )",
 R"( \___/ )",
 R"(       )",
 R"(       )"
},
{
 R"(   ___ )",
 R"(  |_  |)",
 R"(    | |)",
 R"(    | |)",
 R"(/\__/ /)",
 R"(\____/ )",
 R"(       )",
 R"(       )"
},
{
 R"( _   __)",
 R"(| | / /)",
 R"(| |/ / )",
 R"(|    \ )",
 R"(| |\  \)",
 R"(\_| \_/)",
 R"(       )",
 R"(       )"
},
			{
 R"( _     )",
 R"(| |    )",
 R"(| |    )",
 R"(| |    )",
 R"(| |____)",
 R"(\_____/)",
 R"(       )",
 R"(       )"
},
{
 R"( __  __ )",
 R"(|  \/  |)",
 R"(| .  . |)",
 R"(| |\/| |)",
 R"(| |  | |)",
 R"(\_|  |_/)",
 R"(        )",
 R"(        )"
},
{
 R"( _   _ )",
 R"(| \ | |)",
 R"(|  \| |)",
 R"(| . ` |)",
 R"(| |\  |)",
 R"(\_| \_/)",
 R"(       )",
 R"(       )",
},
{
 R"( _____ )",
 R"(|  _  |)",
 R"(| | | |)",
 R"(| | | |)",
 R"(\ \_/ /)",
 R"( \___/ )",
 R"(       )",
 R"(       )",
},
{
 R"(______ )",
 R"(| ___ \)",
 R"(| |_/ /)",
 R"(|  __/ )",
 R"(| |    )",
 R"(\_|    )",
 R"(       )",
 R"(       )",
},
{
 R"( _____ )",
 R"(|  _  |)",
 R"(| | | |)",
 R"(| | | |)",
 R"(\ \/' /)",
 R"( \_/\_\)",
 R"(       )",
 R"(       )"
},
{
 R"(______ )",
 R"(| ___ \)",
 R"(| |_/ /)",
 R"(|    / )",
 R"(| |\ \ )",
 R"(\_| \_|)",
 R"(       )",
 R"(       )"
},
{
 R"( _____ )",
 R"(/  ___|)",
 R"(\ `--. )",
 R"( `--. \)",
 R"(/\__/ /)",
 R"(\____/ )",
 R"(       )",
 R"(       )"
},
{
 R"( _____ )",
 R"(|_   _|)",
 R"(  | |  )",
 R"(  | |  )",
 R"(  | |  )",
 R"(  \_/  )",
 R"(       )",
 R"(       )"
},
{
 R"( _   _ )",
 R"(| | | |)",
 R"(| | | |)",
 R"(| | | |)",
 R"(| |U| |)",
 R"( \___/ )",
 R"(       )",
 R"(       )"
},
{
 R"( _   _ )",
 R"(| | | |)",
 R"(| | | |)",
 R"(| | | |)",
 R"(\ \v/ /)",
 R"( \___/ )",
 R"(       )",
 R"(       )"
},
{
 R"( _    _ )",
 R"(| |  | |)",
 R"(| |  | |)",
 R"(| |/\| |)",
 R"(\  /\  /)",
 R"( \/  \/ )",
 R"(        )",
 R"(        )"
},
{
 R"(__   __)",
 R"(\ \ / /)",
 R"( \ V / )",
 R"(  > <  )",
 R"( / . \ )",
 R"(/_/ \_\)",
 R"(       )",
 R"(       )"
},
{
 R"(__   __)",
 R"(\ \ / /)",
 R"( \ V / )",
 R"(  \ /  )",
 R"(  | |  )",
 R"(  \_/  )",
 R"(       )",
 R"(       )"
},
{
 R"(_______)",
 R"(|___  /)",
 R"(   / / )",
 R"(  / /  )",
 R"( / /___)",
 R"(\_____/)",
 R"(       )",
 R"(       )"
},
{
},
{
}
		};
		Ñursor();
	}
};

class Word : public FontDoom {
	string word;
public:
	Word() {
		word = "|_____ ";
		ChooseFont();
	}
	Word(string word) {
		this->word = word;
		ChooseFont();
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
			//cout << "move left" << endl;
		}
		else if (move == 77) {
			tempLetter = word[word.find('|') + 1];
			word[word.find('|') + 1] = '|';
			word[word.find('|')] = tempLetter;
			//cout << "move right" << endl;
		}
	}
	void PrintWord(vector<string> listWord, string theWord) {
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
								if (counterMaxLetters == counterLetters){
									letterFind = false;
									break;
								}
								//cout << listWord[k][j] << counterMaxLetters << counterLetters;
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
							for (int i = 0; i < font[listWord[k][j] - 97][6].size(); i++) {
								cout << '#';
							}
							letterFind = false;
						}
						else if (letterFind && i == 6) {
							for (int i = 0; i < font[listWord[k][j] - 97][6].size(); i++) {
								cout << '*';
							}
						}
						else {
							cout << font[listWord[k][j] - 97][i];
						}
					}
					else if (listWord[k][j] == 95) {
						cout << font[27][i];
					}
					//else {
					//	cout << "error";
					//}
				}
				cout << endl;
			}
			//cout << endl << word << endl;
			//cout << endl << listWord[k] << endl;
			cout << "=------------------------------------=" << endl << endl;
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < word.size(); j++) {
				if (j != word.find('|') && j - 1 != word.find('|')) {
					cout << " ";
				}
				if (word[j] >= 97 && word[j] <= 122) {
					cout << font[word[j] - 97][i];
				}
				else if (word[j] == 124) {
					cout << font[26][i];
				}
				else if (word[j] == 95) {
					cout << font[27][i];
				}
				//else {
				//	cout << "error";
				//}
			}
			cout << endl;
		}
		//cout << endl << word << endl;
	}  
	void PrintTheWord(string word) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < word.size(); j++) {
				cout << " ";
				if (word[j] >= 97 && word[j] <= 122) {
					cout << font[word[j] - 97][i];
				}
			}
			cout << endl;
		}
	}
};

class Input : public Word {
	Word word;
	int indexWord;
	char move;
	int amout_;
public:
	Input() {
		word = Word("|_____ ");
		move = 0;
		indexWord = 0;
		amout_ = 0;
	}
	Input(string word) {
		this->word = Word(word);
		move = 0;
		indexWord = 0;
		amout_ = 0;
	}
	Word GetWord() {
		return word;
	}
	void SetWord(Word word) {
		this->word = word;
	}
	void Play(vector<string> listWord, string theWord) {
		word.PrintWord(listWord, theWord);
		cout << endl << "Enter a letter" << endl;
		while (true) {
			move = _getch();
			if (move == -32) {
				move = _getch();
			}
			amout_ = 0;
			for (int i = 0; i < word.GetWord().size(); i++) {
				if (word.GetWord()[i] == '_') {
					amout_++;
				}
			}
			if (move == 27) {
				system("cls");
				cout << "The word: " << theWord << endl;
				cout << "you spent " << listWord.size() << " moves but still haven’t guessed the word" << endl;
				cout << "U Lose(((" << endl;
				exit(0);
			}
			if (move == 13 && amout_ == 0) {
				system("cls");
				break;
			}
			else if (move == 13 && amout_ != 0) {
				system("cls");
				word.PrintWord(listWord, theWord);
				cout << endl << "Put all the letters" << endl;
				continue;
			}
			if (move == 32) {
				move = 77;
			}
			if (move == 77 && word.GetWord().find('|') < word.GetWord().size() - 1 || move == 75 && word.GetWord().find('|') != 0) {
				system("cls");
				word.MoveCursor(move);
				word.PrintWord(listWord, theWord);
				cout << endl << "Enter a letter" << endl;
				continue;
			}
			else if (move == 8 && word.GetWord().find('|') != 0) {
				system("cls");
				word.DeleteLetterBehind();
				indexWord--;
				word.PrintWord(listWord, theWord);
				cout << endl << "Enter a letter" << endl;
				continue;
			}
			else if (move == 83 && word.GetWord().find('|') != word.GetWord().size() - 1) {
				system("cls");
				word.DeleteLetterFront();
				indexWord--;
				word.PrintWord(listWord, theWord);
				cout << endl << "Enter a letter" << endl;
				continue;
			}
			else if (move < 97 || move > 122) {
				cout << int(move) << endl;
				continue;
			}
			system("cls");
			if (word.GetWord().find('|') == 0) {
				word.AddLetter(move);
				indexWord++;
				word.PrintWord(listWord, theWord);
				cout << endl << "Enter a letter" << endl;
			}
			else if (word.GetWord().find('|') == word.GetWord().size() - 1) {
				indexWord++;
				word.PrintWord(listWord, theWord);
				cout << endl << "You cannot enter more " << word.GetWord().size() - 1 << " letters" << endl;
			}
			else if (word.GetWord().find('|') > 0) {
				word.AddLetter(move);
				indexWord++;
				word.PrintWord(listWord, theWord);
				cout << endl << "Enter a letter" << endl;
			}
		}
	}
};

class DataBaseWords {
	vector<string> words;
public:
	DataBaseWords() {
		words = {
"apple", "kolya", "stone", "chair", "table", "glass", "mouse", "train",
"plane", "bread", "crown", "floor", "sword", "cable", "house", "ocean",
"world", "earth", "plant", "clock", "river", "smile", "beach", "happy",
"dream", "light", "horse", "cloud", "heart", "piano", "space", "peace",
"brick", "dance", "angel", "field", "music", "movie", "power", "magic",
"shoes", "fear",  "woman", "sleep", "honey", "sharp", "story", "laugh",
 "tree", "love", "moon", "star", "fish", "book", "rain", "fire",
 "gold", "time", "dark", "wind", "blue", "rock", "snow", "sand",
 "lamp", "road", "wave", "liza", "bear", "frog", "ring", "salt",
 "seed", "ship", "bird", "vlad", "camp", "coin", "door", "farm",
 "game", "hand", "hill", "iron", "king", "lady", "line", "luck",
 "meat", "note", "path", "rose", "song", "soul", "town", "wall",
  "cat", "dog", "sun", "bat", "rat", "fan", "hat", "man", "pan", "run",
  "car", "bar", "war", "far", "jar", "tar", "nap", "lap", "map", "tap",
  "cap", "gap", "sap", "zap", "hip", "tip", "lip", "rip", "sip", "dip",
  "top", "pop", "hop", "cop", "mop", "log", "fog", "hog", "bog", "lol",
  "bed", "red", "led", "net", "pet", "vet", "get", "set", "jet", "met"
		};
	}
	vector<string> GetWords() {
		return words;
	}
	void SetWords(vector<string> words) {
		this->words = words;
	}
};

int main() {
	FontDoom font;
	Input inputWord;
	DataBaseWords words;
	srand(time(NULL));
	int randomIndexWords = rand() % words.GetWords().size();
	string theWord = words.GetWords()[randomIndexWords];
	//theWord = words.GetWords()[82];
	string fieldInput = "|";
	for (int i = 0; i < theWord.size(); i++) {
		fieldInput += '_';
	}
	inputWord.SetWord(Word(fieldInput));
	vector<string> listWord;
	string word;
	while (true) {
		listWord.push_back(inputWord.GetWord().GetWord());
		//cout << theWord << endl;
		inputWord.SetWord(Word(fieldInput));
		inputWord.Play(listWord, theWord);
		word = inputWord.GetWord().GetWord().erase(inputWord.GetWord().GetWord().find('|'), 1);
		if (word == theWord) {
			system("cls");
			cout << "The word: " << endl;
			inputWord.GetWord().PrintTheWord(theWord);
			cout << "it took you " << listWord.size() << " attempts to guess this word" << endl;
			cout << "U Won!!!" << endl;
			break;
		}
	}



	//font.ChooseFont();
	//cout << font.GetFont().size() << endl;
	//for (int i = 0; i < font->GetFont()[0].size()-1; i++) {
	//    for (int j = 10; j < font->GetFont().size(); j++)
	//    {
	//        cout << " " << font->GetFont()[j][i] << " ";
	//    }
	//    cout << endl;
	//}
	////for (int i = 0; i < font->GetFont().size(); i++) {
	//    for (int j = 0; j < font->GetFont()[i].size() - 1; j++) {
	//        cout << font->GetFont()[i][j] << endl;
	//    }
	//}


	return 0;
}