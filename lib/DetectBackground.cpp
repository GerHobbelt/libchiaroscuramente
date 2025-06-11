
// detect image background
//
// The purpose of this is to produce a baseline background image for improved thresholding and text discovery.
//
// Scanned images, magazine layout, etc. may exhibit (possibly grainy!) color gradients as the text page background.
// The goal here is to filter out "foreground" as best as we can, while "discovering" the actual background so
// we may subtract it from the original source image to produce a clear, cleaned up, text page for OCR-ing / page layout analysis.
// 

