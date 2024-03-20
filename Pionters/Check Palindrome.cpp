#include <iostream>

using namespace std;

int palindrome(const char* s) {
	int length = strlen(s);
	const char* start = s;
	const char* end = s + length - 1;
	while (start < end) {
		if (*start != *end) {
			return 0; 
		}
		start++;
		end--;
	}

	return 1; 
}

int main() {
	const char* str1 = "neveroddoreven";

	if (palindrome(str1)) {
		cout<<str1<<" is a palindrome.\n";
	}
	else {
		cout<<str1<<" is not a palindrome.\n";
	}

	return 0;
}
