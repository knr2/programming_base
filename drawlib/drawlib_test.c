#include <drawlib.h>

int main(void)
{
    dl_initialize(1.0);

    dl_line(10, 100, 100, 100, dl_color_from_name("blue"), 2);

    dl_line(100, 100, 100, 300, dl_color_from_name("black"), 4);

    dl_line(100, 300, 10, 100, dl_color_from_name("red"), 3);

    dl_line(100, 100, 200, 100, dl_color_from_name("cyan"), 6);

    dl_line(100, 300, 200, 100, dl_color_from_name("green"), 7);

    while (1)
    {
        dl_wait(0.01);
    }

    return 0;
}
