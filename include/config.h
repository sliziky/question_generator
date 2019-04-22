#ifndef CONFIG_H
#define CONFIG_H
#include <algorithm>
#include <QString>
namespace cf
{
    constexpr static int number_of_questions = 984;
    constexpr static int number_of_answers   = 8;
    constexpr static int number_of_topics    = 18;

    constexpr static int range_sach_begin    = 0;
    constexpr static int range_sach_end      = 218;
    constexpr static int range_lipid_end     = 303;
    constexpr static int range_amino_end     = 423;
    constexpr static int range_nucle_end     = 491;
    constexpr static int range_tetra_end     = 511;
    constexpr static int range_acCoA_end     = 527;
    constexpr static int range_hormo_end     = 607;
    constexpr static int range_regul_end     = 649;
    constexpr static int range_nersy_end     = 672;
    constexpr static int range_eikoz_end     = 688;
    constexpr static int range_pecen_end     = 739;
    constexpr static int range_molbi_end     = 808;
    constexpr static int range_trave_end     = 848;
    constexpr static int range_voda_end      = 873;
    constexpr static int range_oblic_end     = 889;
    constexpr static int range_enzym_end     = 944;
    constexpr static int range_abr_end       = 960;
    constexpr static int range_prot_end      = 984;
    const QString green_background           = QStringLiteral ("background-color: rgb(102, 255, 102)");
    const QString red_background             = QStringLiteral ("background-color: rgb(255,0,0)");
}


#endif // CONFIG_H
