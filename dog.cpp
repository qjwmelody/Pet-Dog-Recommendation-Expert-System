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
	//用户说明
	cout << endl << "*******宠物狗推荐专家系统*******" << endl << endl;
	cout << "说明：" << endl;
	cout << "0）本系统仅作为参考" << endl;
	cout << "1）本系统暂时包含11种类型宠物狗：" << endl;
	cout << "	Number		 Dog   " << endl;
	cout << "	-------		-------" << endl;
	cout << "	  0		中华田园犬" << endl;
	cout << "	  1		腊肠" << endl;
	cout << "	  2		柯基" << endl;
	cout << "	  3		泰迪" << endl;
	cout << "	  4		比熊" << endl;
	cout << "	  5		金毛" << endl;
	cout << "	  6		哈士奇" << endl;
	cout << "	  7		伯恩山" << endl;
	cout << "	  8		拉布拉多" << endl;
	cout << "	  9		萨摩耶" << endl;
	cout << "	  10	        藏獒" << endl;

	cout << "2）本系统暂时包含10个参数：" << endl;
	cout << "	Number		 Para   " << endl;
	cout << "	-------		-------" << endl;
	cout << "	  0		体型小" << endl;
	cout << "	  1		打理照顾时间短（包括掉毛、体味、口水、美容、运动、依赖性等）" << endl;
	cout << "	  2		友善度（对小孩、生人、动物）高" << endl;
	cout << "	  3		可训练度高" << endl;
	cout << "	  4		忠诚度及护卫能力高" << endl;
	cout << "	  5		初养适应度高" << endl;
	cout << "	  6		犬叫程度低" << endl;
	cout << "	  7		颜值高" << endl;
	cout << "	  8		搞笑程度高（参照二哈）" << endl;
	cout << "	  9		价格低" << endl;

	//用户关心的参数排序
	int rank[10];//存储参数对应序号
	cout << endl << endl << endl << endl << "请按参数关心程度排序：" << endl;
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

	//最终得分计算
	double score[10] = { 0 };
	int max_score = 0;
	int max = 0;
	for (int i = 0; i != 10; i++) {//第i种狗
		for (int j = 0; j != 10; j++) //第j重要程度
			score[i] += value[i][rank[j]] * (10 - j) / 10;
		if (score[i] > max_score) {
			max_score = score[i];
			max = i;
		}
	}


	//输出得分最高的一种狗的信息
	cout << endl << endl << "最推荐您养的狗狗序号是：  " << max << endl;
	cout << "各项参数评分为:  " << endl;
	cout << "	Para			 Score   " << endl;
	cout << "	-------			-------" << endl;
	cout << "	体型小			" << value[max][0] << endl;
	cout << "	打理照顾时间短		" << value[max][1] << endl;
	cout << "	友善度高		" << value[max][2] << endl;
	cout << "	可训练度高		" << value[max][3] << endl;
	cout << "	忠诚度及护卫能力高	" << value[max][4] << endl;
	cout << "	初养适应度高		" << value[max][5] << endl;
	cout << "	犬叫程度低		" << value[max][6] << endl;
	cout << "	颜值高			" << value[max][7] << endl;
	cout << "	搞笑程度高		" << value[max][8] << endl;
	cout << "	价格低			" << value[max][9] << endl;
	cout << endl << endl;

	system("pause");
	return 0;
}
