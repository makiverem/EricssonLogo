#include <cstdio>

typedef char c;
typedef int s;

s b[39][2] = { { 56, 64 }, { 53, 66 }, { 51, 67 }, { 48, 68 }, { 45, 69 }, {
		42, 70 }, { 39, 70 }, { 37, 71 }, { 34, 71 }, { 31, 71 }, { 28, 71 }, {
		26, 71 }, { 23, 71 }, { 20, 71 }, { 17, 70 }, { 14, 70 }, { 12, 69 }, {
		9, 68 }, { 7, 67 }, { 5, 66 }, { 4, 64 }, { 3, 62 }, { 2, 59 },
		{ 1, 57 }, { 1, 54 }, { 0, 51 }, { 0, 48 }, { 0, 45 }, { 0, 43 }, { 0,
				40 }, { 0, 37 }, { 0, 34 }, { 1, 32 }, { 1, 29 }, { 2, 26 }, {
				3, 23 }, { 4, 20 }, { 5, 18 }, { 7, 15 } };

void a(c m[97][72], s h, s e, s r) {
	for (s i = 0; i < h; ++i)
		m[r][i] = (m[r][i]==0) ? 32 : m[r][i];
	for (s i = h; i < e; ++i)
		m[r][i] = 35;
	m[r][e] = 0;
}
void d(c m[97][72], s r) {

	for (s i = 0; i < 39; ++i)
		a(m, b[i][0], b[i][1], r++);
}
s main() {
	c m[97][72];
	for (s i = 0; i < 97; ++i)
		for (s j = 0; j < 72; ++j)
			m[i][j] = 32;

	d(m, 0);
	d(m, 29);
	d(m, 58);
	for (s i = 0; i < 97; ++i)
		printf("%s\n", m[i]);

}
