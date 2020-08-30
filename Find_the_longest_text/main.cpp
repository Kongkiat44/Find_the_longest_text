#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int l, m, n;
	char t1[200], t2[200], t3[200];
	scanf("%s %s %s", &t1, &t2, &t3);
	l = strlen(t1);
	m = strlen(t2);
	n = strlen(t3);
	printf("\n");
	if (l != m && l != n && m != n) {
		if (l > m && l > n) {
			//l=top
			if (m > n) printf("%s\n%s\n%s\n", t1, t2, t3);
			else printf("%s\n%s\n%s\n", t1, t3, t2);
		}
		else if (m > l && m > n) {
			//m=top
			if (l > n) printf("%s\n%s\n%s\n", t2, t1, t3);
			else printf("%s\n%s\n%s\n", t2, t3, t1);
		}
		else if (n > l && n > m) {
			//n=top
			if (l > m) printf("%s\n%s\n%s\n", t3, t1, t2);
			else printf("%s\n%s\n%s\n", t3, t2, t1);
		}
	}
	else printf("Please enter texts in different lengths\n");
	return 0;
}


