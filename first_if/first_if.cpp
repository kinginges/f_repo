#include <iostream>

int main()
{
    int num, num2, result_sum, result_subtr, result_multipl, result_div, result_rem;
    std::cout << "Please enter first whole number:\n";
    std::cin >> num;
    std::cout << "Please enter second whole number:\n";
    std::cin >> num2;

    result_sum = num + num2;
    std::cout << "The sum of (" << num << ") and (" << num2 << ") equals (" << result_sum << ")." << std::endl;
    /* result_subtr = num - num2;
    result_multipl = num * num2;
    result_div = num / num2;
    result_rem = num % num2;
    std::cout << "The subtracktion of (" << num2 << ") from (" << num << ") equals (" << result_subtr << ")." << std::endl;
    std::cout << "The multiplication of (" << num << ") by (" << num2 << ") equals (" << result_multipl << ")." << std::endl;
    std::cout << "The division of (" << num << ") by (" << num2 << ") equals (" << result_div << ") with the remainder of (" << result_rem << ")." << std::endl;
    result_sum--;
    std::cout << "The sum of (" << num << ") + (" << num2 << ") subtracked by 1 is (" << result_sum << ")." << std::endl;
    result_sum += 2;
    std::cout << "The sum of (" << num << ") + (" << num2 << ") with 1 added on top is (" << result_sum << ")." << std::endl;*/

    if (result_sum != 0)
    {
        result_sum < 0 ? std::cout << "Your sum is negative!" << std::endl : std::cout << "Your sum is positive!" << std::endl;
    }
    else
    {
        if (num != 0 && ((num * -1) == num2))
        {
            std::cout << "Your numbers cancel out!" << std::endl;
        }
        else
            std::cout << "Both numbers are zeros!" << std::endl;
    }

    if (result_sum != 0 && (result_sum == num || result_sum == num2))
        switch (num)
        {
        case 0:
            std::cout << "Your first number was a zero!" << std::endl;
            break;
        default:
            std::cout << "Your second number was a zero!" << std::endl;
            break;
        }

    std::cout << "\nYour code ran successfully! You did great!";
    return 0;
};