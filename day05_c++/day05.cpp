#include <stdio.h>
#include <iostream>
#include <functional>
#include <chrono> // nano_second -> 1/100000000�� 
using namespace std;

//class test {
//public:
//	int testDec;
//	char testArr[40];
//};
//
//// ���� Ŭ������ ���鶧 ���� �������� �����. (�ʱⰪ) -> �Լ��� �̿��ؼ� �����͸� ó���߾���.
//// �ٵ� ������ �Ҹ��� ���� ���������Ŵ�.
//using namespace std;
//class A {
//public:
//	int x, y;
//	void Set(int x, int y) { this->x = x; this->y = y; } // �Լ��� ���������� ������ �߻��� �ȵȴ� �Ʒ�����.
//	//�׷��ٸ� �Լ��� ������ �θ� �Ŷ��, �ڵ����� �θ��� ���� ������.
//	// -> �׷��� �ڵ����� ȣ���ϴ� �Լ��� ���Դ�.
//		// ������.
//};

// ������ -> ������ �����Ҷ� '�� �� �� ' ������ �ڵ����� ȣ���ϴ� �Լ�.
// �ƹ��� �����ڵ� �ȸ���� -> ����Ʈ ������.



//class B {
//public:
//	int x, y;
//	// B(){} ����Ʈ ������.
//	B() {} // ������ ����� ����.
//	B(int x, int y) { // Ư¡ : ����Ÿ���� ����. �������ڸ��� �ڵ����� ȣ��Ǵ� �Լ��̱� ������ .
//		cout << "������ ȣ��" << endl;
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
//	A() { cout << "������" << endl; }
//};


// �������� Ư¡ +
	// 1. �����ڴ� �ƹ��͵� �ȸ��� �ּ� 3���� �����ڰ� �����ȴ�.
//class A {
//public:
//	// A(){} //�ƹ��� ���� ���� ������
//	// A(const A&) {} (���� ������)
//	// A(const A&&) {} (���� ������)
//};
	
	// 2. �Լ��� ȣ���� �ڵ����� '������' ȣ���̳� �ڷ����� ��ġ�ؾ߸� �����ϴ�.
	// 3. �Լ��� �� ȣ���� �Ұ����ϴ�.

	


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
//	// new�� �ڷ����� �������� �߿�
//	A* p = new A[4]; // new�� ���ٸ� �����Ҵ��� �Ȱ������� ������ ȣ�⵵ ���ش�. 
//	A* t = (A*)malloc(sizeof(A)); // ������ �Ҵ��ϰ� ������  �׳� ��ü ũ�� ������ �Ҵ縸 �ϴϱ� �����ڸ� ȣ������ �ʴ´�.
//
//	delete[] p;
//	free(t);
//
//}


// ����
// å �̶�� Ŭ������ ����� å����(å�̸�, �۰���)�� �������� ����غ��ÿ�


//class Book {
//public:
//	const char* bookName;
//	const char* writer;
//
//	public:
//		Book(const char* bookName, const char* name = "���� ��Ȯ��")
//		{
//			this->bookName = bookName, this->writer = name;
//		}
//		void Show() {
//			cout <<"å�̸� : "<< bookName << " || �����̸� : " << writer << endl;
//		}
//	};
//
//void main() {
//	Book book("�Ƹ�����", "������");
//
//	book.Show();
//
//}


// ���� Ŭ���� 
	// �̴ϼȶ����� (Initializer)��°��� �����
	// -> ' : '�ش��ϴ� Ŭ������ �����Ǳ� ���� ������ ����� ����
//class Objerve{// �����Ѵٴ� ��
//public:
//	int& data;
//	 // ���۷����� ������ �������Ŀ��� ������ �Ұ����ϴ�.
//	Objerve(int a)
//		:data(a)
//	{
//		data = a;
//	}
//};

// �Ҹ��� -> Ŭ���� ������ �Ҹ�ɶ� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ��� -> �����ڿ� ���� ���� �κ��� �����ϴ�.
// �� Ʋ���κ��� �����̳�

// �ٷ� �Լ� �̸�, ���ڰ� ���� 
	// �Լ��̸� : ~Ŭ���� �̸�,
	// ���ڰ����� �� ����. ���ڰ��� ���ٴ� �ǹ�
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


// �ڷᱸ���� ����� ���� �������� Ȯ���� ����

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

//���� !!! �����ڿ� �Ҹ��ڸ� �̿��Ͽ� ����Ʈ�� �����Ͻÿ�

// List
//class List {
//public:
//	 // �����ּ�
//	
//	class Node {
//	public:
//		Node* next; // �����ּ�
//		Node* prev; // �����ּ�
//		int data; // ������
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

// ���� ���� ���� ��� Ŭ������ �̿��Ͽ� �������� ����ϼ���
// �Է� �̺�Ʈ�� �ۼ��ϼ���


void main() {
	int a = 0;
	int b = 0;

	FileWriter A("./main.txt");
	auto lambda = [&A](int data)->void{
		cout << "��¿� ��.��." << endl;
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
	