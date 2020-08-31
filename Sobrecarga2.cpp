#include <iostream>
using namespace std;
class F
{
public:
    F(int m = 1, int d = 1, int a = 1900, int h = 24, int min = 60, int s = 60)
    {
        this->m = m;
        this->a = a;
        this->d = d;
        this->h = h;
        this->min = min;
        this->s = s;
    }
    F &operator++(int)
    {
        d++;
        return *this;
    }
    F operator--()
    {
        d--;
        return *this;
    }

    F operator-(int hora2)
    {
        if (h > hora2)
        {
            return h - hora2;
        }
        else
        {
            return 0;
        }
    }

private:
    unsigned int m, d, a, h, min, s;
    friend int main();
};
int main()
{

    F f;
    enum fecha
    {
        m,
        d,
        a,
        h,
        min,
        s
    };
    fecha F;
    F = d;
    f++;
    cout << f.d << endl;
    --f;
    cout << f.d << endl;
    return 0;
}
