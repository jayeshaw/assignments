# include <iostream>
using namespace std;
main( )
{
FILE *fp ;
char ch ;
int count;
fp = fopen ( "PR1.txt", "r" ) ;
while ( 1 )
{
ch = fgetc ( fp ) ;
if ( ch == EOF )
break ;
if(ch==' ')
	count++;
}
cout<<count;
fclose ( fp ) ;
}
