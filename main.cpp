#include <QCoreApplication>
#include "weaponbehavior.h"
#include "swordbehavior.h"
#include "knifebehavior.h"
#include "bowandarrowbehavior.h"
#include "axebehavior.h"
#include "character.h"
#include "king.h"
#include "queen.h"
#include "troll.h"
#include "knight.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Character *p = new King();
    p ->fight();
    WeaponBehavior *sword = new SwordBehavior();
    p ->setWeapon(sword);
    p ->fight();

    Character *q = new Queen();
    q ->fight();
    WeaponBehavior *sw = new KnifeBehavior();
    q ->setWeapon(sw);
    q ->fight();

    Character *t = new Troll();
    t ->fight();
    WeaponBehavior *axe = new SwordBehavior();
    t ->setWeapon(axe);
    t ->fight();


    Character *k = new  Knight();
    k ->fight();
    WeaponBehavior *bow = new BowAndArrowBehavior();
    k ->setWeapon(bow);
    k ->fight();
    return a.exec();


}
