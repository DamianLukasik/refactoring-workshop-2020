#pragma once

#include <memory>

class Event;

class Sender
{
public:
    virtual ~Sender() = default;
    virtual void sendClearOldFood();
    virtual void sendPlaceNewFood(int x, int y,std::pair<int, int> &m_foodPosition);
};
