#include "libraries.h" // файл с библиотеками

class Input : public Word { // это чтото вроде класса кода...
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
	void Play(vector<string> listWord, string theWord, Font& font) {
		word.PrintWord(listWord, theWord, font);
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
				word.PrintWord(listWord, theWord, font);
				cout << endl << "Put all the letters" << endl;
				continue;
			}
			if (move == 32) {
				move = 77;
			}
			if (move == 77 && word.GetWord().find('|') < word.GetWord().size() - 1 || move == 75 && word.GetWord().find('|') != 0) {
				system("cls");
				word.MoveCursor(move);
				word.PrintWord(listWord, theWord, font);
				cout << endl << "Enter a letter" << endl;
				continue;
			}
			else if (move == 8 && word.GetWord().find('|') != 0) {
				system("cls");
				word.DeleteLetterBehind();
				indexWord--;
				word.PrintWord(listWord, theWord, font);
				cout << endl << "Enter a letter" << endl;
				continue;
			}
			else if (move == 83 && word.GetWord().find('|') != word.GetWord().size() - 1) {
				system("cls");
				word.DeleteLetterFront();
				indexWord--;
				word.PrintWord(listWord, theWord, font);
				cout << endl << "Enter a letter" << endl;
				continue;
			}
			else if (move < 97 || move > 122) {
				//cout << int(move) << endl;
				continue;
			}
			system("cls");
			if (word.GetWord().find('|') == 0) {
				word.AddLetter(move);
				indexWord++;
				word.PrintWord(listWord, theWord, font);
				cout << endl << "Enter a letter" << endl;
			}
			else if (word.GetWord().find('|') == word.GetWord().size() - 1) {
				indexWord++;
				word.PrintWord(listWord, theWord, font);
				cout << endl << "You cannot enter more " << word.GetWord().size() - 1 << " letters" << endl;
			}
			else if (word.GetWord().find('|') > 0) {
				word.AddLetter(move);
				indexWord++;
				word.PrintWord(listWord, theWord, font);
				cout << endl << "Enter a letter" << endl;
			}
		}
	}
}; 

int main() {
	FontDoom font; // создаём обьект шрифт
	//FontLean font; // создаём обьект шрифт
	font.ChooseFont(); // выбираем ему шрифт
	Input inputWord; // создаём обьект кода ну или как ещё это обьяснить
	DataBaseWords words; // создаём хранилище наших слов которые должен угадать игрок
	srand(time(NULL)); 
	int randomIndexWords = rand() % words.GetWords().size();
	string theWord = words.GetWords()[randomIndexWords]; // выбираем из хранилищя любое слово
	//theWord = words.GetWords()[82];

	string fieldInput = "|";
	for (int i = 0; i < theWord.size(); i++) {	
		fieldInput += '_';
	} // нужно чтобы игрок имел изначально возможность чтото ввести в поле

	inputWord.SetWord(Word(fieldInput)); // устанавливаем как раз наше 1 поле
	vector<string> listWord; // это массив всех ходов игрока и он нужен для принта их в консоль ну чтобы игрок видел что он писал и какие буквы есть в этом слове
	string word; // само наше слово которое он будет писать
	while (true) { // начинается игра в кальмара
		//cout << theWord << endl;
		listWord.push_back(inputWord.GetWord().GetWord()); // в наш массив слов ожен слово которое написал пользователь
		inputWord.SetWord(Word(fieldInput)); // делаем поле для игрока
		inputWord.Play(listWord, theWord, font); // начинаем играть
		word = inputWord.GetWord().GetWord().erase(inputWord.GetWord().GetWord().find('|'), 1); // теперь наше слово заполнено тем что написал пользователь
		if (word == theWord) { // проверка на победу
			system("cls");
			cout << "The word: " << endl;
			inputWord.GetWord().PrintTheWord(theWord, font); // выводим загаданное слово в случае выигрыша
			cout << "it took you " << listWord.size() << " attempts to guess this word" << endl;
			cout << "U Won!!!" << endl;
			break;
		}
	}
	return 0;
}