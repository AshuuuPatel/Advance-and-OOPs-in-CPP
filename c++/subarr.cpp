int maxSubArray(vector<int> &nums)
{
    int max{0};
    for (int i = 0; i < nums.size(); i++)
    {
        max += nums[i];
    }

    int pointer = 0;
    while (pointer < nums.size())
    {
        for (int i = pointer; i < nums.size(); i++)
        {
            int temp = 0;
            for (int j = pointer; j <= i; j++)
            {
                temp += nums[j];
                if (temp > max)
                {
                    max = temp;
                }
            }
        }