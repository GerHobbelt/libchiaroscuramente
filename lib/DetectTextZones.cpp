
// find / estimate which parts of the image contain printed text: anything that's not a graph/chart/picture/drawing.
//
// The purpose of this is to produce a set of boxes identifying the pixel areas which are (most probably) text (including titles and **Drop Caps**!),
// which we can extract as image snippets and feed to the OCR engine
// (which would only get utterly confused if fed non-text carrying noisy image content)
// 

