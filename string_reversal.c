char* reverseString(char* s) 
{
    
    int i,j;
    int len;
    len=strlen(s);
    char temp;
    for(i = 0, j = len - 1; i < j; i++, j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    return s;
}