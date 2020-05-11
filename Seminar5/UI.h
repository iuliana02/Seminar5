#pragma once
#include "AutoController.h"

class UI //: public AutoController
{
private:
	AutoController* ctrl;

public:
	UI();
	~UI();

	void meniu();
	void optiuni();
};

