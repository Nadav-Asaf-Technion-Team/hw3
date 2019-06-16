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
public:
	// ALL is public here.
	// need to define ONLY data members and c'tr and d'tr.
	// NO NEED to define anything else.
	Voter& voter;
	string states[10];
	Vote(Voter& voter,const string state0, const string state1 = "", const string state2 = "",
		const string state3 = "", const string state4 = "", const string state5 = "", const string state6 = "",
		const string state7 = "", const string state8 = "", const string state9 = "");
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
		Contender(Participant* p, int regularVotes = 0, int judgeVotes = 0);
		Contender();
		string getState();
		int getRegularVotes();
		int getJudgeVotes();
		void addRegularVotes(int newVotes);
		void addJudgeVotes(int newVotes);
	};
	Contender* contenders;
	int findContender(string state);
	static void Swap(Contender& a, Contender& b);
	static void BubbleSort(Contender* arr, int n);

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
	MainControl& operator+=(Participant& participant);
	MainControl& operator+=(Vote vote);
	MainControl& operator-=(Participant& participant);
	friend ostream& operator<<(ostream& os, const MainControl& eurovision);
};

// -----------------------------------------------------------

#endif
