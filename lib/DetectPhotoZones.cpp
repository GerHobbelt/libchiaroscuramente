
// find / estimate which parts of the image contain photos/drawings, including newspaper-style halftone imagery: anything that's not text and not a chart/graph/human vector art drawing.
//
// The purpose of this is to produce a set of boxes identifying the pixel areas which are (most probably) photos or likewise 
// paintings, which we can extract as image snippets before cleaning up and feeding the stripped resulting image to the OCR engine
// (which would only get utterly confused if fed these picture areas for OCR-ing)
// 

