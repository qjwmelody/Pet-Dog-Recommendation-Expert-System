#include<iostream>
using namespace std;

double value[11][10] = {
	4.98,  5,     6.24,  7,  8,  10,   4,   3,  7,  8.86,
	8.16,  4.23,  3.89,  4,  6,  3,    2,   3,  8,  5,
	7.75,  4.68,  5.93,  8,  3,  3,    5,   7,  9,  5,
	7.51,  6.54,  8.54,  5,  1,  7,    8,   10, 7,  5,
	7.89,  6.65,  8.19,  8,  1,  3,    6,   10, 7,  5,
	1.51,  4.68,  8.64,  10, 6,  4,    8,   10, 5,  5,
	1.51,  6.65,  5.97,  6,  6,  1,    4,   6,  10, 5,
	1.42,  3.78,  8.54,  8,  8,  10,   6,   10, 5,  1.17,
	1.45,  4.29,  8.54,  10, 6,  10,   8,   7,  5,  5,
	1.85,  4.16,  8.37,  4,  5,  1,    4,   8,  10, 5,
	1.41,  3.71,  6.24,  8,  10, 5,    4,   6,  3,  1.13
};

int main() {
	//�û�˵��
	cout << endl << "*******���ﹷ�Ƽ�ר��ϵͳ*******" << endl << endl;
	cout << "˵����" << endl;
	cout << "0����ϵͳ����Ϊ�ο�" << endl;
	cout << "1����ϵͳ��ʱ����11�����ͳ��ﹷ��" << endl;
	cout << "	Number		 Dog   " << endl;
	cout << "	-------		-------" << endl;
	cout << "	  0		�л���԰Ȯ" << endl;
	cout << "	  1		����" << endl;
	cout << "	  2		�»�" << endl;
	cout << "	  3		̩��" << endl;
	cout << "	  4		����" << endl;
	cout << "	  5		��ë" << endl;
	cout << "	  6		��ʿ��" << endl;
	cout << "	  7		����ɽ" << endl;
	cout << "	  8		��������" << endl;
	cout << "	  9		��ĦҮ" << endl;
	cout << "	  10	        ����" << endl;

	cout << "2����ϵͳ��ʱ����10��������" << endl;
	cout << "	Number		 Para   " << endl;
	cout << "	-------		-------" << endl;
	cout << "	  0		����С" << endl;
	cout << "	  1		�����չ�ʱ��̣�������ë����ζ����ˮ�����ݡ��˶��������Եȣ�" << endl;
	cout << "	  2		���ƶȣ���С�������ˡ������" << endl;
	cout << "	  3		��ѵ���ȸ�" << endl;
	cout << "	  4		�ҳ϶ȼ�����������" << endl;
	cout << "	  5		������Ӧ�ȸ�" << endl;
	cout << "	  6		Ȯ�г̶ȵ�" << endl;
	cout << "	  7		��ֵ��" << endl;
	cout << "	  8		��Ц�̶ȸߣ����ն�����" << endl;
	cout << "	  9		�۸��" << endl;

	//�û����ĵĲ�������
	int rank[10];//�洢������Ӧ���
	cout << endl << endl << endl << endl << "�밴�������ĳ̶�����" << endl;
	cout << "1.  ";
	cin >> rank[0];
	cout << "2.  ";
	cin >> rank[1];
	cout << "3.  ";
	cin >> rank[2];
	cout << "4.  ";
	cin >> rank[3];
	cout << "5.  ";
	cin >> rank[4];
	cout << "6.  ";
	cin >> rank[5];
	cout << "7.  ";
	cin >> rank[6];
	cout << "8.  ";
	cin >> rank[7];
	cout << "9.  ";
	cin >> rank[8];
	cout << "10. ";
	cin >> rank[9];

	//���յ÷ּ���
	double score[10] = { 0 };
	int max_score = 0;
	int max = 0;
	for (int i = 0; i != 10; i++) {//��i�ֹ�
		for (int j = 0; j != 10; j++) //��j��Ҫ�̶�
			score[i] += value[i][rank[j]] * (10 - j) / 10;
		if (score[i] > max_score) {
			max_score = score[i];
			max = i;
		}
	}


	//����÷���ߵ�һ�ֹ�����Ϣ
	cout << endl << endl << "���Ƽ������Ĺ�������ǣ�  " << max << endl;
	cout << "�����������Ϊ:  " << endl;
	cout << "	Para			 Score   " << endl;
	cout << "	-------			-------" << endl;
	cout << "	����С			" << value[max][0] << endl;
	cout << "	�����չ�ʱ���		" << value[max][1] << endl;
	cout << "	���ƶȸ�		" << value[max][2] << endl;
	cout << "	��ѵ���ȸ�		" << value[max][3] << endl;
	cout << "	�ҳ϶ȼ�����������	" << value[max][4] << endl;
	cout << "	������Ӧ�ȸ�		" << value[max][5] << endl;
	cout << "	Ȯ�г̶ȵ�		" << value[max][6] << endl;
	cout << "	��ֵ��			" << value[max][7] << endl;
	cout << "	��Ц�̶ȸ�		" << value[max][8] << endl;
	cout << "	�۸��			" << value[max][9] << endl;
	cout << endl << endl;

	system("pause");
	return 0;
}
