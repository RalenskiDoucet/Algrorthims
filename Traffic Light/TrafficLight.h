#pragma once
class TrafficLight
{
public:
	enum eState{init,RedLight,GreenLight,YellowLight,off};
	eState m_State = off;
	int m_Ticks;
	TrafficLight()
	{
		m_State = eState::RedLight;
	}
	void Update()
	{
		while (m_State != eState::off)
		{
			std::cout << "How many ticks have passed";
			std::cin >> m_Ticks;
			switch (m_Ticks)
			{
			case 1:
				if (m_State == eState::init || m_State == eState::YellowLight);

			}
		}
	}
};