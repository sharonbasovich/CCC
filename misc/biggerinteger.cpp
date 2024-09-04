#include <iostream>;
using namespace std;

int main()
{
    int x;
    int d;
    scanf("%d", &d);
    scanf("%d", &x);
    int previous = 0;
    for (int i = 0; i < d; i++)
    {
        int temp;
        temp = x % (d^(i+1));
        temp -= x % (d^(i));
        printf("%d", temp);
    }
    return 0;
}