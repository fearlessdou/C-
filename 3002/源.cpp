#include<iostream>
#include<vector>
#include <algorithm>
//���������Ϊn��01���������������ҳ����01�����Ӵ�(�Ӵ����Բ�����)��
//�� : 1010, 0101��01����Ĵ��� 1101���ǡ���������԰�ĳһ��������������з�
//	ת����0��1, 1��0�����޸�֮������01�����Ӵ��ĳ����Ƕ��١�
//���ӣ�https://www.nowcoder.com/questionTerminal/3fbd8fe929ea4eb3a254c0ed34ac993a
//		 ��Դ��ţ����

#include<iostream>
#include<vector>
#include <algorithm>
#include<string>

using namespace std;
int main() {
	string s;
	cin >> s;
	int max_len = 1, len = 1,temp=s[0],res=1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i - 1] == s[i]) { len++; max_len = max(max_len, len); }
		//else len = 1;
		if (s[i] != temp) {
			res++; 
			temp = s[i];
		}
	}
	if (max_len == 2)res++;
	else if (max_len > 2)res += 2;
	cout << res << endl;
	return 0;
}


//11100010100101010101010
//19
