
// image eualization
//
// This includes global and locally adaptive levels, ditto contrast enhancement and
// "punching up" of faded text pixels in low grade scans (or scans of original faded paper content).
//
// An example of the latter would be where a `2` character is scanned, but whould, with our help, be thresholded into
// two separate pixel clusters: a top bow and bottom line, due to the connecting diagonal stem in the middle of the character
// having faded too much to make it past the localized threshold mark. (This is a common problem with OCR scans of old books and documents.)
//
// Such texts will be badly broken up by OCR software, which will then fail to recognize the characters.
//
// (Idiom: making it by the skin of your teeth --> increase contrast/darkness of the diagonal stem in the `2` example above, so that the OCR software can recognize it as a single `2` character.)
// 

