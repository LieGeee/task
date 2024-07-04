using namespace std;


int pow_mod(int a,int b,int  c)
{
    int ans = 1,base=a;// ans：结果 base：底数
    base = base % c;
    if(b==0)//0次方
    {
        return 1%c;
    }
    while(b)
    {
        if(b & 1) //判断奇偶
            ans = (ans*base) % c; //取模
        b = b >> 1;// 等于除2
        base = (base * base) % c; //取模
    }
    return ans;
} 
