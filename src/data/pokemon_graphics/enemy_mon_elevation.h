// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[NUM_SPECIES] =
{
    [SPECIES_BUTTERFREE] = 8,
    [SPECIES_BEEDRILL] = 8,
    [SPECIES_PIDGEY] = 16,
    [SPECIES_PIDGEOT] = 4,
    [SPECIES_FEAROW] = 6,
    [SPECIES_ZUBAT] =  8,
    [SPECIES_GOLBAT] = 8,
    [SPECIES_VENOMOTH] = 8,
    [SPECIES_TENTACOOL] = 8,
    [SPECIES_TENTACRUEL] = 3,
    [SPECIES_GEODUDE] = 14,
    [SPECIES_MAGNEMITE] = 16,
    [SPECIES_MAGNETON] = 8,
    [SPECIES_GASTLY] = 4,
    [SPECIES_HAUNTER] = 4,
    [SPECIES_KOFFING] = 8,
    [SPECIES_WEEZING] = 6,
    [SPECIES_HORSEA] = 6,
    [SPECIES_SEADRA] = 7,
    [SPECIES_GOLDEEN] = 5,
    [SPECIES_SEAKING] = 3,
    [SPECIES_AERODACTYL] = 7,
    [SPECIES_ARTICUNO] = 6,
    [SPECIES_ZAPDOS] = 8,
    [SPECIES_MOLTRES] = 5,
    [SPECIES_DRAGONITE] = 6,
    [SPECIES_MEW] = 8,
    [SPECIES_LEDIAN] = 8,
    [SPECIES_CROBAT] = 6,
    [SPECIES_CHINCHOU] = 9,
    [SPECIES_LANTURN] = 7,
    [SPECIES_HOPPIP] = 11,
    [SPECIES_SKIPLOOM] = 12,
    [SPECIES_JUMPLUFF] = 9,
    [SPECIES_YANMA] = 8,
    [SPECIES_MISDREAVUS] = 8,
    [SPECIES_UNOWN] = 8,
    [SPECIES_GLIGAR] = 6,
    [SPECIES_QWILFISH] = 12,
    [SPECIES_REMORAID] = 12,
    [SPECIES_MANTINE] = 3,
    [SPECIES_KINGDRA] = 4,
    [SPECIES_PORYGON2] = 9,
    [SPECIES_LUGIA] = 6,
    [SPECIES_HO_OH] = 6,
    [SPECIES_CELEBI] = 15,
    [SPECIES_BEAUTIFLY] = 8,
    [SPECIES_DUSTOX] = 10,
    [SPECIES_NINJASK] = 10,
    [SPECIES_SHEDINJA] = 8,
    [SPECIES_WINGULL] = 16,
    [SPECIES_PELIPPER] = 8,
    [SPECIES_MASQUERAIN] = 10,
    [SPECIES_WAILORD] = 7,
    [SPECIES_CLAYDOL] = 11,
    [SPECIES_BARBOACH] = 8,
    [SPECIES_LUVDISC] = 12,
    [SPECIES_FEEBAS] = 8,
    [SPECIES_CARVANHA] = 12,
    [SPECIES_SHARPEDO] = 4,
    [SPECIES_FLYGON] = 3,
    [SPECIES_GLALIE] = 12,
    [SPECIES_LUNATONE] = 13,
    [SPECIES_SOLROCK] = 4,
    [SPECIES_SWABLU] = 12,
    [SPECIES_ALTARIA] = 8,
    [SPECIES_DUSKULL] = 9,
    [SPECIES_HUNTAIL] = 5,
    [SPECIES_GOREBYSS] = 8,
    [SPECIES_SHUPPET] = 14,
    [SPECIES_CASTFORM] = 16,
    [SPECIES_RELICANTH] = 6,
    [SPECIES_ANORITH] = 2,
    [SPECIES_BELDUM] = 13,
    [SPECIES_METANG] = 1,
    [SPECIES_KYOGRE] = 1,
    [SPECIES_RAYQUAZA] = 2,
    [SPECIES_LATIAS] = 4,
    [SPECIES_LATIOS] = 4,
    [SPECIES_JIRACHI] = 12,
    [SPECIES_DEOXYS] = 3,
    [SPECIES_CHIMECHO] = 8,
};
