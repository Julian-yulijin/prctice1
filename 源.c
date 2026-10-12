#include<stdio.h>
int main(void) {
	printf("输入密码\n");
	int start;
	scanf_s("%d", &start);
	if (start == 20080123) { printf("开始我们的MBTI测试\n"); }
	else { printf("Incorrect password\n"); return 0; }
	printf("经过忙碌的一周，你倾向于怎么恢复经历？\n  A.和朋友一同出去进行社交;和人群在一起使我恢复能量\n  B.自己安静地独处;太多社交使我疯狂\n");
	char e;
	scanf_s(" %c", &e);
	switch (e) {
	case 'A': e = 'E';
		break;
	case 'B': e = 'I';
		break;
	default:  e = 'X';
		printf("无效回答\n"); //输入验证环节
	}
	printf("当面临新的问题时，你最开始会怎么上手\n A.看说明、步骤、实际案例，关注细节和当下\n B.先想整体逻辑、未来可能、隐藏联系\n");
	char n;
	scanf_s(" %c", &n);
	switch (n) {
	case 'A': n = 'S';
		break;
	case 'B': n = 'N';
		break;
	default:  n = 'X';
		printf("无效回答\n");
	}
	printf("朋友做决定前来问你意见，你更容易?\n A.直接分析利弊，讲逻辑和效率，哪怕话不太好听\n B.先考虑对方感受，尽量温和，维护关系和谐\n");
	char s;
	scanf_s(" %c", &s);
	switch (s) {
	case 'A': s = 'T';
		break;
	case 'B': s = 'F';
		break;
	default:  s = 'X';
		printf("无效回答\n");
	}
	printf("计划一次旅行或项目时，你更倾向？\n A.提前定好时间表、清单和安排，喜欢确定感\n B.只定大方向，到时随机调整，保留选择\n");
	char t;
	scanf_s(" %c", &t);
	switch (t) {
	case 'A': t = 'J';
		break;
	case 'B': t = 'P';
		break;
	default:  t = 'X';
		printf("无效回答\n");
	}
	printf("所以你的MBTI人格是%c%c%c%c\n", e, n, s, t);
	return 0;
}
