#include <iostream>
using namespace std;
//面试题：只在堆或者栈上面创建对象，使用构造函数私有化的方法
class HeapOnly
{
	int m_a;
	HeapOnly() :
		m_a(0)
	{

	}
public:
	static HeapOnly * CreateObject();//如果是普通的成员函数的话，就无法创建第一个对象，因为普通的需要第一个对象来
};                                  //调用，但是第一个无法创建，所以我们选择静态成员函数，是一个类在它在的成员函数

HeapOnly* HeapOnly:: CreateObject()
{
	HeapOnly * oh = new HeapOnly;
	return oh;
}

int main33()
{



	return 0;
}