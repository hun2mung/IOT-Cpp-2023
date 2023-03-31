#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
	int len;
	char* str;
public:
	String();					// 디폴트생성자
	String(const char* s);		// 매개변수를 지니는 생성자
	String(const String& s);	// 복사 생성자
	~String();					// 소멸자
	String& operator=(const String& s);
	String& operator+=(const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);
};

String::String() {
	len = 0;
	str = NULL;
}

String::String(const char* s) {
	len = strlen(s) + 1;
	str = new char[len];
	strcpy(str, s);
}

String::String(const String& s) {
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
}

String::~String() {
	if (str != NULL)
		delete[] str;
}

String& String::operator=(const String& s) {
	if (str != NULL)
		delete[] str;
	len = s.len;
	str = new char[len];
	strcpy(str, s.str);
	return *this;
}

String& String::operator+=(const String& s) {
	len += (s.len - 1);	// NULL 자리 하나 빼줌.
	char* tempstr = new char[len];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	if (str != NULL)
		delete[] str;

	str = tempstr;
	return *this;
}

bool String::operator== (const String& s) {
	return strcmp(str, s.str) ? false : true;		// 삼항연산자.
}

String String::operator+ (const String& s) {
	char* tempstr = new char[len + s.len - 1];
	strcpy(tempstr, str);
	strcat(tempstr, s.str);

	String temp(tempstr);		// String temp=tempstr;
	delete[] tempstr;
	return temp;
}

ostream& operator<< (ostream& os, const String& s) {
	os << s.str;
	return os;
}

istream& operator>> (istream& is, String& s) {
	char str[100];
	is >> str;
	s = String(str);
	return is;
}

int main(void)
{
	String str1 = "I like ";
	String str2 = "string class";
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	String str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;
	return 0;
}