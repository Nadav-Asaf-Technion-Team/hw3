#include "seat.h"

const char* NoPrice::what() const {
	return "Not For Sale !";
}

Seat::Seat(int line, int chair, int base) :
	line(line), chair(chair), base(base), totalPrice(base) {
}

int Seat::price() {
	return totalPrice;
}

string Seat::location() {

}

GreenRoomSeat::GreenRoomSeat(int line, int chair) :
	Seat(line, chair, 0) {
}

int GreenRoomSeat::price() {
	throw (NoPrice());
}

