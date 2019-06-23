#include "seat.h"

const char* NoPrice::what() const noexcept {
	return "Not For Sale !";
}

Seat::Seat(int line, int chair, int base) :
	line(line), chair(chair), base(base), totalPrice(base) {
}

int Seat::price() {
	return totalPrice;
}

GreenRoomSeat::GreenRoomSeat(int line, int chair) :
	Seat(line, chair, 0) {
}

int GreenRoomSeat::price() {
	throw (NoPrice());
}

string GreenRoomSeat::location() {
	string str = "Green Room-> line: ";
	str += std::to_string(line) + ", chair: ";
	str += std::to_string(chair);
	return str;
}

MainHallSeat::MainHallSeat(int line, int chair, int base) : 
	Seat(line, chair, base)	{
	totalPrice += 100;
}

SpecialSeat::SpecialSeat(int line, int chair, int base) :
	MainHallSeat(line, chair, base) {
	totalPrice += 300;
}

GoldenCircleSeat::GoldenCircleSeat(int line, int chair, int base) :
	SpecialSeat(line, chair, base) {
	totalPrice += 1000;
}

string GoldenCircleSeat::location() {
	string str = "Golden Circle-> line: ";
	str += std::to_string(line) + ", chair: ";
	str += std::to_string(chair);
	return str;
}

DisablePodiumSeat::DisablePodiumSeat(int line, int chair) :
	SpecialSeat(line, chair, 0) {
	totalPrice = 200;
}

DisablePodiumSeat::DisablePodiumSeat(int line, int chair, int base) :
	SpecialSeat(line, chair, base) {
	totalPrice = 200;
}

string DisablePodiumSeat::location() {
	string str = "Disable Podium-> line: ";
	str += std::to_string(line) + ", chair: ";
	str += std::to_string(chair);
	return str;
}

RegularSeat::RegularSeat(char area, int line, int chair, int base) :
	MainHallSeat(line, chair, base), area(area) {
}

FrontRegularSeat::FrontRegularSeat(char area, int line, int chair, int base) :
RegularSeat(area, line, chair, base) {
	totalPrice += 500;
}

string FrontRegularSeat::location() {
	string str = "Front-> area: ";
	(str += area) += ", line: ";
	str += std::to_string(line) + ", chair: ";
	str += std::to_string(chair);
	return str;
}

MiddleRegularSeat::MiddleRegularSeat(char area, int line, int chair, int base): 
	RegularSeat(area, line, chair, base) {
	totalPrice += 250;
}

string MiddleRegularSeat::location() {
	string str = "Middle-> area: ";
	(str += area) += ", line: ";
	str += std::to_string(line) + ", chair: ";
	str += std::to_string(chair);
	return str;
}

RearRegularSeat::RearRegularSeat(char area, int line, int chair, int base) :
	RegularSeat(area, line, chair, base) {
}

string RearRegularSeat::location() {
	string str = "Rear-> area: ";
	(str += area) += ", line: ";
	str += std::to_string(line) + ", chair: ";
	str += std::to_string(chair);
	return str;
}

