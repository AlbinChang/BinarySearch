#include <iostream>
#include <stdexcept>
using namespace std;


int  BinarySearch(const int*  array, const int& beginIndex, const int& endIndex, const int& valueToSearch)
{
	if (array == NULL || beginIndex > endIndex)
		throw new exception("�Ƿ����룡");
	
	if (beginIndex == endIndex)											//ֻʣһ��Ԫ�ص�ʱ��
	{
		if (array[beginIndex] == valueToSearch)
			return beginIndex;
		else
			return -1;																//��ʾ�Ҳ���
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

	cout << "20��λ�ã�\t" << BinarySearch(myArray, 0, 19, 20) << endl;
	cout << "15��λ�ã�\t" << BinarySearch(myArray, 0, 19, 15) << endl;
	cout << "10��λ�ã�\t" << BinarySearch(myArray, 0, 19, 10) << endl;
	cout << "5��λ�ã�\t" << BinarySearch(myArray, 0, 19, 5) << endl;
	cout << "1��λ�ã�\t" << BinarySearch(myArray, 0, 19, 1) << endl;

	system("pause");
	

}