#include<iostream>
#include<assert.h>

using namespace std;

void * Mymemcpy(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	while (count--) {
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}
	return(ret);
}
char * Mystrcpy(char *des, const char *src){
	assert((des != NULL) && (src != NULL));
	char *ret = des; // ∑¿÷π∏ƒ±‰desµƒµÿ÷∑  
	while ((*des++ = *src++) != '\0');
	return ret;
}
int 重写memcpy和strcpy()
{
	char p1[256] = "hello,world!";
	char p2[256] = { "wow" };
	cout << p1 << " " << p2 << endl;
	Mymemcpy(p2, p1, 5);
	cout << p2 << endl;
	Mystrcpy(p2, p1);
	cout << p2 << endl;
	return 0;
}
