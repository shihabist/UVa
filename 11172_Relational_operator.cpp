#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int a,b,testCase = 0;
    scanf("%d", &testCase);
    while (testCase--)
    {
        scanf("%d %d", &a, &b);

        if ( a > b )
            printf("%c", 62);
        else if ( a < b )
            printf("%c", 60);
        else printf("%c", 61);
        printf("\n");
    }



    return 0;

}
