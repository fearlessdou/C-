#include<iostream>

using namespace std;

bool duplicate(int number[], int lenth, int *duplicate_a)
{
	if (number == nullptr || lenth <= 0)
		return false;
	for (int i = 0; i < lenth; i++)
	{
		while (number[i]!= i)
		{
			if (number[i] == number[number[i]])
			{
				*duplicate_a = number[i];
				return true;
			}
			int temp = number[i];
			number[i] = number[temp];
			number[temp] = temp;///ע��Ҫ��ʹ��temp��Ϊ�±꣬��������޸ĺ��ֵ
		}
	}

}

template <class T>

int getArrayLen(T& array)

{
	return (sizeof(array) / sizeof(array[0]));
}


int main()
{
	int test_arry[] = { 1,2,3,5,7,89,4,6,5,7,0 };
	int a=-1;
	int len = getArrayLen(test_arry);
	duplicate(test_arry,sizeof(test_arry),&a);
	printf("�ظ�������:%d", a);

	system("pause");
	return 0;
}
