#include <Common.h>
#include <Vector2.h>
#include <cstdio>

int main()
{
	Vector2 a = Vector2(1.0f);
	Vector2 b = Vector2(1.5f, -2.0f);
	Vector2 c;

	printf("a = <%g,%g>\n", a.x, a.y);
	printf("b = <%g,%g>\n", b.x, b.y);
	printf("c = <%g,%g>\n", c.x, c.y);

	printf("a.Length() = %g\n", a.Length());
	printf("a - b = <%g,%g>\n", (a - b).x, (a - b).y);
	printf("Dot(a,b) = %g\n", Dot(a, b));
	printf("Distance(a, b) = %g\n", Distance(a, b));

	getchar();
	return 0;
}