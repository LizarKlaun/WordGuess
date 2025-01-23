class Font {
protected:
	vector<vector<string>> font;
public:
	void Ñursor() {
		font[font.size() - 1] =
		{ R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)",
		  R"(|)" };
	}
	vector<vector<string>> GetFont() {
		return font;
	}
	virtual void ChooseFont() = 0;
	virtual ~Font() = default;
};