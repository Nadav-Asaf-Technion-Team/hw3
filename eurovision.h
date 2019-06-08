#ifndef EUROVISION_H_
#define EUROVISION_H_

#include <iostream>
#include <string>

// it's allowed to define here any using statements, according to needs.
// do NOT define here : using namespace std;
using std::string;
using std::ostream;
using std::cout;
using std::endl;
//---------------------------------------------------

enum VoterType { All, Regular, Judge };
enum Phase { Registration, Contest, Voting };

//---------------------------------------------------

class Participant
{
private:
	const string stateName;
	string songName;
	int songDuration;
	string singerName;
	int registration;

public:

	// need to define here possibly c'tr and d'tr and ONLY methods that
	// are mentioned and demonstrated in the test example that has been published.
	// NO OTHER METHODS SHOULD APPEAR HERE.

	// NO friend is allowed here.
	Participant(string stateName, string songName, int songDuration, string singerName);
	~Participant() = default;
	string state() const;
	string song()const;
	int timeLength() const;
	string singer() const;
	int isRegistered() const;
	void update(string songName, int songDuration, string singerName);
	void updateRegistered(bool registration);

};

ostream& operator<<(ostream& os, const Participant& participant);

//---------------------------------------------------


class Voter
{
	// relevant private members can be defined here, if necessary.

public:

	// need to define here possibly c'tr and d'tr and ONLY methods that
	// are mentioned and demonstrated in the test example that has been published.
	// NO OTHER METHODS SHOULD APPEAR HERE.

	// NO friend is allowed here.

};


// -----------------------------------------------------------

struct Vote
{

	// ALL is public here.
	// need to define ONLY data members and c'tr and d'tr.
	// NO NEED to define anything else.

};

// -----------------------------------------------------------


class MainControl
{
private:

	Phase phase;
	int maxTimeLength;
	int maxParticipants;
	int maxVotes;
	//ContendersArray contenders; //should figure out where to define it

public:

	MainControl(int maxTimeLength = 180, int maxParticipants = 26, int maxVotes = 5);
	~MainControl();
	void setPhase(Phase phase);
	int legalParticipant(Participant participant);
	int participate(string state);

};

// -----------------------------------------------------------

#endif
