#include <iostream>
using namespace std;

int main() {
    int t;
    int ans = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", n);
        for (int j = 0; j < n; j++)
        {
            int f;
            if(f > ans)
            {
                ans = f;
            }
            scanf("%d", &f);

        }

    }
    printf("%d", ans);
    return 0;   
}


