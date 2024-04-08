#include <iostream>
using namespace std;
#include <string>

int main()
{
	class cube 
	{
	public :

		int m_h;
		int m_w;
		int m_l;
		int volume;
		void setH(int h)
		{
			 m_h = h;
		}

		void setL(int l)
		{
			m_l = l;
		}

		void setW(int w)
		{
			m_w = w;
		}

		void caculateTJ()
		{
			volume = m_h * m_w * m_l;
			cout << "Ìå»ýÎª£º" << volume << endl;
		}
	};

	cube c1;
	c1.setH(5);
	c1.setL(6);
	c1.setW(10);
	c1.caculateTJ();

	system("pause");
	return 0;

}