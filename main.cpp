// title : static을 활용 하기 위한 counter class를 만든 예제
// explanation : static은 클래스의 멤버 변수나 함수에 사용되며, 클래스의 모든 객체들이 공유하는 변수나 함수를 만들 때 사용된다.
// author : SDW
// date : 2024-07-02

// header Start ===================================================================
#include <iostream>
// header End =====================================================================

// class Start ====================================================================
class Counter
{
public:
	static int count; // static 변수는 클래스의 모든 객체들이 공유한다.

	// static 함수는 static 변수만 접근 가능하다.
	Counter()
	{
		count++;
	}

	// static 함수는 static 변수만 접근 가능하다.
	static void showCount()
	{
		std::cout << count << std::endl;
	}
};
// class End ======================================================================

// static Start ===================================================================
int Counter::count = 0; // static 변수는 클래스의 외부에서 초기화 해야 한다.
// static End =====================================================================

// main Start ====================================================================
int main()
{
	Counter c1;
	Counter::showCount();

	Counter c2;
	Counter::showCount();

	Counter c3;
	Counter::showCount();

	return 0;
}
// main End ======================================================================

// 설명 
// 1. static 변수는 클래스의 모든 객체들이 공유하는 변수이다.
// 2. static 함수는 static 변수만 접근 가능하다.
// 3. static 변수는 클래스의 외부에서 초기화 해야 한다.
// 4. static 변수는 클래스의 멤버 변수나 함수에 사용되며, 클래스의 모든 객체들이 공유하는 변수나 함수를 만들 때 사용된다.
// 5. static 변수는 클래스의 객체가 생성되기 전에도 메모리에 할당된다.
// 6. static 변수는 클래스의 객체가 생성되기 전에도 초기화가 가능하다.
// 7. static 변수는 클래스의 객체가 생성되기 전에도 사용이 가능하다.
// 8. static 변수는 클래스의 객체가 생성되기 전에도 소멸이 가능하다.
// 9. static 변수는 클래스의 객체가 생성되기 전에도 메모리에서 해제가 가능하다.
// 10. static 변수는 클래스의 객체가 생성되기 전에도 사용이 가능하다.