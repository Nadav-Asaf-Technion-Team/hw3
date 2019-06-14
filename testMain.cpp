#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;

int main() {
	MainControl eurovision;
	Participant p1("Israel", "Song_Israel", 175, "Singer_Israel");
	Participant p2("UK", "Song_UK", 170, "Singer_UK");
	Participant p3("France", "Song_France", 190, "Singer_France");
	Participant p4("Australia", "Song_Australia", 180, "Singer_Australia");
	Participant p5("Cyprus", "Song_Cyprus", 172, "Singer_Cyprus");
	((((eurovision += p1) += p2) += p3) += p4) += p5;
	cout << eurovision << endl;
	eurovision -= p1;
	cout << eurovision << endl;
	eurovision.setPhase(Contest);
	cout << endl << "+++++++++++++++++++" << endl;
	cout << "israel: " << eurovision.participate("Israel") << endl;
	cout << "ginea: " << eurovision.participate("ginea") << endl;
	eurovision.setPhase(Voting);
	cout << eurovision;
	return 0;
}