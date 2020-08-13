#include <cassert>

bool IsBisiesto (unsigned year)
{
    assert (year >= 1582);
    return year % 4 == 0 and (( year % 400 == 0) or !(year % 100 == 0)); 
}

int main ()
{
    assert (IsBisiesto(2000) == true);
    assert (IsBisiesto(1984) == true);
    assert (IsBisiesto(2006) == false);
    assert (IsBisiesto(1988) == true);
    assert (IsBisiesto(2020) == true);
    assert (IsBisiesto(2400) == true);

    return 0;
}


