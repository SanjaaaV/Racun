#pragma once
#include <exception>
using namespace std;

class GIndeks :public exception {
public:
	const char* what()const override {
		return "Pogresan indeks!";
	}
};
class GNemaMesta :public exception {
public:
	const char* what()const override {
		return "Nema mesta u nizu!";
	}
};