#include <drawlib.h>
#include <stdio.h>
int main(void)
{
    dl_initialize(1.0);

    FILE *rgb;
    if ((rgb = fopen("png_rgb.txt", "r")) == NULL)
    {
        fprintf(stderr, "Can not find png.rgb.txt\n");
        exit(1);
    }

    int x, y, r, g, b;
    while (fscanf(rgb, "%d%d%d%d%d", &x, &y, &r, &g, &b) != EOF)
    {
        dl_line(x, y, x, y, dl_color_from_rgb(r,g,b), 1);
    }
    while (1)
    {
        dl_wait(0.01);
    }

    fclose(rgb);

    return 0;
}
