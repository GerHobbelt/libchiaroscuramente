
// find / estimate which parts of the image contain graphs/charts: anything that's not text and not a photograph/similar drawing.
//
// The purpose of this is to produce a set of boxes identifying the pixel areas which are (most probably) charts, graphs or likewise
// vector art, which we can extract as image snippets before cleaning up and feeding the stripped resulting image to the OCR engine
// (which would only get utterly confused if fed these chart/graph/art areas for OCR-ing)
// 

