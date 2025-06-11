
// find / estimate where there's lines or line boxes drawn in the image.
//
// The purpose of this is to detect these lines, potentially discover a formatted table layout, but most importantly
// remove these lines from the image as these would only confuse the OCR engine -- tesseract has its own (old) line
// discovery routines, but those perform sub-par in many circumstances. We strive to improve on that and thus
// produce a cleaner page for tesseractOCR to decode.
// 

