#include <cstdio>

typedef int s;
const int Height = 97;
const int Width = 72;

void a(s m[Height][Width], s k, s e, s r) {
	for (s i = k; i < e; ++i)
		m[r][i] = 35;
}
void d(s m[Height][Width], s r) {
	s b[39][2] = { { 56, 64 }, { 53, 66 }, { 51, 67 }, { 48, 68 }, { 45, 69 }, {
			42, 70 }, { 39, 70 }, { 37, 71 }, { 34, 71 }, { 31, 71 },
			{ 28, 71 }, { 26, 71 }, { 23, 71 }, { 20, 71 }, { 17, 70 },
			{ 14, 70 }, { 12, 69 }, { 9, 68 }, { 7, 67 }, { 5, 66 }, { 4, 64 },
			{ 3, 62 }, { 2, 59 }, { 1, 57 }, { 1, 54 }, { 0, 51 }, { 0, 48 }, {
					0, 45 }, { 0, 43 }, { 0, 40 }, { 0, 37 }, { 0, 34 },
			{ 1, 32 }, { 1, 29 }, { 2, 26 }, { 3, 23 }, { 4, 20 }, { 5, 18 }, {
					7, 15 } };
	for (s i = 0; i < 39; ++i)
		a(m, b[i][0], b[i][1], r++);
}

int countHashMarks(s m[Width]) {
	int n = 0;
	for (s i = 0; i < Width; ++i) {
		if (m[i] == 35) {
			n++;
		}
	}
	return n;
}

s main() {
	s m[Height][Width];
	for (s i = 0; i < Height; ++i)
		for (s j = 0; j < Width; ++j)
			m[i][j] = 32;
	d(m, 0);
	d(m, 29);
	d(m, 58);

	for (s i = 0; i < Height; ++i) {
		int sumHash = countHashMarks(m[i]);
		int printedHash = 0;
		int j = 0;

		while (printedHash < sumHash) {
			printf("%c", m[i][j]);
			if (m[i][j] == 35) {
				printedHash++;
			}
			j++;
		}

		printf("\n");
	}

	fclose(pFile);
}
