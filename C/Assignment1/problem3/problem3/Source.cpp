#include<stdio.h>
//hi
void rev(int val) {
	int k = val;
	int l = val;
	int res = k & 0x00FF;
	res=res<< 8;
	int res1 = l & 0xFF00;
	res1=res1 >> 8;

	printf("%x rev val", res1|res);
	getchar();
}
void rotate(int val) {
	int k = val;
	int l = k & 0x000F;
	l=l << 12;
	//printf("%x l val", l);
	int h = val;
	h = h >> 4;
	int j = h & 0x0FFF;
	int res = l | j;
	printf("%x rotate val", res);
	getchar();
}
int main() {
	int val = 0xCAFE;
	int c = 0;
	int k = 0x0001;
	for (int i = 0; i < 4; i++) {
		int j = val;
		if ((j >> i) & k) {
			c++;
		}
	}
	if (c >= 3) {
		printf("case1 yes");
		getchar();
	}
	else {
		printf("case1 NO\n");
	}
	rev(val);
	rotate(val);
	return 0;
}