//HI
/*
LAB QUIZ 11
JUBAYER AHMED
CSCI 135


MONEY
*/

class Money {
public:
	int dollars;
	int cents;
};

Money add_money(Money x, Money y) {
	Money output;
	output.cents = ((x.cents + y.cents) % 100);
	output.dollars = ((x.dollars + y.dollars) + ((x.cents + y.cents) / 100));

	return output;
}