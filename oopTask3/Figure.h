#pragma once
#include <math.h>

class Figure {
	public:
		virtual float area() const;
};

#define PI 3.14159265

class Parallelogram : public Figure {
	private:
		float side, baseSide, angle;
	public:
		Parallelogram(float side, float baseSide, float angle) : side(side), baseSide(baseSide), angle(angle) {
		}
		float area() const override {
			return side * baseSide * sin(angle);
		}
};

class Circle : Figure {
	private:
		float radius;
	public:
		Circle(float radius) : radius(radius) {
		}
		float area() const override {
			return PI * radius * radius;
		}
};

class Rectangle : Parallelogram {
	private:
		float side, baseSide;
	public:
		Rectangle(float side, float baseSide) : Parallelogram(side, baseSide, PI / 2), side(side), baseSide(baseSide) {
		}
		float area() const override {
			return side * baseSide;
		}
};

class Square : Rectangle {
private:
	float side;
public:
	Square(float side) : Rectangle(side, side), side(side) {
	}
	float area() const override {
		return side * side;
	}
};

class Rhombus : public Parallelogram {
	public:
		Rhombus(float side, float angle) : Parallelogram(side, side, angle) {
		}
		float area() const override {
			return Parallelogram::area();
		}
};