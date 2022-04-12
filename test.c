int min(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
    }
    else if (c < b)
    {
        if (c < a)
        {
            return c;
        }
    }
    else
    {
        return b;
    }
}
