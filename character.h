#ifndef CHARACTER_H
#define CHARACTER_H
#include "weaponbehavior.h"
#include "axebehavior.h"
#include "bowandarrowbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"

class Character
{
public:
    WeaponBehavior *weapon;
    Character();
    void fight();
    void setWeapon(WeaponBehavior*);
};

#endif // CHARACTER_H
