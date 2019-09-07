#include <iostream>
using namespace std;

template <class T> 
void swapArgs(T &a,T &b)
{
	T tmp = a;
	a = b;
	b = tmp;

}
template <typename T>
int findArgs(T * src, int n, T f)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (src[i] == f)
		{
			return i;
		}
	}
	return -1;
}

template <typename T>
T add(T a, T b)
{
	return a + b;
}
int main23333()
{
	/*int ia = 5, ib = 6;
	double da = 3.14, db = 1.618;
	swapArgs(ia, ib);
	cout << ia << ' ' << ib << endl;
	swapArgs(da, db);
	cout << da << ' ' << db << endl;*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7 };

	findArgs(arr, 7, 5);

	cout << findArgs(arr, 7, 5);
*/
	cout << add<int>(2, 5) << endl;

	return 0;
}