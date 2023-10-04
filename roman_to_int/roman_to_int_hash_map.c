typedef struct 
{
    char symbol;
    int value;
} roman;

 roman   nums[] =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

int romanToInt(char *s)
{
    int total;
    int curr_value;
    int prev_value;

    total = 0;
    curr_value = 0;
    prev_value = 0;
    while (*s != '\0')
    {
        for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
        {
            if (*s == nums[i].symbol)
            {
                curr_value = nums[i].value;
                break;
            }
        }
        if (curr_value > prev_value)
            total -= prev_value;
        else
            total += prev_value;
        prev_value = curr_value;
        s++;
    }
    total += prev_value;
    return (total);
}
