#include <unistd.h>             
                                
void putchar(char c)            
{                               
        write(1, &c, 1);        
}                               
                                
int main()                      
{                               
        char odd;               
        char even;              
                                
        odd = 'a';              
        even = 'b';             
                                
        while (odd <= 'z')      
        {                       
                putchar(odd);   
                odd = odd + 2;  
        }                       
        while (even <= 'y')     
        {                       
                putchar(even);  
                even = even + 2;
        }                       
        return 0;               
}                               
