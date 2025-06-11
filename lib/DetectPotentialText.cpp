
// find / estimate which pixel clusters of the image contain glyphs/text, which might be fed to the OCR engine.
//
// The goal here is to discover obvious and non-obvious text: the latter appears on (embossed) book covers, LP/CD/DVD covers,
// art books, graphic novels / comis, ... and we want to provide the OCR engine with a best-effort cleaned page image to help
// performance (speed) and OCR output quality: the OCR gets easily confused when fed the wrong kind of noisy imagery...
// 

