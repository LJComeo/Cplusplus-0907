#include <iostream>
using namespace std;

template <class T>
class Test
{
	T m_a;
public:
	Test(T s):
		m_a(s)
	{

	}
	void setData(T s);
	void showData()
	{
		cout << m_a << endl;
	}
};

template <class T>
void Test<T>::setData(T s)//必须带尖括号，要不然没有类型
{
	m_a = s;
}

int main455()
{
	Test<int> a(5);//必须带尖括号，要不然没有类型
	a.setData(6);
	a.showData();
	return 0;
}