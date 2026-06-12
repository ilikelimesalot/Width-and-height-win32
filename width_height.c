# include <windows.h>
# include <stdio.h>

int main()
{
    int width = GetSystemMetrics(SM_CXSCREEN);
    int height = GetSystemMetrics(SM_CYSCREEN);
    
    printf("Width: %d, Height: %d\n", width, height);
    return width;
    return height;
    return 0;
}