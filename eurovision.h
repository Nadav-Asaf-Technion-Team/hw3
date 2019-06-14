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
	const VoterType type;
	const string voterState;
	int timesVoted;

public:

	// need to define here possibly c'tr and d'tr and ONLY methods that
	// are mentioned and demonstrated in the test example that has been published.
	// NO OTHER METHODS SHOULD APPEAR HERE.

	// NO friend is allowed here.
	Voter(const string state, VoterType type = Regular);
	~Voter() = default;
	string state() const;
	VoterType voterType() const;
	int timesOfVotes() const;
	Voter& operator++();
};

ostream& operator<<(ostream& os, const Voter& voter);

// -----------------------------------------------------------

struct Vote
{

	// ALL is public here.
	// need to define ONLY data members and c'tr and d'tr.
	// NO NEED to define anything else.
	Voter voter;
	string to;
	Vote(const Voter& voter, const string to);
	~Vote() = default;
};

// -----------------------------------------------------------


class MainControl
{
private:

	Phase phase;
	int maxTimeLength;
	int maxParticipants;
	int maxVotes;
	int participantsAmount;
	class Contender {
	public:
		Participant* participant;
		int regularVotes;
		int judgeVotes;

		Contender(Participant* p, int regularVotes, int judgeVotes);
		Contender();
		string getState();
		int getRegularVotes();
		int getJudgeVotes();
		void addRegularVotes(int newVotes);
		void addJudgeVotes(int newVotes);
	};
	Contender* contenders;
	//class ContenderArray {};
	//ContenderArray contenders;

public:
	// need to define here possibly c'tr and d'tr and ONLY methods that
	// are mentioned and demonstrated in the test example that has been published.
	// NO OTHER METHODS SHOULD APPEAR HERE.

	// Also it's allowed here to define friend.
	MainControl(int maxTimeLength = 180, int maxParticipants = 26, int maxVotes = 5);
	~MainControl();
	void setPhase(Phase newPhase);
	int legalParticipant(Participant participant);
	int participate(string state);

	friend ostream& operator<<(ostream& os, const MainControl& eurovision);
	friend ostream& operator<<(ostream& os, const MainControl::Contender& contender);
};

// -----------------------------------------------------------

#endif
