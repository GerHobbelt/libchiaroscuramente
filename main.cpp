
#include "../libprecog/src/samples/monolithic_examples.h"

//implement your copy of `#include "monolithic_main_defs.h"`:
#include "monolithic_examples.h"

// define a name for the monolith
#define USAGE_NAME   "chiaroscuramente"

// load the monolithic definitions which you need for the dispatch table:
#include "monolithic_main_internal_defs.h"

// declare your own monolith dispatch table:
MONOLITHIC_CMD_TABLE_START()
{ "demo", { .fa = chiar_demo_main } },

{"backgroundNormalization", { .fa = prl_backgroundNormalization_sample_main }},
{"balanceColor", { .fa = prl_balanceColor_sample_main }},
{"balanceGrayWorldWhite", { .fa = prl_balanceGrayWorldWhite_sample_main }},
{"balanceSimpleWhite", { .fa = prl_balanceSimpleWhite_sample_main }},
{"balanceGammaCorrection", { .fa = prl_balanceGammaCorrection_sample_main }},
{"binarizeByLocalVariances", { .fa = prl_binarizeByLocalVariances_sample_main }},
{"binarizeCOCOCLUST", { .fa = prl_binarizeCOCOCLUST_sample_main }},
{"binarizeBCITB", { .fa = prl_binarizeBCITB_sample_main }},
{"binarizeFeng", { .fa = prl_binarizeFeng_sample_main }},
{"binarizeLocalOtsu", { .fa = prl_binarizeLocalOtsu_sample_main }},
{"binarizeMokji", { .fa = prl_binarizeMokji_sample_main }},
{"binarizeNativeAdaptive", { .fa = prl_binarizeNativeAdaptive_sample_main }},
{"binarizeNiblack", { .fa = prl_binarizeNiblack_sample_main }},
{"binarizeNICK", { .fa = prl_binarizeNICK_sample_main }},
{"binarizeSauvola", { .fa = prl_binarizeSauvola_sample_main }},
{"binarizeWolfJolion", { .fa = prl_binarizeWolfJolion_sample_main }},
{"borderDetectAutoCrop", { .fa = prl_borderDetectAutoCrop_sample_main }},
{"cleanBackgroundToWhite", { .fa = prl_cleanBackgroundToWhite_sample_main }},
{"correctNUL", { .fa = prl_correctNUL_sample_main }},
{"deblurBasic", { .fa = prl_deblurBasic_sample_main }},
{"deblurWienerFilter", { .fa = prl_deblurWienerFilter_sample_main }},
{"denoiseSaltPepper", { .fa = prl_denoiseSaltPepper_sample_main }},
{"denoiseKuwaharaFilter", { .fa = prl_denoiseKuwaharaFilter_sample_main }},
{"deskew", { .fa = prl_deskew_sample_main }},
{"removeDots", { .fa = prl_removeDots_sample_main }},
{"removeHolePunch", { .fa = prl_removeHolePunch_sample_main }},
{"removeLines", { .fa = prl_removeLines_sample_main }},
{"segmentation", { .fa = prl_segmentation_sample_main }},
{"thinGuoHall", { .fa = prl_thinGuoHall_sample_main }},
{"thinZhangSuen", { .fa = prl_thinZhangSuen_sample_main }},
{"warp", { .fa = prl_warp_sample_main }},
MONOLITHIC_CMD_TABLE_END();

// load the monolithic core dispatcher
#include "monolithic_main_tpl.h"
