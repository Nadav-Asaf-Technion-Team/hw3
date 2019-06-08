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