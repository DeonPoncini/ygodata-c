#include <ygo/data/c/DataUtils.h>
#include <ygo/data/cpp/DataTypes.h>

#include <zephyr/cstring.h>

#define CPP_CAST(x) reinterpret_cast<ygo::data::StaticCardData*>(x)

ygo_data_StaticCardData*
ygo_data_static_card_data_to_c(ygo_data_StaticCardData_CPP* c)
{
    auto s = CPP_CAST(c);
    return new ygo_data_StaticCardData {
        zephyr::cstring::make_copy(s->name),
        static_cast<ygo_data_CardType>(s->cardType),
        static_cast<ygo_data_Attribute>(s->attribute),
        static_cast<ygo_data_MonsterType>(s->monsterType),
        static_cast<ygo_data_Type>(s->type),
        static_cast<ygo_data_MonsterType>(s->monsterAbility),
        s->level,
        s->attack,
        s->defense,
        s->lpendulum,
        s->rpendulum,
        static_cast<ygo_data_SpellType>(s->spellType),
        static_cast<ygo_data_TrapType>(s->trapType),
        zephyr::cstring::make_copy(s->text)
    };
}

void ygo_data_delete_static_card_data(ygo_data_StaticCardData* c)
{
    zephyr::cstring::delete_copy(c->name);
    zephyr::cstring::delete_copy(c->text);
    delete c;
}
