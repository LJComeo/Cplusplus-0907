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
void Test<T>::setData(T s)//����������ţ�Ҫ��Ȼû������
{
	m_a = s;
}

int main455()
{
	Test<int> a(5);//����������ţ�Ҫ��Ȼû������
	a.setData(6);
	a.showData();
	return 0;
}