#include <iostream>

#include "eurovision.h"

using std::cout;
using std::endl;

Participant::Participant(string stateName, string songName, int songDuration, string singerName) :
	stateName(stateName),
	songName(songName),
	songDuration(songDuration),
	singerName(singerName),
	registration(false){}

string Participant::state() const {
	return stateName;
}

string Participant::song() const {
	return songName;
}

int Participant::timeLength() const {
	return songDuration;
}

string Participant::singer() const {
	return singerName;
}

int Participant::isRegistered() const {
	return Registration;
}

void Participant::update(string songName, int songDuration, string singerName){
	if ((*this).isRegistered()) return;
	if (songName != "") {
		this->songName = songName;
	}
	if (songDuration > 0) {
		this->songDuration = songDuration;
	}
	if (singerName != "") {
		this->singerName = singerName;
	}
}

void Participant::updateRegistered(bool registration) {
	this->registration = Registration;
}

ostream& operator<<(ostream& os, const Participant& participant) {
	return os << '[' << participant.state() << '/' << participant.song() << '/' << participant.timeLength() <<
		'/' << participant.singer() << ']' << endl;
}

Voter::Voter(string state, VoterType type) :
	voterState(state), type(type), timesVoted(0) {

}

string Voter::state() const {
	return voterState;
}

VoterType Voter::voterType() const {
	return type;
}

int Voter::timesOfVotes() const {
	return timesVoted;
}

Voter& Voter::operator++() {
	timesVoted++;
	return *this;
}

ostream& operator<<(ostream& os, const Voter& voter) {
	string type = "";
	if (voter.voterType() == Regular)
		type = "Regular";
	else
		type = "Judge";
	return os << '<' << voter.state() << '/' << type << '<';
}

Vote::Vote(const Voter& voter, const string to) :
	voter(voter), to(to) {

}

MainControl::MainControl(int maxTimeLength = 180, int maxParticipants = 26, int maxVotes = 5) : 
maxTimeLength(maxTimeLength), maxParticipants(maxParticipants), maxVotes(maxVotes) {
	ContenderArray contenders(maxParticipants);
}

void MainControl::setPhase(Phase newPhase) {
	phase = newPhase;
}

int MainControl::legalParticipant(Participant participant) {
	if (participant.song() == "" || participant.state() == "" || participant.singer = "")
		return 0;
	else if (participant.timeLength() > maxTimeLength)
		return 0;
	else return 1;
}

ostream& operator<<(ostream& os, const MainControl& eurovision) {
	os << '{' << endl;
	if (eurovision.phase == Registration)
		os << "Registration" << endl;
	else if (eurovision.phase == Contest)
		os << "Contest" << endl;
	else
		os << "Voting" << endl;	
}

class MainControl::Contender {
	Participant& participant;
	int votesRecieved;

	Contender(Participant& p, int votes) : participant(p), votesRecieved(votes) {};
	~Contender() = default;
	string getState() {
		return participant.state();
	};
	int getVotes() {
		return votesRecieved;
	}
	void addVotes(int newVotes) {
		votesRecieved += newVotes;
	}
};


class MainControl::ContenderArray {
	Contender* data;
	int size;
	int effectiveSize; 

	ContenderArray(int maxParticipants) : size(maxParticipants), effectiveSize(0),
		data(new Contender[maxParticipants]) {}

	~ContenderArray() {
		delete[] data;
	}

	ContenderArray(const ContenderArray& old) : size(old.size), effectiveSize(old.effectiveSize) {
		for (int i = 0; i < size; i++) {
			data[i] = old.data[i];
		}
	}

	ContenderArray& operator=(const ContenderArray& old) {
		if (this == &old) {
			return *this;
		}
		delete[] data;
		data = new Contender[old.size];
		size = old.size;
		effectiveSize = old.effectiveSize;
		for (int i = 0; i < size; i++) {
			data[i] = old.data[i];
		}
	}

	Contender& operator[](int index) {
		return data[index];
	}

	const Contender& operator[](int index) const {
		return data[index];
	}

};