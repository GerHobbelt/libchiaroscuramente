
// pixel cluster analysis by floodfilling the image to help detect the precise text/character/glyph contours.
//
// Of course, this assumes:
// - we have succeeded in properly equalizing (see `Equalize.cpp`) the image
// - we do not suffer from glyph connectivity a la Devanagori script where the glyphs in a word share a common
//   top bar, or Arabic, where multiple characters are morphed in complicated ways to shape a word:
//
//   - Sanskrit: ॐ मणि पद्मे हूँ
//   - Arabic: اَللّٰهُ, اَلرَّحْمَٰنُ, اَلرَّحِيمُ, اَلْحَمْدُ لِلّٰهِ رَبِّ الْعَالَمِينَ
//   - Chinese :佛說大乘莊嚴寶王經
//   - Devanagari: ॐ मणिपद्मे हूँ महाज्ञानचित्तोत्पाद चित्तस्य नवितर्क सर्वार्थ भूरि सिद्धक नपुराण नप्रत्यत्पन्न नमो लोकेश्वराय स्वाहा
//   - Tibetan  : ཨོཾ་མ་ཎི་པ་དྨེ་ཧཱུྃ་
//
// Flood filling can be applied, using any starting point, with a specified "color tolerance", i.e. adjacent
// pixels must match the current pixel's color within a certain tolerance bound instead of the usual *exact match*.
// This helps to quickly floodfill an image zone, which would otherwise have required a two-stage process of
// thresholding+floodfill to achieve the same result.
//
// We also produce a contour box coordinates set for each floodfilled pixel cluster: hence floodfilling can be used
// to discover glyph contour box dimensions or similar measures, alongside the floodfill itself serving as a mask-producing
// operation which can then be applied to the source in a subsequent image processing stage, e.g.
// adversarial noise reduction by producing a glyph outline pixel mask which is then applied to the source image to
// remove the noise pixels outside the glyph contours.
//
