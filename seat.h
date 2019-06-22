#include <iostream>
#include <string>
using std::string;
using std::exception;


// ---------------------------------------------
class NoPrice : public exception
{
public:
	const char* what() const override;
};

// ---------------------------------------------
class Seat //abstract
{
protected:
	int line;
	int chair;
	int base;
	int totalPrice;//for Seat - will be base price.
public:
	Seat(int line, int chair, int base);
	virtual ~Seat() {};
	virtual int price();
	virtual string location() = 0;
};

// ---------------------------------------------
class GreenRoomSeat : public Seat
{
public:
	GreenRoomSeat(int line, int chair);
	~GreenRoomSeat() {};
	int price() override;//throws exception
	string location() override;
};

// ---------------------------------------------
class MainHallSeat : public Seat //abstract
{
protected:
	MainHallSeat(int line, int chair, int base); //+100 to base
	virtual ~MainHallSeat() {};
	virtual string location() = 0;
};

// ---------------------------------------------
class SpecialSeat : public MainHallSeat //full abstract?
{
protected:
	SpecialSeat(int line, int chair, int base); 
	virtual ~SpecialSeat() {};
	virtual string location() = 0;
};

// ---------------------------------------------
class GoldenCircleSeat : public SpecialSeat
{
public:
	GoldenCircleSeat(int line, int chair, int base); // +1000 to total
	~GoldenCircleSeat() {};
	string location() override;
};

// ---------------------------------------------
class DisablePodiumSeat : public SpecialSeat
{
public:
	DisablePodiumSeat(int line, int chair); // total = 200
	DisablePodiumSeat(int line, int chair, int base);
	~DisablePodiumSeat() {};
	string location() override;
};

// ---------------------------------------------
class RegularSeat : public MainHallSeat //abstract
{
protected:
	char area;
public:
	RegularSeat(char area, int line, int chair, int base);
	~RegularSeat() {};
	virtual string location() = 0; //to implement
};

// ---------------------------------------------
class FrontRegularSeat : public RegularSeat
{
public: 
	FrontRegularSeat(char area, int line, int chair, int base); //+500 to total
	~FrontRegularSeat() {};
	string location() override;
};

// ---------------------------------------------
class MiddleRegularSeat : public  RegularSeat
{
public:
	MiddleRegularSeat(char area, int line, int chair, int base); //+250 to total
	~MiddleRegularSeat() {};
	string location() override;

};

// ---------------------------------------------
class RearRegularSeat : public RegularSeat
{
public:
	RearRegularSeat(char area, int line, int chair, int base); //+0 to total
	~RearRegularSeat() {};
	string location() override;
};

// ---------------------------------------------
