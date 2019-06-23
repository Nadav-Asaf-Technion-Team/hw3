#include <iostream>
#include<algorithm>
#include<vector>
#include "eurovision.h"

using std::cout;
using std::endl;
using std::sort;
using std::vector;

Participant::Participant(string stateName, string songName, int songDuration,
	string singerName) :
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
	return registration;
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
	this->registration = registration;
}

ostream& operator<<(ostream& os, const Participant& participant) {
	return os << '[' << participant.state() << '/' << participant.song()
		<< '/' << participant.timeLength() << '/' << participant.singer() 
		<< ']';
}

Voter::Voter(string state, VoterType type) : 
	type(type), voterState(state), timesVoted(0){
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
	++timesVoted;
	return *this;
}

ostream& operator<<(ostream& os, const Voter& voter) {
	string type = "";
	if (voter.voterType() == Regular)
		type = "Regular";
	else
		type = "Judge";
	return os << '<' << voter.state() << '/' << type << '>';
}


Vote::Vote(Voter& voter, const string state0, const string state1,
	const string state2, const string state3, const string state4,
	const string state5 , const string state6, const string state7,
	const string state8 , const string state9): voter(voter) {
	states[0] = state0; 
	states[1] = state1;
	states[2] = state2;
	states[3] = state3;
	states[4] = state4;
	states[5] = state5;
	states[6] = state6;
	states[7] = state7;
	states[8] = state8;
	states[9] = state9;
}

MainControl::MainControl(int maxTimeLength, int maxParticipants, int maxVotes): 
	phase(Registration), maxTimeLength(maxTimeLength),
	maxParticipants(maxParticipants), maxVotes(maxVotes),
	participantsAmount(0) ,contenders(new Contender[maxParticipants]) {
}

MainControl::~MainControl() {
	delete[] contenders;
}

void MainControl::setPhase(Phase newPhase) {
	if (phase == Registration && newPhase == Voting) return;
	if (phase == Contest && newPhase == Registration) return;
	if (phase == Voting) return;
	phase = newPhase;
}

int MainControl::legalParticipant(Participant participant) {
	if (participant.song() == "" || participant.state() == ""
		|| participant.singer() == "") {
		return 0;
	}
	else if (participant.timeLength() > maxTimeLength)
		return 0;
	else return 1;
}

int MainControl::participate(string state){
	for (int i = 0; i < participantsAmount; i++) {
		if (contenders[i].participant == NULL) return 0;
		if (state == (*(contenders[i].participant)).state()) {
			return 1;
		}
	}
	return 0;
}


// finds the index of a given contender (by state) in the contenders array
// if the contender given isnt in the array' returns -1;
int MainControl::findContender(string state) {
	if (state == "") return -1;
	for (int i = 0; i < participantsAmount; i++) {
		if (contenders[i].getState() == state) return i;
	}
	return -1;
}
MainControl& MainControl::operator+=(Participant& participant) {
	if (phase != Registration) return *this;
	if (participantsAmount == maxParticipants) return *this;
	if (!legalParticipant(participant)) return *this;
	if (participate(participant.state())) return *this;
	contenders[participantsAmount++] = Contender(&participant);
	BubbleSort(contenders, participantsAmount);
	participant.updateRegistered(1);
	return *this;
}
MainControl& MainControl::operator-=(Participant& participant) {
	if (phase != Registration) return *this;
	if (participantsAmount == 0) return *this;
	if (!legalParticipant(participant)) return *this;
	int flag = 0;
	for (int i = 0; i < participantsAmount; i++) {
		if (&participant == contenders[i].participant) flag = 1;
		if (flag == 1) {
			contenders[i] = contenders[i+1];
		}
	}
	if (flag) {
		participantsAmount--;
		participant.updateRegistered(0);
	}

	return *this;
}

MainControl& MainControl::operator+=(Vote vote) {
	if (phase != Voting) return *this;
	bool flag = false;
	if (!participate(vote.voter.state())) return *this;
	if (vote.voter.voterType() == Regular) {
		if (vote.voter.state() == vote.states[0]) return *this;
		if (vote.voter.timesOfVotes() >= maxVotes) return *this;
		int contenderIndex = findContender(vote.states[0]);
		if (contenderIndex == -1) return *this;
		contenders[contenderIndex].addRegularVotes(1);
		flag = true;
	}
	else { //Judge
		if (vote.voter.timesOfVotes() >= 1) return *this;
		for (int i = 0; i < 10; i++) {
			if (vote.states[i] == vote.voter.state()) continue;
			int contenderIndex = findContender(vote.states[i]);
			if (contenderIndex == -1) continue;
			flag = true;
			int points = 0;
			switch (i) {
			case 0: points = 12;
				break;
			case 1: points = 10;
				break;
			case 2: points = 8;
				break;
			case 3: points = 7;
				break;
			case 4: points = 6;
				break;
			case 5: points = 5;
				break;
			case 6: points = 4;
				break;
			case 7: points = 3;
				break;
			case 8: points = 2;
				break;
			case 9: points = 1;
				break;
			}
			contenders[contenderIndex].addJudgeVotes(points);
		}
	}
	if (flag == true) ++vote.voter;
	return *this;
}


void MainControl::Swap(Contender& a, Contender& b) {
	Contender t(a);
	a = b;
	b = t;
}

void MainControl::BubbleSort(Contender* arr, int n) {
	int swapped = 1, i = 1;
	while (swapped) {
		swapped = 0;
		for (i = 1; i < n; i++) {
			if (arr[i - 1].getState() > arr[i].getState()) {
				Swap(arr[i], arr[i - 1]);
				swapped = 1;
			}
		}
	}
}

ostream& operator<<(ostream& os, const MainControl& eurovision) {
	os << '{' << endl;
	if (eurovision.phase == Registration) {
		os << "Registration" << endl;
		for (int i = 0; i < eurovision.participantsAmount; i++) {
			 os << *(eurovision.contenders[i].participant) << endl;
		}
	}
	else if (eurovision.phase == Contest)
		os << "Contest" << endl;
	else{
		os << "Voting" << endl;
		for(int i = 0; i < eurovision.participantsAmount; i++) {
			 os << (*(eurovision.contenders[i].participant)).state() << " : "
				<< "Regular(" << eurovision.contenders[i].getRegularVotes() 
				<< ") Judge(" << eurovision.contenders[i].getJudgeVotes()
				<< ')' << endl;
		}
	}
	os << "}" << endl;
	return os;

}


MainControl::Contender::Contender(Participant* p, int regularVotes,
	int judgeVotes) : 
	participant(p), regularVotes(regularVotes),
		judgeVotes(judgeVotes) {}

MainControl::Contender::Contender() :participant(NULL), regularVotes(0),
	judgeVotes(0) {
}

string MainControl::Contender::getState() const{
		return (*participant).state();
	}
int MainControl::Contender::getRegularVotes() const {
		return regularVotes;
	}
int MainControl::Contender::getJudgeVotes() const {
		return judgeVotes;
	}
void MainControl::Contender::addRegularVotes(int newVotes) {
		regularVotes += newVotes;
	}
void MainControl::Contender::addJudgeVotes(int newVotes) {
		judgeVotes += newVotes;
	}
bool MainControl::Contender::operator==(const Contender& c) const {
	return (participant == c.participant);
}

MainControl::Iterator::Iterator() : eurovision(NULL), index(0) {}

MainControl::Iterator MainControl::begin() const {
	return Iterator(this, 0);
}

MainControl::Iterator MainControl::end() const {
	return Iterator(this, participantsAmount);
}

MainControl::Iterator::Iterator(const MainControl* eurovision, int index) : 
	eurovision(eurovision), index(index) {}

bool MainControl::Iterator::operator<(const MainControl::Iterator& it) const {
	return (index < it.index);
}

const Participant& MainControl::Iterator::operator*() const {
	return *(eurovision->contenders[index].participant);
}

MainControl::Iterator& MainControl::Iterator::operator++() {
	++index;
	return *this;
}

bool MainControl::Iterator::operator==(const MainControl::Iterator& it) const {
	return (index == it.index);
}

string MainControl::operator()(int i, VoterType type) {
	Contender::Max max(type);
	vector<Contender> vector;
	for (int i = 0; i < participantsAmount; i++) {
		vector.push_back(contenders[i]);
	}
	std::vector<Contender>::iterator iter = 
		get<std::vector<Contender>::iterator, Contender, Contender::Max>
		(vector.begin(),vector.end(), max, i);
	if (iter == vector.end()) return "";
	return (*iter).getState();
}

MainControl::Contender::Max::Max(VoterType type) : type(type) {
}

bool MainControl::Contender::Max::operator()(const Contender& c1,
	const Contender& c2) {
	if (type == Regular) {
		if (c1.getRegularVotes() == c2.getRegularVotes()) {
			return (c1.getState() > c2.getState()); // if equal score, compare by state name
		}
		else return (c1.getRegularVotes() > c2.getRegularVotes());
	}
	else if (type == Judge) {
		if (c1.getJudgeVotes() == c2.getJudgeVotes()) {
			return (c1.getState() > c2.getState());
		}
		else return (c1.getJudgeVotes() > c2.getJudgeVotes());
	}
	else {
		int sum1 = c1.getJudgeVotes() + c1.getRegularVotes();
		int sum2 = c2.getJudgeVotes() + c2.getRegularVotes();
		if (sum1 == sum2) {
			return (c1.getState() > c2.getState());
		}
		else return (sum1 > sum2);
	}
}

template<class Iter, class T, class Max>
Iter MainControl::get(Iter begin, Iter end, Max max, int i) {
	if (i <= 0) return end;
	vector<T> newVector;
	for (Iter it = begin; it < end; ++it) {
		newVector.push_back(*it);
	}
	if (newVector.size() < i) return end;
	sort(newVector.begin(), newVector.end(), max);
	for (Iter res = begin; res < end; ++res) {
		if (*res == newVector[i - 1]) return res;
	}
	return end;
}