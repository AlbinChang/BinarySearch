#include <iostream>
#include <stdexcept>
using namespace std;


int  BinarySearch(const int*  array, const int& beginIndex, const int& endIndex, const int& valueToSearch)
{
	if (array == NULL || beginIndex > endIndex)
		throw new exception("非法输入！");
	
	if (beginIndex == endIndex)											//只剩一个元素的时候
	{
		if (array[beginIndex] == valueToSearch)
			return beginIndex;
		else
			return -1;																//表示找不到
	}

	int midIndex = (beginIndex + endIndex) / 2;
	
	if (array[midIndex] == valueToSearch)
		return midIndex;
	if (array[midIndex] > valueToSearch)
		return BinarySearch(array, beginIndex, midIndex - 1, valueToSearch);
	if (array[midIndex] < valueToSearch)
		return BinarySearch(array, midIndex + 1, endIndex, valueToSearch);
	
}
int main()
{
	int myArray[] = { 1, 2, 3, 4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	cout << "20的位置：\t" << BinarySearch(myArray, 0, 19, 20) << endl;
	cout << "15的位置：\t" << BinarySearch(myArray, 0, 19, 15) << endl;
	cout << "10的位置：\t" << BinarySearch(myArray, 0, 19, 10) << endl;
	cout << "5的位置：\t" << BinarySearch(myArray, 0, 19, 5) << endl;
	cout << "1的位置：\t" << BinarySearch(myArray, 0, 19, 1) << endl;

	system("pause");
	

}