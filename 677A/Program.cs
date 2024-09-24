
int h = 5;
int[] values = {7,6,8,9,10,5};
int total = 0;


for(int i = 0;i < values.Length;i++)
{
    if(values[i] > h)
    {
        total=total+2;
    }
    else
    {
        total++;
    }

}
    return total;
