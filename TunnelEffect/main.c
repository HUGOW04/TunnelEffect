#include <windows.h>
#include <time.h>

int main()
{
	FreeConsole();
	int a, b;
	while (1) {
		a = GetSystemMetrics(SM_CXSCREEN);
		b = GetSystemMetrics(SM_CYSCREEN);
		StretchBlt(GetDC(NULL), 50, 50, a - 100, b - 100, GetDC(NULL), 0, 0, a, b, SRCCOPY);
		Sleep(2000);
	}
}