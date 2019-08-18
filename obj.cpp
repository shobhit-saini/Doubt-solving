#include<iostream>
using namespace std;
	class pie
	{
		private:
			int a,b,c;
		
		public:
			void getdata()
			{
				a = 3;
				b = 2;
				c = 1;
			}	
			
			pie()
			{
			}
			
			pie(int x)
			{
				a = x;
			}
			
			operator int()
			{
				int y;
				y = a * b * c;
				return y * y; 
			}
			
			void showdata()
			{
				cout<<"\na="<<a<<" b="<<b<<"  c="<<c;
			}
	};
int main()
{
	pie are;
	are.getdata();
	are.showdata();
	int x;
	x=are;
	are=x;
	cout<<"\n"<<x;
	are.showdata();
}
