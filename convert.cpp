//c++ Program to convert decimal no. to binary, octal,Hexadecimal and Vice-versa
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int num , pw,r[8], d, s[8], h[8];
int convert_1();
void convert_2();
void convert_3();
void convert_4();
int main()
{
	int rev,q,i,o;
	
	int st = 1,ch;
	d = num;
	while(st==1)
	{
	    cout << "\nOperations>>\n";
	    cout << " 1.Convert Decimal To Binary, Octal & Hexadecimal : \n";
	    cout << " 2.Convert Binary To Decimal, Octal & Hexadecimal : \n";
	    cout << " 3.Convert Octal To Deciaml, Binary & Hexadecimal : \n";
	    cout << " 4.Convert Hexadecimal To Deciaml, Binary & Octal : \n"; 
	    cout << " Enter your choice >> ";
        cin >> ch;
	    switch(ch)
	    {
	    	
		case 1:
            
            pw = 2;
            convert_1();
            break;
			
		case 2:
               	convert_2();
			    break;
				
		case 3:	
               convert_3();
			    break;
			
		case 4:
	          convert_4();
			  break;
		
	}
	
	cout << "\n\n Want to continue? 1-YES  0-NO  >> ";
	cin >> st;
	
 }
}
//Binary to Decimal , octal & HexaDecimal
void convert_2(){
	int bin, dec = 0, temp = 0, i;
	cout <<"\nEnter a Binary number >> ";
	cin >>bin;
	while(bin!=0){
		dec = dec + (bin%10) * pow(2,temp);
		temp++;
		bin = bin/10;
	}
    cout <<"\nDecimal Number : "<< dec;
	
	pw = 8;
	    d = dec;
		for(i=0;dec>0;i++)
	{
		s[i] = dec%pw;
		dec = dec/pw;
	}
	    cout <<"\nOctal Number : ";
	    for(i=i-1;i>=0;i--)
	{
			cout <<int(s[i]);
	}
	
	    dec = d;
	    pw = 16;
		for(i=0;dec>0;i++)
	{
		h[i] = dec%pw;
		dec = dec/pw;
	}
	    cout <<"\nHexaDecimal Number : ";
	    for(i=i-1;i>=0;i--)
	{
		if(h[i]<10){
			cout <<int(h[i]);
		}
		else{
			cout <<char(h[i]+55);
		}
	}
}
//Octal to Decimal, Binary & HexaDecimal

void convert_3(){
		int oct, dec = 0, temp = 0,i,o[8],p[8];
	cout <<"\nEnter a Octal Number >> ";
	cin >>oct;
	while(oct!=0){
		dec = dec + (oct%10) * pow(8,temp);
		temp++;
		oct = oct/10;
	}
	cout <<"\nDecimal Number : "<<dec;
		pw = 2;
	    d = dec;
		for(i=0;dec>0;i++)
	{
		o[i] = dec%pw;
		dec = dec/pw;
	}
	    cout <<"\nBinary Number";
	    for(i=i-1;i>=0;i--)
	{
			cout <<int(o[i]);
	}
	
	    dec = d;
	    pw = 16;
		for(i=0;dec>0;i++)
	{
		p[i] = dec%pw;
		dec = dec/pw;
	}
	    cout <<"\nHexaDecimal Number : ";
	    for(i=i-1;i>=0;i--)
	{
		if(p[i]<10){
			cout <<int(p[i]);
		}
		else{
			cout <<char(p[i]+55);
		}
	}
}
//HexaDecimal to Decimal, Binary, Octal & Hexadecimal
void convert_4(){
		int  dec = 0, temp = 0, rev, i,len;
		char hex[5];
	cout <<"\nEnter a Hexa-Decimal number >> ";
    cin>>(hex);
	len = strlen(hex);
	len--;
	for(i=0;hex[i]!='\0';i++){
		if(hex[i]>='0' && hex[i]<='9')
        {
            rev = hex[i] - 48;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            rev = hex[i] - 55;
        }
		dec = dec + (rev) * pow(16,len);
		temp++;
		len--;
	}
	cout <<"\nDecimal Number :"<<dec;
	
		pw = 2;
	    d = dec;
		for(i=0;dec>0;i++)
	{
		s[i] = dec%pw;
		dec = dec/pw;
	}
	    cout <<"\nBinary Number: ";
	    for(i=i-1;i>=0;i--)
	{
			cout <<int(s[i]);
	}
	
	    dec = d;
	    pw = 8;
		for(i=0;dec>0;i++)
	{
		h[i] = dec%pw;
		dec = dec/pw;
	}
	    cout <<"\nOctal Number: ";
	    for(i=i-1;i>=0;i--)
	{
			cout <<int(h[i]);
	}
}
//Decimal To binary, Octal & Hexadecimal
int convert_1(){
	int i;
	cout <<"Enter a positive decimal no. >> ";
	cin >>num;
	 d = num ;
		{
		
				for(i=0;num>0;i++)
	{
		r[i] = num%pw;
		num = num/pw;
	}
	    cout <<"Binary Number:";
	    for(i=i-1;i>=0;i--)
	{
			cout <<int(r[i]);
    }
    
	    pw = 8;
	    num = d;
		for(i=0;num>0;i++)
	{
		s[i] = num%pw;
		num = num/pw;
	}
	    cout <<"\nOctal Number: ";
	    for(i=i-1;i>=0;i--)
	{
			cout <<int(s[i]);
	}
	
	    num = d;
	    pw = 16;
		for(i=0;num>0;i++)
	{
		h[i] = num%pw;
		num = num/pw;
	}
	    cout <<"\nHexadecimal Number : ";
	    for(i=i-1;i>=0;i--)
	{
		if(h[i]<10){
			cout <<int(h[i]);
		}
		else{
			cout <<char(h[i]+55);
		}
	}
}
}
