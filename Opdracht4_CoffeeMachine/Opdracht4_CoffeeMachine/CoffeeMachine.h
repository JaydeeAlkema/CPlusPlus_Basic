#pragma once
#include <vector>
#include"Coin.h"
#include"OneEuro.h"
#include"FiftyCents.h"
#include"SchlatCoin.h"


class CoffeeMachine
{
public:
	void insertCoin(OneEuro oneEuro);
	void insertCoin(FiftyCents fiftyCents);
	void insertCoin(SchlatCoin schlatCoin);
	void getCoffeeChoices();

private:
};
