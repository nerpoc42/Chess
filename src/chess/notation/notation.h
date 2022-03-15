#ifndef CHESS_NOTATION_H
#define CHESS_NOTATION_H

#include "../basic_types.h"

namespace chess {

class BasicNotationParser {
protected:
	const char* expr;
	const char* it;
	bool validExpr;

	// Basic reading functions
	bool readX(int&);
	bool readY(int&);
	bool readPlayer(Player& pl);
	bool readInsensitiveChar(char);
	bool readChar(char);
	int readUnsignedInt(unsigned&);
	int readInsensitiveString(const char*);
	int readString(const char*);

public:
	explicit BasicNotationParser(const char* = nullptr);

	virtual bool parse() = 0;
	bool parseStr(const char*);

	// Returns pointer to parsing end
	const char* end() const;

	// Returns bool representing whether the expression
	bool valid() const;
};

}

#endif
