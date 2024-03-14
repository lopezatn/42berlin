#include <unistd.h>

int	main(void)
{
	int	a;
    int b;
    int c;

    a = 0;

    while (a <= 9)
    {
        char digit_a = '0' + a;
        b = 0;

        while (b <= 9)
        {
            char digit_b = '0' + b;
            c = 0;

            while (c <= 9)
            {
                char digit_c = '0' + c;
                if(a == b || a == c || b == c || c == b) {
                    write(1, "", 1);
                } else {
                write(1, &digit_a, 1);
                write(1, &digit_b, 1);
                write(1, &digit_c, 1);
                write(1, ", ", 1);
                }
                c++;
            };

            b++;
        };
        a++;
    };
    

	return (0);
}
