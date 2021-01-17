#pragma warning(disable:4996)

/* Created by programmerjokesofficial */

#include <iostream>
#include <conio.h>

using namespace std;

bool f() {
	cout << 'f';
	return false;
}

char g() {
	cout << 'g';
	return 'g';
}

char h() {
	cout << 'h';
	return 'h';
}

int main() {
	char result = f() ? g() : h();
	cout << result;
}