#include <stdio.h>

/* control bytes */
typedef union
{
	int total;
	struct
	{
		char id;
		char major;
		char score;
		char club;
	};
}Student;

/* control bits */
typedef union
{
	char header;
	struct
	{
		unsigned char bits1: 1;
		unsigned char bits2: 1;
		unsigned char bits3: 1;
	};
}ControlBitField;

int main()
{
	/*
	Student mic;
	mic.id = 12;
	mic.major = 2;
	mic.club = 3;
	mic.score = 87;
	printf("%d\n", mic.total);
	*/

	/**/
	ControlBitField cb;
	cb.header |= 0x01 << 2;
	//printf("%d\n", cb.header);
	cb.bits3 = 1;
	printf("%d\n", cb.header);

	cb.header &= ~(0x01 << 2);
	//printf("%d\n", cb.header);
	cb.bits3 = 0;
	printf("%d\n", cb.header);
	//*/
}
