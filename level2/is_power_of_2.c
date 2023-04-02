int is_power_of_2(unsigned int n)
{
    return(!(n & n- 1));
}