#include <stdio.h>
#include <iostream>
#include <string.h>
#include <windows.h>

int main()
{
    char path[MAX_PATH], *p = NULL;
    GetEnvironmentVariable((LPCTSTR)"USERPROFILE", (LPSTR)path, (DWORD)MAX_PATH);
    p = &path[strlen(path) - 1];
    for(; *p != '\\'; --p);
    std :: cout << ++p;

    char buffer[256];
    unsigned long size = 256;

    GetComputerName( buffer, &size );

    printf( "\n%s\n", buffer );

    return 0;
}