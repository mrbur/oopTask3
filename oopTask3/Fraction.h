#pragma once

using namespace std;

class Fraction {
	private:
		int numerator;
		unsigned int denominator;
	public:
		Fraction(int numerator, unsigned int denominator) {
			if (denominator == 0) {
				throw "Denominator is 0!";
			}
			this->numerator = numerator;
			this->denominator = denominator;
		}
		int getNumerator() const {
			return numerator;
		}
		int getDenominator() const  {
			return denominator;
		}
		void print() const {
			cout << numerator << "/" << denominator << endl;
		}
};

Fraction operator+ (const Fraction& fr1, const Fraction& fr2) {
	if (fr1.getDenominator() == fr2.getDenominator()) {
		return Fraction(fr1.getNumerator() + fr2.getNumerator(), fr1.getDenominator());
	}
	return Fraction(fr1.getNumerator() * fr2.getDenominator() + fr2.getNumerator() * fr1.getDenominator(), fr1.getDenominator() * fr2.getDenominator());
}

Fraction operator- (const Fraction& fr1) {
	return Fraction(fr1.getNumerator() * -1, fr1.getDenominator());
}

Fraction operator- (const Fraction& fr1, const Fraction& fr2) {
	if (fr1.getDenominator() == fr2.getDenominator()) {
		return Fraction(fr1.getNumerator() - fr2.getNumerator(), fr1.getDenominator());
	}
	return Fraction(fr1.getNumerator() * fr2.getDenominator() - fr2.getNumerator() * fr1.getDenominator(), fr1.getDenominator() * fr2.getDenominator());
}

Fraction operator* (const Fraction& fr1, const Fraction& fr2) {
	return Fraction(fr1.getNumerator() * fr2.getNumerator(), fr1.getDenominator() * fr2.getDenominator());
}

Fraction operator/ (const Fraction& fr1, const Fraction& fr2) {
	int v = 1;
	if (fr2.getNumerator() * fr1.getDenominator() < 0) {
		v = -1;
	}
	return Fraction(v * fr1.getNumerator() * fr2.getDenominator(), abs(fr2.getNumerator() * fr1.getDenominator()));
}

bool operator== (const Fraction& fr1, const Fraction& fr2) {
	Fraction divResult = fr1 / fr2;
	return divResult.getNumerator() == divResult.getDenominator();
}

bool operator!= (const Fraction& fr1, const Fraction& fr2) {
	return !(fr1 == fr2);
}

bool operator< (const Fraction& fr1, const Fraction& fr2) {
	Fraction result = fr1 - fr2;
	return (result.getNumerator() < 0);
}

bool operator<= (const Fraction& fr1, const Fraction& fr2) {
	return fr1 < fr2 || fr1 == fr2;
}

bool operator> (const Fraction& fr1, const Fraction& fr2) {
	Fraction result = fr1 - fr2;
	return (result.getNumerator() > 0);
}

bool operator>= (const Fraction& fr1, const Fraction& fr2) {
	return fr1 > fr2 || fr1 == fr2;
}