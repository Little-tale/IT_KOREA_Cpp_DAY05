#include <stdio.h>
#include <iostream>
#include <functional>
#include <chrono> // nano_second -> 1/100000000초 
using namespace std;

//class test {
//public:
//	int testDec;
//	char testArr[40];
//};
//
//// 내가 클래스를 만들때 값을 넣을때가 생긴다. (초기값) -> 함수를 이용해서 데이터를 처리했었다.
//// 근데 무조건 불르다 보니 불편해진거다.
//using namespace std;
//class A {
//public:
//	int x, y;
//	void Set(int x, int y) { this->x = x; this->y = y; } // 함수를 지워버려도 문제가 발생이 안된다 아래에서.
//	//그렇다면 함수를 무조건 부를 거라면, 자동으로 부르면 좋지 않을까.
//	// -> 그래서 자동으로 호출하는 함수가 나왔다.
//		// 생성자.
//};

// 생성자 -> 변수를 생성할때 '무 조 건 ' 변수를 자동으로 호출하는 함수.
// 아무런 생성자도 안만들면 -> 디폴트 생성자.



//class B {
//public:
//	int x, y;
//	// B(){} 디폴트 생성자.
//	B() {} // 여러개 만들수 있음.
//	B(int x, int y) { // 특징 : 리턴타입이 없다. 생성하자마자 자동으로 호출되는 함수이기 때문에 .
//		cout << "생성자 호출" << endl;
//		this->x = x; this->y = y;
//	}
//};

//class Stack {
//public:
//	class Node {
//	public:
//		Node* next;
//		Node() {next = nullptr;}
//
//	};
//	Node* root;
//	Stack() { root = nullptr; }
//};
//



//class A {
//public:
//	A() { cout << "생성자" << endl; }
//};


// 생성자의 특징 +
	// 1. 생성자는 아무것도 안만들어도 최소 3개의 생성자가 생성된다.
//class A {
//public:
//	// A(){} //아무런 동작 없는 생성자
//	// A(const A&) {} (복사 생성자)
//	// A(const A&&) {} (복사 생성자)
//};
	
	// 2. 함수의 호출이 자동으로 '무조건' 호출이나 자료형이 일치해야만 가능하다.
	// 3. 함수의 재 호출이 불가능하다.

	


//void main() {
//
//	/*test t;
//	strcpy(t.testArr,"test");
//	t.testDec = 1;*/
//
//
//	/*A a, b, c;
//	a.Set(2, 3);
//	b.Set(3, 4);
//	c.Set(5, 6);*/
//
//	/*B a(1, 2), b(3, 4), c(4, 5);*/
//
//	// new는 자료형의 직관성이 중요
//	A* p = new A[4]; // new를 쓴다면 공간할당은 똑같겠지만 생성자 호출도 해준다. 
//	A* t = (A*)malloc(sizeof(A)); // 공간만 할당하고 끝나니  그냥 전체 크기 공간에 할당만 하니까 생성자를 호출하지 않는다.
//
//	delete[] p;
//	free(t);
//
//}


// 연습
// 책 이라는 클래스를 만들고 책정보(책이름, 작가명)을 저장한후 출력해보시오


//class Book {
//public:
//	const char* bookName;
//	const char* writer;
//
//	public:
//		Book(const char* bookName, const char* name = "저자 불확인")
//		{
//			this->bookName = bookName, this->writer = name;
//		}
//		void Show() {
//			cout <<"책이름 : "<< bookName << " || 저자이름 : " << writer << endl;
//		}
//	};
//
//void main() {
//	Book book("아리가또", "김재형");
//
//	book.Show();
//
//}


// 관리 클래스 
	// 이니셜라이저 (Initializer)라는것이 생겼다
	// -> ' : '해당하는 클래스가 생성되기 전에 변수를 만드는 과정
//class Objerve{// 관찰한다는 뜻
//public:
//	int& data;
//	 // 레퍼런스는 변수를 만든이후에는 변경이 불가능하다.
//	Objerve(int a)
//		:data(a)
//	{
//		data = a;
//	}
//};

// 소멸자 -> 클래스 변수가 소멸될때 자동으로 호출되는 함수
// 소멸자 -> 생성자와 아주 많은 부분이 동일하다.
// 즉 틀린부분이 무엇이냐

// 바로 함수 이름, 인자값 여부 
	// 함수이름 : ~클래스 이름,
	// 인자값여부 는 없다. 인자값이 없다는 의미
//class Stack {
//public:
//	class Node {
//	public:
//		Node* next;
//		Node() : next(nullptr) {}
//		~Node() {}
//	};
//	Node* root;
//	Stack() : root(nullptr) {}
//	~Stack() {}
//};


// 자료구조를 만들어 보며 유용한지 확인해 보자

// Array
//class Array {
//public:
//	int* datas;
//	int size;
//	
//	int& Get(int index) {
//		return datas[index % size];
//	}
//
//	Array(int size = 2) :size(size),datas(new int[size]) {}
//	~Array() {
//		delete[] datas;
//	}
//
//};
//void main() {
//	Array a(30);
//	a.Get(0) = 5;
//
//}

//연습 !!! 생성자와 소멸자를 이용하여 리스트를 구성하시오

// List
//class List {
//public:
//	 // 시작주소
//	
//	class Node {
//	public:
//		Node* next; // 다음주소
//		Node* prev; // 이전주소
//		int data; // 데이터
//		Node(const int& data) : data(data), next(nullptr), prev(nullptr) {}
//		~Node() {
//			if (next) delete next;
//		}
//	};
//public:
//	void Action(function<void(int&)>act) {
//		Node* now = root;
//		while (now != 0) {
//			act(now->data);
//			now = now->next;
//		}
//	}
//public:
//	void Insert(const int& data) {
//		Node* node = new Node(data);
//		if (end) end->next = node;
//		else root = node;
//		node->prev = end;
//		end = node;
//	}
//public:
//	Node* end;
//	Node* root;
//	List() : root(nullptr), end(nullptr) {}
//	~List() {if(root) delete[] root;}
//
//
//
////	Array(int size = 2) :size(size),datas(new int[size]) {}
////	~Array() {
////		delete[] datas;
////	}
//
//};
//
//
//void main() {
//	List a;
//	a.Insert(3);
//	a.Insert(4);
//	a.Insert(5);
//	a.Insert(1);
//
//	a.Action([](int& data)->void {
//		cout << data << " > ";
//		}
//	);
//
//}

//class A {};
//
//
//void main() {
//	
//	A* p;
//	
//	
//	chrono::system_clock::time_point before, after;
//	
//	p = (A*)malloc(sizeof(A) * 10000000);
//	before = chrono::system_clock::now();
//	free(p);	
//	after = chrono::system_clock::now();
//	chrono::nanoseconds timer;
//
//	p = new A[10000000];
//	delete[] p;
//	after = chrono::system_clock::now();
//
//
//
//}

class FileWriter {
public:
	FILE* fp;
	FileWriter& Write(const int& data) {
		if(fp) fprintf(fp, "%d", data);
		return *this;
	}
	FileWriter& Write(const float& data) {
		if (fp) fprintf(fp, "%f", data);
		return *this;
	}
	FileWriter& Write(const long long& data) {
		if (fp) fprintf(fp, "%lld", data);
		return *this;
	}
	FileWriter& Write(const char* data) {
		if (fp) fprintf(fp, "%s", data);
		return *this;
	}
	FileWriter& Write(const double& data) {
		if (fp)fprintf(fp, "%lf", data);
		return *this;
	}


	FileWriter(const char* path) :fp(nullptr) {
		fopen_s(&fp, path, "wt");
	}
	~FileWriter() {
		if (fp)fclose(fp);
	}

};

// 지금 만든 파일 출력 클래스를 이용하여 구구단을 출력하세요
// 입력 이벤트를 작성하세요


void main() {
	int a = 0;
	int b = 0;

	FileWriter A("./main.txt");
	auto lambda = [&A](int data)->void{
		cout << "출력에 성.공." << endl;
		A.Write(data);
	};
	scanf_s(" %d", &a);
	scanf_s(" %d", &b);


	for (int i = 2; i <= 9; ++i) {
		for (int j = 2; j <= 9; ++j) {
			A.Write(i).Write(" * ").Write(j).Write(" = ").Write(j * i).Write("\n\n");
			lambda(i * j);
		}
	}
}
	