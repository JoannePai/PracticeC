/*
American Express: 15 digit, start with 34, 37
MasterCard: 16 digit, start with 51, 52, 53, 54,55
Visa: 13 or 16 digit, start with 4
1. 先算出幾位數
2. 等於 16，看開頭是不是等於 51 - 55，或者為 4
3. 等於 15，看開頭是不是等於 34 or 37
3. 等於 13，看開頭是不是等於 4
-----
測試：
1. 基數位 * 2 ( 如果超過10 ，個位數跟十位數相加 )
2. 相加結果 n
3. 偶位數相加 再加上 n
4. n 如果為 10 的倍數，卡片號碼就成立
*/

# include <cs50.h>
# include <stdio.h>
# include <math.h>

int check(long total);
int count(long n);
string card_type(long n, int i);

string s_invalid = "INVALID";
int main(void)
{
    long n = get_long("card: ");
    int i = count(n);
    if ( check(n) % 10 == 0 )
    {
        printf("%s\n", card_type(n, i));
    }
    else
    {
        printf("%s\n", s_invalid);
    }
}

// 驗證卡號
int check(long total)
{
    int amount = 0;
    while( total >= 1 )
    {
        // 步驟 3. 偶位數相加   
        int even = total % 10;
        amount += even;
        total = round(total/10);
        
        // 步驟 1, 2. 基數位相加
        int odd = (total % 10) * 2;
        if (odd >= 10)
        {
            odd = (odd % 10) + round(odd/10);
        }
        amount += odd;
        total = round(total/10);
    }
//     printf("total: %i\n", amount);
    return amount;
}


// 先算有幾位數
int count(long n)
{
    int i = 0;
    while( n >= 1)
    {
        n = n / 10;
        i++;
    }
    return i;
}


// 判斷為哪種卡
string card_type(long n, int i)
{
    // 先算出前兩個數字
    while ( n >= 100 )
    {
        n = round(n / 10);
    }
    
    // 判斷
    switch (i)
    {
        case 16:
            if ( round(n / 10) == 4 )
            {
                return "VISA";
            } 
            else if ( (n >= 51) && (n <= 55) )
            {
                return "MASTERCARD";               
            }
            return s_invalid;
        case 15:
            if ( n == 34 || n == 37)
            {
                return "AMEX";
            }
            return s_invalid;
        case 13:
            if ( round(n / 10) == 4 )
            {
                return "VISA";
            } 
            return s_invalid;
        default :
            return s_invalid;
    }
}

