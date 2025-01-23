class DataBaseWords {
	vector<string> words;
public:
	DataBaseWords() {
		words = {
"apple", "kolya", "stone", "chair", "table", "lizar", "klaun", "train",
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
  "cat", "dog", "sun", "bat", "rat", "fan", "hat",
  "car", "bar", "war", "far", "jar", "tar", "nap",
  "cap", "gap", "sap", "zap", "hip", "tip", "lip",
  "top", "pop", "hop", "cop", "mop", "log", "fog",
  "bed", "red", "led", "net", "pet", "vet", "get"
		};
	}
	vector<string> GetWords() {
		return words;
	}
	void SetWords(vector<string> words) {
		this->words = words;
	}
};