#include "minimal_fighter.h"
MinimalFighter::MinimalFighter()
{
	mHp=0;
	mPower=0;
	mStatus=Invalid;
}
MinimalFighter::MinimalFighter(int _hp,int _power)
{
	mHp=_hp;
	mPower=_power;
	if (mHp<=0)
		mStatus=Dead;
	else if (mHp>0)
		mStatus=Alive;
}
int MinimalFighter::hp()
{
	return mHp;
}
int MinimalFighter::power()
{
	return mPower;
}
FighterStatus MinimalFighter::status()
{
	return mStatus;
}
void MinimalFighter::setHp(int _hp)
{
	mHp=_hp;
}
void MinimalFighter::hit(MinimalFighter *_enemy)
{
	mHp=mHp-(_enemy->mPower);
	_enemy->mHp-=mPower;
	if (mHp<=0)
		mStatus=Dead;
	if (_enemy->mHp<=0)
		_enemy->mStatus=Dead;
}
void MinimalFighter::attack(MinimalFighter *_enemy)
{
	_enemy->mHp-=mPower;
	mPower=0;
	if (mHp<=0)
                mStatus=Dead;
        if (_enemy->mHp<=0)
                _enemy->mStatus=Dead;

}
void MinimalFighter::fight(MinimalFighter *_enemy)
{
	while (mHp>0 && _enemy->mHp>0)
	{
		mHp=mHp-(_enemy->mPower);
		_enemy->mHp-=mPower;
	}
	if (mHp<=0)
                mStatus=Dead;
        if (_enemy->mHp<=0)
                _enemy->mStatus=Dead;

}
