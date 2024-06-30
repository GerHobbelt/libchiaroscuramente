# libchiaroscuramente

A collection of C/C++ functions (components) to help improve / enhance your images for various purposes (e.g. helping an OCR engine detect and recognize the text in the page scan image)



# Uses / References / Incorporates / Takes Inspiration From ...

- **doxa** [📁](./doxa) [🌐](https://github.com/GerHobbelt/Doxa) -- Δoxa Binarization Framework (ΔBF) is an image binarization framework which focuses primarily on local adaptive thresholding algorithms, aimed at providing the building blocks one might use to advance the state of handwritten manuscript binarization.
  
  Supported Algorithms:
  
  * Otsu - "A threshold selection method from gray-level histograms", 1979.
  * Bernsen - "Dynamic thresholding of gray-level images", 1986.
  * Niblack - "An Introduction to Digital Image Processing", 1986.
  * Sauvola - "Adaptive document image binarization", 1999.
  * Wolf - "Extraction and Recognition of Artificial Text in Multimedia Documents", 2003.
  * Gatos - "Adaptive degraded document image binarization", 2005. (Partial)
  * NICK - "Comparison of Niblack inspired Binarization methods for ancient documents", 2009.
  * Su - "Binarization of Historical Document Images Using the Local Maximum and Minimum", 2010.
  * T.R. Singh - "A New local Adaptive Thresholding Technique in Binarization", 2011.
  * Bataineh - "An adaptive local binarization method for document images based on a novel thresholding method and dynamic windows", 2011. (unreproducible)
  * ISauvola - "ISauvola: Improved Sauvola’s Algorithm for Document Image Binarization", 2016.
  * WAN - "Binarization of Document Image Using Optimum Threshold Modification", 2018.
  
  Optimizations:
  
  * Shafait - "Efficient Implementation of Local Adaptive Thresholding Techniques Using Integral Images", 2008.
  * Petty - An algorithm for efficiently calculating the min and max of a local window.  Unpublished, 2019.
  * Chan - "Memory-efficient and fast implementation of local adaptive binarization methods", 2019.
  
  Performance Metrics:
  
  * Overall Accuracy
  * F-Measure
  * Peak Signal-To-Noise Ratio (PSNR)
  * Negative Rate Metric (NRM)
  * Matthews Correlation Coefficient (MCC)
  * Distance-Reciprocal Distortion Measure (DRDM) - "An Objective Distortion Measure for Binary Document Images Based on Human Visual Perception", 2002.
  
  Native Image Support:
  
  * Portable Any-Map: PBM (P4), 8-bit PGM (P5), PPM (P6), PAM (P7)

- **local_adaptive_binarization** [📁](./local_adaptive_binarization) [🌐](https://github.com/GerHobbelt/local_adaptive_binarization) -- uses an improved contrast maximization version of Niblack/Sauvola et al's method to binarize document images. It is also able to perform the more classical Niblack as well as Sauvola et al. methods. Details can be found in the [ICPR 2002 paper](file:///Users/chris/www/prof/publications/index.html#icpr2002v).

 





### OCR page image preprocessing, \[scanner] tooling: getting the pages to the OCR engine

- **Awesome-Document-Image-Rectification** [📁](./Awesome-Document-Image-Rectification) [🌐](https://github.com/GerHobbelt/Awesome-Document-Image-Rectification) -- a comprehensive list of awesome document image rectification methods based on deep learning.
- **Awesome-Image-Quality-Assessment** [📁](./Awesome-Image-Quality-Assessment) [🌐](https://github.com/GerHobbelt/Awesome-Image-Quality-Assessment) -- a comprehensive collection of IQA papers, datasets and codes. We also provide PyTorch implementations of mainstream metrics in [IQA-PyTorch](https://github.com/chaofengc/IQA-PyTorch)
- **butteraugli** [📁](./butteraugli) [🌐](https://github.com/GerHobbelt/butteraugli) -- a tool for measuring perceived differences between images. Butteraugli is a project that estimates the psychovisual similarity of two images. It gives a score for the images that is reliable in the domain of barely noticeable differences. Butteraugli not only gives a scalar score, but also computes a spatial map of the level of differences. One of the main motivations for this project is the statistical differences in location and density of different color receptors, particularly the low density of blue cones in the fovea. Another motivation comes from more accurate modeling of ganglion cells, particularly the frequency space inhibition.
- **Capture2Text** [📁](./Capture2Text) [🌐](https://github.com/GerHobbelt/Capture2Text) -- Linux CLI port of Capture2Text v4.5.1 (Ubuntu) - the OCR results from Capture2Text were generally better than standard Tesseract, so it seemed ideal to make this run on Linux.
- **ccv-nnc** [📁](./ccv-nnc) [🌐](https://github.com/GerHobbelt/ccv) -- C-based/Cached/Core Computer Vision Library. A Modern Computer Vision Library.
- **CImg** [📁](./CImg) [🌐](https://github.com/GerHobbelt/CImg) -- a **small** C++ toolkit for **image processing**.
- **ColorSpace** [📁](./ColorSpace) [🌐](https://github.com/GerHobbelt/ColorSpace) -- library for converting between color spaces and comparing colors.
- **color-util** [📁](./color-util) [🌐](https://github.com/GerHobbelt/color-util) -- a header-only C++11 library for handling colors, including color space converters between RGB, XYZ, Lab, etc. and color difference calculators such as CIEDE2000.
- **DocLayNet** [📁](./DocLayNet) [🌐](https://github.com/GerHobbelt/DocLayNet) -- DocLayNet provides page-by-page layout segmentation ground-truth using bounding-boxes for 11 distinct class labels on 80863 unique pages from 6 document categories. It provides several unique features compared to related work such as PubLayNet or DocBank, e.g. *Human Annotation*: DocLayNet is hand-annotated by well-trained experts, providing a gold-standard in layout segmentation through human recognition and interpretation of each page layout.

- **EasyOCR** [📁](./EasyOCR) [🌐](https://github.com/GerHobbelt/EasyOCR) -- ready-to-use OCR with 80+ [supported languages](https://www.jaided.ai/easyocr) and all popular writing scripts including: Latin, Chinese, Arabic, Devanagari, Cyrillic, etc.
- **EasyOCR-cpp** [📁](./EasyOCR-cpp) [🌐](https://github.com/GerHobbelt/EasyOCR-cpp) -- custom C++ implementation of [EasyOCR](https://github.com/JaidedAI/EasyOCR). This C++ project implements the pre/post processing to run a OCR pipeline consisting of a text detector [CRAFT](https://arxiv.org/abs/1904.01941), and a CRNN based text recognizer. Unlike the EasyOCR python which is API based, this repo provides a set of classes to show how you can integrate OCR in any C++ program for maximum flexibility.
- **farver-OKlab** [📁](./farver-OKlab) [🌐](https://github.com/GerHobbelt/farver) -- provides very fast, vectorised functions for conversion of colours between different colour spaces, colour comparisons (distance between colours), encoding/decoding, and channel manipulation in colour strings.
- **fCWT** [📁](./fCWT) [🌐](https://github.com/GerHobbelt/fCWT) -- the fast Continuous Wavelet Transform (fCWT) is a highly optimized C++ library for very fast calculation of the CWT in C++, Matlab, and Python. **fCWT has been featured on the January 2022 cover of NATURE Computational Science**. In this article, fCWT is compared against eight competitor algorithms, tested on noise resistance and validated on synthetic electroencephalography and in vivo extracellular local field potential data.
- **FFmpeg** [📁](./FFmpeg) [🌐](https://github.com/GerHobbelt/FFmpeg) -- a collection of libraries and tools to process multimedia content such as audio, video, subtitles and related metadata.
- **gegl** [📁](./gegl) [🌐](https://github.com/GerHobbelt/gegl) -- *GEGL* (Generic Graphics Library) is a data flow based image processing framework, providing floating point processing and non-destructive image processing capabilities to [GNU Image Manipulation Program](http://www.gimp.org/) and other projects. With GEGL you chain together processing operations to represent the desired image processing pipeline. GEGL provides operations for image loading and storing, color adjustments, GIMPs artistic filters and more forms of image processing GEGL can be used on the command-line with the same syntax that can be used for creating processing flows interactively with text from GIMP using gegl-graph.
- **gmic** [📁](./gmic) [🌐](https://github.com/GerHobbelt/gmic) -- a Full-Featured Open-Source Framework for Image Processing. It provides several different **[user interfaces](https://en.wikipedia.org/wiki/User_interface)** to convert/manipulate/filter/visualize **generic image datasets**, ranging from _1d scalar signals_ to _3d+t sequences of multi-spectral volumetric images_, hence including _2d color images_.
- **gmic-community** [📁](./gmic-community) [🌐](https://github.com/GerHobbelt/gmic-community) -- community contributions for the GMIC Full-Featured Open-Source Framework for Image Processing. It provides several different **[user interfaces](https://en.wikipedia.org/wiki/User_interface)** to convert/manipulate/filter/visualize **generic image datasets**, ranging from _1d scalar signals_ to _3d+t sequences of multi-spectral volumetric images_, hence including _2d color images_.
- **graph-coloring** [📁](./graph-coloring) [🌐](https://github.com/GerHobbelt/graph-coloring) -- a C++ Graph Coloring Package. This project has two primary uses:
  
  * As an executable for finding the chromatic number for an input graph (in edge list or edge matrix format)
  * As a library for finding the particular coloring of an input graph (represented as a `map<string,vector<string>>` edge list)

- **GraphicsMagick** [📁](./GraphicsMagick) [🌐](https://github.com/GerHobbelt/graphicsmagick) -- provides a comprehensive collection of utilities, programming interfaces, and GUIs, to support file format conversion, image processing, and 2D vector rendering. GraphicsMagick is originally based on ImageMagick from ImageMagick Studio (which was originally written by John Cristy at Dupont). The goal of GraphicsMagick is to provide the highest quality product possible while encouraging open and active participation from all interested developers.
- **gtsam** [📁](./gtsam) [🌐](https://github.com/GerHobbelt/gtsam) -- Georgia Tech Smoothing and Mapping Library (GTSAM) is a C++ library that implements smoothing and mapping (SAM) in robotics and vision, using Factor Graphs and Bayes Networks as the underlying computing paradigm rather than sparse matrices.
- **guetzli** [📁](./guetzli) [🌐](https://github.com/GerHobbelt/guetzli) -- a JPEG encoder that aims for excellent compression density at high visual quality. Guetzli-generated images are typically 20-30% smaller than images of equivalent quality generated by libjpeg. Guetzli generates only sequential (nonprogressive) JPEGs due to faster decompression speeds they offer.
- **hsluv-c** [📁](./hsluv-c) [🌐](https://github.com/GerHobbelt/hsluv-c) -- HSLuv (revision 4) is a human-friendly alternative to HSL. HSLuv is very similar to CIELUV, a color space designed for perceptual uniformity based on human experiments. When accessed by polar coordinates, it becomes functionally similar to HSL with a single problem: its chroma component doesn't fit into a specific range. HSLuv extends CIELUV with a new saturation component that allows you to span all the available chroma as a neat percentage.
- **ImageMagick** [📁](./ImageMagick) [🌐](https://github.com/GerHobbelt/ImageMagick) -- [ImageMagick®](https://imagemagick.org/) can create, edit, compose, or convert digital images. It can read and write images in a variety of formats (over 200) including PNG, JPEG, GIF, WebP, HEIC, SVG, PDF, DPX, EXR, and TIFF. ImageMagick can resize, flip, mirror, rotate, distort, shear and transform images, adjust image colors, apply various special effects, or draw text, lines, polygons, ellipses, and Bézier curves.
- **IMGUR5K-Handwriting-Dataset** [📁](./IMGUR5K-Handwriting-Dataset) [🌐](https://github.com/GerHobbelt/IMGUR5K-Handwriting-Dataset) -- the IMGUR5K Handwriting Dataset for OCR/image preprocessing benchmarks.
- **InversePerspectiveMapping** [📁](./InversePerspectiveMapping) [🌐](https://github.com/GerHobbelt/InversePerspectiveMapping) -- C++ class for the computation of plane-to-plane homographies, aka bird's-eye view or IPM, particularly relevant in the field of Advanced Driver Assistance Systems.
- **ITK** [📁](./ITK) [🌐](https://github.com/GerHobbelt/ITK) -- The Insight Toolkit (ITK) is an open-source, cross-platform toolkit for N-dimensional scientific image processing, segmentation, and registration. Segmentation is the process of identifying and classifying data found in a digitally sampled representation. Typically the sampled representation is an image acquired from such medical instrumentation as CT or MRI scanners. Registration is the task of aligning or developing correspondences between data. For example, in the medical environment, a CT scan may be aligned with a MRI scan in order to combine the information contained in both.
- **jasper** [📁](./jasper) [🌐](https://github.com/GerHobbelt/jasper) -- JasPer Image Processing/Coding Tool Kit
- **jpeg2dct** [📁](./jpeg2dct) [🌐](https://github.com/GerHobbelt/jpeg2dct) -- Faster Neural Networks Straight from JPEG: jpeg2dct subroutines -- this module is useful for reproducing results presented in the paper [Faster Neural Networks Straight from JPEG](https://openreview.net/forum?id=S1ry6Y1vG) (ICLR workshop 2018).
- **lcms2** [📁](../../thirdparty/lcms2) [🌐](https://github.com/GerHobbelt/thirdparty-lcms2) -- `lcms2mt` is a thread-safe fork of `lcms` (a.k.a. Little CMS). Little CMS intends to be a small-footprint color management engine, with special focus on accuracy and performance. It uses the International Color Consortium standard (ICC), which is the modern standard when regarding to color management. The ICC specification is widely used and is referred to in many International and other de-facto standards. It was approved as an International Standard, ISO 15076-1, in 2005. Little CMS is a **full implementation** of ICC specification 4.3, it fully supports all kind of V2 and V4 profiles, including abstract, devicelink and named color profiles.
- **leptonica** [📁](../../thirdparty/leptonica) [🌐](https://github.com/GerHobbelt/leptonica) -- supports many operations that are useful on images.
  
  Features:
  
  * Rasterop (aka bitblt)
  * Affine transforms (scaling, translation, rotation, shear) on images of arbitrary pixel depth
  * Projective and bilinear transforms
  * Binary and grayscale morphology, rank order filters, and convolution
  * Seedfill and connected components
  * Image transformations with changes in pixel depth, both at the same scale and with scale change
  * Pixelwise masking, blending, enhancement, arithmetic ops, etc.
  
  Documentation:
  
  - **LeptonicaDocsSite** [📁](./LeptonicaDocsSite) [🌐](https://github.com/GerHobbelt/LeptonicaDocsSite) -- unofficial Reference Documentation for the Leptonica image processing library ([www.leptonica.org](http://www.leptonica.org)).
  - **UnofficialLeptDocs** [📁](./UnofficialLeptDocs) [🌐](https://github.com/GerHobbelt/UnofficialLeptDocs) -- unofficial Sphinx-generated documentation for the Leptonica image processing library.

- **libchiaroscuramente** [📁](./libchiaroscuramente) [🌐](https://github.com/GerHobbelt/libchiaroscuramente) -- a collection of C/C++ functions (components) to help improving / enhancing your images for various purposes (e.g. helping an OCR engine detect and recognize the text in the page scan image)
- **libdip** [📁](./libdip) [🌐](https://github.com/GerHobbelt/diplib) -- **[*DIPlib*](https://diplib.org/diplib-docs/)** is a C++ library for quantitative image analysis.
- **libimagequant** [📁](./libimagequant) [🌐](https://github.com/GerHobbelt/libimagequant) -- Palette quantization library that powers `pngquant` and other PNG optimizers. `libimagequant` converts RGBA images to palette-based 8-bit indexed images, including alpha component. It's ideal for generating tiny PNG images and nice-looking GIFs. Image encoding/decoding isn't handled by the library itself, bring your own encoder.
- **libinsane** [📁](./libinsane) [🌐](https://github.com/GerHobbelt/libinsane) -- *the* library to access scanners on both Linux and Windows.
- **libjpegqs** [📁](./libjpegqs) [🌐](https://github.com/GerHobbelt/libjpegqs) -- JPEG Quant Smooth tries to recreate lost precision of DCT coefficients based on quantization table from jpeg image. You may not notice jpeg artifacts on the screen without zooming in, but you may notice them after printing. Also, when editing compressed images, artifacts can accumulate, but if you use this program before editing - the result will be better.
- **libpano13** [📁](./libpano13) [🌐](https://github.com/GerHobbelt/libpano13) -- the pano13 library, part of the Panorama Tools by Helmut Dersch of the University of Applied Sciences Furtwangen.
- **libpillowfight** [📁](./libpillowfight) [🌐](https://github.com/GerHobbelt/libpillowfight) -- simple C Library containing various image processing algorithms. 
  
  Available algorithms:
  
  - ACE (Automatic Color Equalization; Parallelized implementation)
  - Canny edge detection
  - Compare: Compare two images (grayscale) and makes the pixels that are different really visible (red).
  - Gaussian blur
  - Scan borders: Tries to detect the borders of a page in an image coming from a scanner.
  - Sobel operator
  - SWT (Stroke Width Transformation)
  - [Unpaper](https://github.com/Flameeyes/unpaper)'s algorithms
    
    - Blackfilter
    - Blurfilter
    - Border
    - Grayfilter
    - Masks
    - Noisefilter

- **libprecog** [📁](./libprecog) [🌐](https://github.com/GerHobbelt/PRLib) -- PRLib - Pre-Recognition Library. The main aim of the library is to prepare images for OCR (text recogntion). Image processing can really help to improve recognition quality.
- **libprecog-data** [📁](./libprecog-data) [🌐](https://github.com/GerHobbelt/libprecog-data) -- `PRLib` (a.k.a. `libprecog`) test data.
- **libprecog-manuals** [📁](./libprecog-manuals) [🌐](https://github.com/GerHobbelt/libprecog-manuals) -- `PRLib` (a.k.a. `libprecog`) related papers.
- **libraqm** [📁](./libraqm) [🌐](https://github.com/GerHobbelt/libraqm) -- a small library that encapsulates the logic for complex text layout and provides a convenient API.
- **libvips** [📁](./libvips) [🌐](https://github.com/GerHobbelt/libvips) -- a demand-driven, horizontally threaded image processing library which has around 300 operations covering arithmetic, histograms, convolution, morphological operations, frequency filtering, colour, resampling, statistics and others. It supports a large range of numeric types, from 8-bit int to 128-bit complex. Images can have any number of bands. It supports a good range of image formats, including JPEG, JPEG2000, JPEG-XL, TIFF, PNG, WebP, HEIC, AVIF, FITS, Matlab, OpenEXR, PDF, SVG, HDR, PPM / PGM / PFM, CSV, GIF, Analyze, NIfTI, DeepZoom, and OpenSlide. It can also load images via ImageMagick or GraphicsMagick, letting it work with formats like DICOM.
- **libxbr-standalone** [📁](./libxbr-standalone) [🌐](https://github.com/GerHobbelt/libxbr-standalone) -- this standalone XBR/hqx Library implements the xBR pixel art scaling filter developed by Hyllian, and now also the hqx filter developed by Maxim Stepin. Original source for the xBR implementation: http://git.videolan.org/gitweb.cgi/ffmpeg.git/?p=ffmpeg.git;a=blob;f=libavfilter/vf_xbr.c;h=5c14565b3a03f66f1e0296623dc91373aeac1ed0;hb=HEAD
- **LSWMS** [📁](./LSWMS) [🌐](https://github.com/GerHobbelt/LSWMS) -- LSWMS  (Line Segment detection using Weighted Mean-Shift): line segment detection with OpenCV, originally published by Marcos Nieto Doncel.
- **magsac** [📁](./magsac) [🌐](https://github.com/GerHobbelt/magsac) -- (MAGSAC++ had been included in OpenCV) the MAGSAC and MAGSAC++ algorithms for robust model fitting without using a single inlier-outlier threshold.
- **oidn-OpenImageDenoise** [📁](./oidn-OpenImageDenoise) [🌐](https://github.com/GerHobbelt/oidn) -- Intel® Open Image Denoise is an open source library of high-performance, high-quality denoising filters for images rendered with ray tracing.
- **olena** [📁](./olena) [🌐](https://github.com/GerHobbelt/olena) -- a platform dedicated to image processing.  At the moment it is mainly composed of a C++ library: Milena.  This library features many tools to easily perform image processing tasks.  Its main characteristic is its genericity: it allows to write an algorithm once and run it over many kinds of images (gray scale, color, 1D, 2D, 3D, ...).
- **OpenColorIO** [📁](./OpenColorIO) [🌐](https://github.com/GerHobbelt/OpenColorIO) -- OpenColorIO (OCIO) is a complete color management solution geared towards motion picture production with an emphasis on visual effects and computer animation. OCIO provides a straightforward and consistent user experience across all supporting applications while allowing for sophisticated back-end configuration options suitable for high-end production usage. OCIO is compatible with the Academy Color Encoding Specification (ACES) and is LUT-format agnostic, supporting many popular formats.
- **OpenCP** [📁](./OpenCP) [🌐](https://github.com/GerHobbelt/OpenCP) -- a library for computational photography.
- **opencv** [📁](./opencv) [🌐](https://github.com/GerHobbelt/opencv) -- OpenCV: Open Source Computer Vision Library
- **opencv_contrib** [📁](./opencv_contrib) [🌐](https://github.com/GerHobbelt/opencv_contrib) -- OpenCV's extra modules. This is where you'll find new, bleeding edge OpenCV module development.
- **opencv_extra** [📁](./opencv_extra) [🌐](https://github.com/GerHobbelt/opencv_extra) -- extra data for OpenCV: Open Source Computer Vision Library
- **OTB** [📁](./OTB) [🌐](https://github.com/GerHobbelt/OTB) -- Orfeo ToolBox (OTB) is an open-source project for state-of-the-art remote sensing. Built on the shoulders of the open-source geospatial community, it can process high resolution optical, multispectral and radar images at the terabyte scale. A wide variety of applications are available: from ortho-rectification or pansharpening, all the way to classification, SAR processing, and much more!
- **pdiff** [📁](./pdiff) [🌐](https://github.com/GerHobbelt/pdiff) -- perceptualdiff (pdiff): a program that compares two images using a perceptually based image metric.
- **Pillow** [📁](./Pillow) [🌐](https://github.com/GerHobbelt/Pillow) -- the friendly PIL (Python Imaging Library) fork by [Jeffrey A. Clark (Alex) and contributors](https://github.com/python-pillow/Pillow/graphs/contributors). PIL is the Python Imaging Library by Fredrik Lundh and Contributors. This library provides extensive file format support, an efficient internal representation, and fairly powerful image processing capabilities.
- **pillow-resize** [📁](./pillow-resize) [🌐](https://github.com/GerHobbelt/pillow-resize) -- a C++ porting of the resize method from the [Pillow](https://github.com/python-pillow/Pillow) python library. It is written in C++ using [OpenCV](https://opencv.org/) for matrix support. The main difference with respect to the [`resize`](https://docs.opencv.org/4.5.2/da/d54/group__imgproc__transform.html#ga47a974309e9102f5f08231edc7e7529d) method of OpenCV is the use of an anti aliasing filter, that is missing in OpenCV and could introduce some artifacts, in particular with strong down-sampling.
- **pixman** [📁](./pixman) [🌐](https://github.com/GerHobbelt/pixman) -- a library that provides low-level pixel manipulation features such as image compositing and trapezoid rasterization.
- **poisson_blend** [📁](./poisson_blend) [🌐](https://github.com/GerHobbelt/poisson_blend) -- a simple, readable implementation of Poisson Blending, that demonstrates the concepts explained in [my article](https://erkaman.github.io/posts/poisson_blending.html), seamlessly blending a source image and a target image, at some specified pixel location.
- **pylene** [📁](./pylene) [🌐](https://github.com/GerHobbelt/pylene) -- Pylene is a fork of [Olena/Milena](http://www.lrde.epita.fr/olena), an image processing library targeting genericity and efficiency. It provided mostly Mathematical Morphology building blocs for image processing pipelines.
- **radon-tf** [📁](./radon-tf) [🌐](https://github.com/GerHobbelt/radon-tf) -- simple implementation of the radon transform. Faster when using more than one thread to execute it. No inverse function is provided. CPU implementation only.
- **RandomizedRedundantDCTDenoising** [📁](./RandomizedRedundantDCTDenoising) [🌐](https://github.com/GerHobbelt/RandomizedRedundantDCTDenoising) -- demonstrates the paper S. Fujita, N. Fukushima, M. Kimura, and Y. Ishibashi, "Randomized redundant DCT: Efficient denoising by using random subsampling of DCT patches," Proc. Siggraph Asia, Technical Brief, Nov. 2015. In this paper, the DCT-based denoising is accelerated by using a randomized algorithm. The DCT is based on the fastest algorithm and is SIMD vectorized by using SSE. Some modifications improve denoising performance in term of PSNR. The code is 100x faster than the OpenCV's implementation (cv::xphoto::dctDenoising) for the paper. Optionally, we can use DHT (discrete Walsh–Hadamard transform) for fast computation instead of using DCT.
- **retinex** [📁](./retinex) [🌐](https://github.com/GerHobbelt/retinex) -- the Retinex algorithm for intrinsic image decomposition. The provided code computes image gradients, and assembles a sparse linear "Ax = b" system. The system is solved using Eigen.
- **rotate** [📁](./rotate) [🌐](https://github.com/GerHobbelt/rotate) -- provides several classic, commonly used and novel rotation algorithms (aka block swaps), which were documented since around 1981 up to 2021: three novel rotation algorithms were introduced in 2021, notably the [trinity rotation](https://github.com/scandum/rotate#Trinity-Rotation).
- **rotate_detection** [📁](./rotate_detection) [🌐](https://github.com/GerHobbelt/rotate_detection) -- angle rotation detection on scanned documents. Designed for embedding in systems using tesseract OCR. The detection algorithm based on [Rényi entropy](https://en.wikipedia.org/wiki/R%C3%A9nyi_entropy).
- **scantailor** [📁](./scantailor) [🌐](https://github.com/GerHobbelt/scantailor-advanced) -- [scantailor_advanced](https://github.com/4lex4/scantailor-advanced) is the [ScanTailor](https://github.com/scantailor/scantailor) version that merges the features of the *ScanTailor Featured* and *ScanTailor Enhanced* versions, brings new ones and fixes. ScanTailor is an interactive post-processing tool for scanned pages. It performs operations such as page splitting, deskewing, adding/removing borders, selecting content, ... and many others.
- **scilab** [📁](./scilab) [🌐](https://github.com/GerHobbelt/scilab) -- Scilab includes hundreds of mathematical functions. It has a high-level programming language allowing access to advanced data structures, 2-D and 3-D graphical functions.
- **simd-imgproc** [📁](./simd-imgproc) [🌐](https://github.com/GerHobbelt/Simd) -- the Simd Library is an image processing and machine learning library designed for C and C++ programmers. It provides many useful high performance algorithms for image processing such as: pixel format conversion, image scaling and filtration, extraction of statistic information from images, motion detection, object detection (HAAR and LBP classifier cascades) and classification, neural network.
  
  The algorithms are optimized, using different SIMD CPU extensions where available. The library supports following CPU extensions: SSE, AVX, AVX-512 and AMX for x86/x64, VMX(Altivec) and VSX(Power7) for PowerPC (big-endian), NEON for ARM.

- **tesslinesplit** [📁](./tesslinesplit) [🌐](https://github.com/GerHobbelt/tesslinesplit) -- a standalone program for using Tesseract's line segmentation algorithm to split up document images.
- **twain_library** [📁](./twain_library) [🌐](https://github.com/GerHobbelt/twain_library) -- the DTWAIN Library, **Version 5.x**, from Dynarithmic Software.  DTWAIN is an open source programmer's library that will allow applications to acquire images from TWAIN-enabled devices using a simple Application Programmer's Interface (API).
- **unblending** [📁](./unblending) [🌐](https://github.com/GerHobbelt/unblending) -- a C++ library for decomposing a target image into a set of semi-transparent layers associated with *advanced color-blend modes* (e.g., "multiply" and "color-dodge"). Output layers can be imported to Adobe Photoshop, Adobe After Effects, GIMP, Krita, etc. and are useful for performing complex edits that are otherwise difficult.
- **unpaper** [📁](./unpaper) [🌐](https://github.com/GerHobbelt/unpaper) -- a post-processing tool for scanned sheets of paper, especially for book pages that have been scanned from previously created photocopies.  The main purpose is to make scanned book pages better readable on screen after conversion to PDF. The program also tries to detect misaligned centering and rotation of ages and will automatically straighten each page by rotating it to the correct angle (a.k.a. deskewing).
- **VQMT** [📁](./VQMT) [🌐](https://github.com/GerHobbelt/VQMT) -- VQMT (Video Quality Measurement Tool) provides fast implementations of the following objective metrics:
  
  - **MS-SSIM**: Multi-Scale Structural Similarity,
  - **PSNR**: Peak Signal-to-Noise Ratio,
  - **PSNR-HVS**: Peak Signal-to-Noise Ratio taking into account Contrast Sensitivity Function (CSF),
  - **PSNR-HVS-M**: Peak Signal-to-Noise Ratio taking into account Contrast Sensitivity Function (CSF) and between-coefficient contrast masking of DCT basis functions.
  - **SSIM**: Structural Similarity,
  - **VIFp**: Visual Information Fidelity, pixel domain version
  
  The above metrics are implemented in C++ with the help of OpenCV and are based on the original Matlab implementations provided by their developers.

- **wavelib** [📁](./wavelib) [🌐](https://github.com/GerHobbelt/wavelib) -- C implementation of Discrete Wavelet Transform (DWT,SWT and MODWT), Continuous Wavelet transform (CWT) and Discrete Packet Transform ( Full Tree Decomposition and Best Basis DWPT).
- **wdenoise** [📁](./wdenoise) [🌐](https://github.com/GerHobbelt/wdenoise) -- Wavelet Denoising in ANSI C using empirical bayes thresholding and a host of other thresholding methods.
- **xbrzscale** [📁](./xbrzscale) [🌐](https://github.com/GerHobbelt/xbrzscale) -- xBRZ upscaling commandline tool. This tool allows you to scale your graphics with xBRZ algorithm, see https://en.wikipedia.org/wiki/Pixel-art_scaling_algorithms#xBR_family



### OCR: quality improvements, language detect, ...

- **Awesome-Document-Image-Rectification** [📁](./Awesome-Document-Image-Rectification) [🌐](https://github.com/GerHobbelt/Awesome-Document-Image-Rectification) -- a comprehensive list of awesome document image rectification methods based on deep learning.
- **Awesome-Image-Quality-Assessment** [📁](./Awesome-Image-Quality-Assessment) [🌐](https://github.com/GerHobbelt/Awesome-Image-Quality-Assessment) -- a comprehensive collection of IQA papers, datasets and codes. We also provide PyTorch implementations of mainstream metrics in [IQA-PyTorch](https://github.com/chaofengc/IQA-PyTorch)
- **Capture2Text** [📁](./Capture2Text) [🌐](https://github.com/GerHobbelt/Capture2Text) -- Linux CLI port of Capture2Text v4.5.1 (Ubuntu) - the OCR results from Capture2Text were generally better than standard Tesseract, so it seemed ideal to make this run on Linux.
- **chewing_text_cud** [📁](./chewing_text_cud) [🌐](https://github.com/GerHobbelt/chewing_text_cud) -- a text processing / filtering library for use in NLP/search/content analysis research pipelines.
- **EasyOCR** [📁](./EasyOCR) [🌐](https://github.com/GerHobbelt/EasyOCR) -- ready-to-use OCR with 80+ [supported languages](https://www.jaided.ai/easyocr) and all popular writing scripts including: Latin, Chinese, Arabic, Devanagari, Cyrillic, etc.
- **EasyOCR-cpp** [📁](./EasyOCR-cpp) [🌐](https://github.com/GerHobbelt/EasyOCR-cpp) -- custom C++ implementation of [EasyOCR](https://github.com/JaidedAI/EasyOCR). This C++ project implements the pre/post processing to run a OCR pipeline consisting of a text detector [CRAFT](https://arxiv.org/abs/1904.01941), and a CRNN based text recognizer. Unlike the EasyOCR python which is API based, this repo provides a set of classes to show how you can integrate OCR in any C++ program for maximum flexibility.
- **fastText** [📁](./fastText) [🌐](https://github.com/GerHobbelt/fastText) -- [fastText](https://fasttext.cc/) is a library for efficient learning of word representations and sentence classification. Includes language detection feeatures.
- **fribidi** [📁](./fribidi) [🌐](https://github.com/GerHobbelt/fribidi) -- GNU FriBidi: the Free Implementation of the [Unicode Bidirectional Algorithm]. One of the missing links stopping the penetration of free software in Middle East is the lack of support for the Arabic and Hebrew alphabets. In order to have proper Arabic and Hebrew support, the bidi algorithm needs to be implemented. It is our hope that this library will stimulate more free software in the Middle Eastern countries.
- **hunspell** [📁](./hunspell) [🌐](https://github.com/GerHobbelt/hunspell) -- a free spell checker and morphological analyzer library and command-line tool, designed for quick and high quality spell checking and correcting for languages with word-level writing system, including languages with rich morphology, complex word compounding and character encoding.
- **hunspell-dictionaries** [📁](./hunspell-dictionaries) [🌐](https://github.com/GerHobbelt/dictionaries) -- Collection of normalized and installable [hunspell][] dictionaries.
- **hunspell-hyphen** [📁](./hunspell-hyphen) [🌐](https://github.com/GerHobbelt/hyphen) -- hyphenation library to use converted TeX hyphenation patterns with hunspell.
- **IMGUR5K-Handwriting-Dataset** [📁](./IMGUR5K-Handwriting-Dataset) [🌐](https://github.com/GerHobbelt/IMGUR5K-Handwriting-Dataset) -- the IMGUR5K Handwriting Dataset for OCR/image preprocessing benchmarks.
- **InversePerspectiveMapping** [📁](./InversePerspectiveMapping) [🌐](https://github.com/GerHobbelt/InversePerspectiveMapping) -- C++ class for the computation of plane-to-plane homographies, aka bird's-eye view or IPM, particularly relevant in the field of Advanced Driver Assistance Systems.
- **ipa-dict** [📁](./ipa-dict) [🌐](https://github.com/GerHobbelt/ipa-dict) -- Monolingual wordlists with pronunciation information in IPA aims to provide a series of dictionaries consisting of wordlists with accompanying phonemic pronunciation information in International Phonetic Alphabet (IPA) transcription for as many words as possible in as many languages / dialects / variants as possible. The dictionary data is available in a number of human- and machine-readable formats, in order to make it as useful as possible for various other applications.
- **JamSpell** [📁](./JamSpell) [🌐](https://github.com/GerHobbelt/JamSpell) -- a spell checking library, which considers words surroundings (context) for better correction (**accuracy**) and is **fast** (near 5K words per second)
- **libpinyin** [📁](./libpinyin) [🌐](https://github.com/GerHobbelt/libpinyin) -- the libpinyin project aims to provide the algorithms core for intelligent sentence-based Chinese pinyin input methods.
- **libpostal** [📁](./libpostal) [🌐](https://github.com/GerHobbelt/libpostal) -- a C library for parsing/normalizing street addresses around the world using statistical NLP and open data. The goal of this project is to understand location-based strings in every language, everywhere.
- **libtextcat** [📁](./libtextcat) [🌐](https://github.com/GerHobbelt/libtextcat) -- text language detection
- **LSWMS** [📁](./LSWMS) [🌐](https://github.com/GerHobbelt/LSWMS) -- LSWMS  (Line Segment detection using Weighted Mean-Shift): line segment detection with OpenCV, originally published by Marcos Nieto Doncel.
- **marian** [📁](./marian) [🌐](https://github.com/GerHobbelt/marian) -- an efficient Neural Machine Translation framework written in pure C++ with minimal dependencies.
- **nuspell** [📁](./nuspell) [🌐](https://github.com/GerHobbelt/nuspell) -- a fast and safe spelling checker software program. It is designed for languages with rich morphology and complex word compounding. Nuspell is written in modern C++ and it supports Hunspell dictionaries.
- **ocreval** [📁](./ocreval) [🌐](https://github.com/GerHobbelt/ocreval) -- `ocreval` contains 17 tools for measuring the performance of and experimenting with OCR output. `ocreval` is a modern port of the [ISRI Analytic Tools for OCR Evaluation](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.216.9427&rep=rep1&type=pdf), with UTF-8 support and other improvements.
- **OTB** [📁](./OTB) [🌐](https://github.com/GerHobbelt/OTB) -- Orfeo ToolBox (OTB) is an open-source project for state-of-the-art remote sensing. Built on the shoulders of the open-source geospatial community, it can process high resolution optical, multispectral and radar images at the terabyte scale. A wide variety of applications are available: from ortho-rectification or pansharpening, all the way to classification, SAR processing, and much more!
- **pinyin** [📁](./pinyin) [🌐](https://github.com/GerHobbelt/pinyin) -- pīnyīn is a tool for converting Chinese characters to *pinyin*. It can be used for Chinese phonetic notation, sorting, and retrieval.
- **retinex** [📁](./retinex) [🌐](https://github.com/GerHobbelt/retinex) -- the Retinex algorithm for intrinsic image decomposition. The provided code computes image gradients, and assembles a sparse linear "Ax = b" system. The system is solved using Eigen.
- **scws-chinese-word-segmentation** [📁](./scws-chinese-word-segmentation) [🌐](https://github.com/GerHobbelt/scws) -- SCWS (Simple Chinese Word Segmentation) (i.e.: Simple Chinese Word Segmentation System). This is a mechanical Chinese word segmentation engine based on word frequency dictionary, which can basically correctly segment a whole paragraph of Chinese text into words. A word is the smallest morpheme unit in Chinese, but when writing, it does not separate words with spaces like English, so how to segment words accurately and quickly has always been a difficult problem in Chinese word segmentation. SCWS supports Chinese encoding includes `GBK`, `UTF-8`, etc.
  
  There are not many innovative elements in the word segmentation algorithm. It uses a word frequency dictionary collected by itself, supplemented by certain proper names, names of people, and place names. Basic word segmentation is achieved by identifying rules such as digital age. After small-scale testing, the accuracy is between 90% and 95%, which can basically satisfy some use in small search engines, keyword extraction and other occasions. The first prototype version was released in late 2005.

- **SheenBidi** [📁](./SheenBidi) [🌐](https://github.com/GerHobbelt/SheenBidi) -- implements Unicode Bidirectional Algorithm available at http://www.unicode.org/reports/tr9. It is a sophisticated implementation which provides the developers an easy way to use UBA in their applications.
- **SymSpell** [📁](./SymSpell) [🌐](https://github.com/GerHobbelt/SymSpell) -- spelling correction & fuzzy search: **1 million times faster** through Symmetric Delete spelling correction algorithm. The Symmetric Delete spelling correction algorithm reduces the complexity of edit candidate generation and dictionary lookup for a given Damerau-Levenshtein distance. It is six orders of magnitude faster ([than the standard approach with deletes + transposes + replaces + inserts](http://norvig.com/spell-correct.html)) and language independent.
- **SymspellCPP** [📁](./SymspellCPP) [🌐](https://github.com/GerHobbelt/SymspellCPP) -- a C++ port from https://github.com/wolfgarbe/SymSpell v6.5
- **tesslinesplit** [📁](./tesslinesplit) [🌐](https://github.com/GerHobbelt/tesslinesplit) -- a standalone program for using Tesseract's line segmentation algorithm to split up document images.
- **unpaper** [📁](./unpaper) [🌐](https://github.com/GerHobbelt/unpaper) -- a post-processing tool for scanned sheets of paper, especially for book pages that have been scanned from previously created photocopies.  The main purpose is to make scanned book pages better readable on screen after conversion to PDF. The program also tries to detect misaligned centering and rotation of ages and will automatically straighten each page by rotating it to the correct angle (a.k.a. deskewing).






























## Hash-like Filters & Fast Hashing for Hash Tables et al (64 bits and less, mostly)

These hashes are for other purposes, e.g. fast lookup in dictionaries, fast approximate hit testing and set reduction through fast filtering (think *bloom filter*). These *may* be **machine specific** (and some of them *are*): these are **never supposed to be used for encoding in storage or other means which crosses machine boundaries**: if you want to use them for a database index, that is fine *as long as* you don't expect that database index to be readable by any other machine than the one which produced and uses these hash numbers.

> As you can see from the list below, I went on a shopping spree, having fun with all the latest, including some *possibly insane* stuff that's only really useful for particular edge cases -- which we *hope to avoid ourselves, for a while at least*. Anyway, I'ld say we've got the motherlode here. Simple fun for those days when your brain-flag is at half-mast. Enjoy.

- **adaptiveqf** [📁](./adaptiveqf) [🌐](https://github.com/GerHobbelt/adaptiveqf) -- [Adaptive Quotient Filter (AQF)](https://arxiv.org/abs/2107.02866) supports approximate membership testing and counting the occurrences of items in a data set. Like other AMQs, the AQF has a chance for false positives during queries. However, the AQF has the ability to adapt to false positives after they have occurred so they are not repeated. At the same time, the AQF maintains the benefits of a quotient filter, as it is small and fast, has good locality of reference, scales out of RAM to SSD, and supports deletions, counting, resizing, merging, and highly concurrent access.
- **BBHash** [📁](./BBHash) [🌐](https://github.com/GerHobbelt/BBHash) -- Bloom-filter based minimal perfect hash function library.
  
  - **left-for-dead**; reason: has some GCC + Linux specific coding constructs; code isn't clean, which doesn't make my porting effort 'trustworthy'. Overall, if this is the alternative, we'll stick with `gperf`.

- **BCF-cuckoo-index** [📁](./BCF-cuckoo-index) [🌐](https://github.com/GerHobbelt/BCF) -- Better Choice Cuckoo Filter (BCF) is an efficient approximate set representation data structure. Different from the standard Cuckoo Filter (CF), BCF leverages the principle of the power of two choices to select the better candidate bucket during insertion. BCF reduces the average number of relocations of the state-of-the-art CF by 35%.
  
  - **left-for-dead**; reason: has some GCC + Linux specific coding constructs: intrinsics + Linux-only API calls, which increase the cost of porting.

- **bitrush-index** [📁](./bitrush-index) [🌐](https://github.com/GerHobbelt/bitrush-index) -- provides a serializable bitmap index able to index millions values/sec on a single thread. By default this library uses [ozbcbitmap] but if you want you can also use another compressed/uncrompressed bitmap. Only equality-queries (A = X) are supported.
- **bloom** [📁](./bloom) [🌐](https://github.com/GerHobbelt/bloom) -- C++ Bloom Filter Library, which offers optimal parameter selection based on expected false positive rate, union, intersection and difference operations between bloom filters and compression of in-use table (increase of false positive probability vs space).
- **cmph-hasher** [📁](./cmph-hasher) [🌐](https://github.com/GerHobbelt/cmph) -- C Minimal Perfect Hashing Library for both small and (very) large hash sets.
- **cqf** [📁](./cqf) [🌐](https://github.com/GerHobbelt/cqf) -- [A General-Purpose Counting Filter: Counting Quotient Filter (CQF)](https://dl.acm.org/doi/10.1145/3035918.3035963) supports approximate membership testing and counting the occurrences of items in a data set. This general-purpose AMQ is small and fast, has good locality of reference, scales out of RAM to SSD, and supports deletions, counting (even on skewed data sets), resizing, merging, and highly concurrent access.
- **crc32c** [📁](./crc32c) [🌐](https://github.com/GerHobbelt/crc32c) -- a few CRC32C implementations under an umbrella that dispatches to a suitable implementation based on the host computer's hardware capabilities. CRC32C is specified as the CRC that uses the iSCSI polynomial in [RFC 3720](https://tools.ietf.org/html/rfc3720#section-12.1). The polynomial was introduced by G. Castagnoli, S. Braeuer and M. Herrmann. CRC32C is used in software such as Btrfs, ext4, Ceph and leveldb.
- **CRoaring** [📁](./CRoaring) [🌐](https://github.com/GerHobbelt/CRoaring) -- portable Roaring bitmaps in C (and C++). Bitsets, also called bitmaps, are commonly used as fast data structures. Unfortunately, they can use too much memory. To compensate, we often use compressed bitmaps. Roaring bitmaps are compressed bitmaps which tend to outperform conventional compressed bitmaps such as WAH, EWAH or Concise. They are used by several major systems such as Apache Lucene and derivative systems such as Solr and Elasticsearch, etc.. The CRoaring library is used in several systems such as Apache Doris.
- **cuckoofilter** [📁](./cuckoofilter) [🌐](https://github.com/GerHobbelt/cuckoofilter) -- Cuckoo Filter is a Bloom filter replacement for approximated set-membership queries. While Bloom filters are well-known space-efficient data structures to serve queries like "if item x is in a set?", they do not support deletion. Their variances to enable deletion (like counting Bloom filters) usually require much more space. Cuckoo ﬁlters provide the ﬂexibility to add and remove items dynamically. A cuckoo filter is based on cuckoo hashing (and therefore named as cuckoo filter).  It is essentially a cuckoo hash table storing each key's fingerprint. Cuckoo hash tables can be highly compact, thus a cuckoo filter could use less space than conventional Bloom ﬁlters, for applications that require low false positive rates (< 3%).
- **cuckoo-index** [📁](./cuckoo-index) [🌐](https://github.com/GerHobbelt/cuckoo-index) -- Cuckoo Index (CI) is a lightweight secondary index structure that represents the many-to-many relationship between keys and partitions of columns in a highly space-efficient way. CI associates variable-sized fingerprints in a Cuckoo filter with compressed bitmaps indicating qualifying partitions. The problem of finding all partitions that possibly contain a given lookup key is traditionally solved by maintaining one filter (e.g., a Bloom filter) per partition that indexes all unique key values contained in this partition. To identify all partitions containing a key, we would need to probe all per-partition filters (which could be many). Depending on the storage medium, a false positive there can be very expensive. Furthermore, secondary columns typically contain many duplicates (also across partitions). Cuckoo Index (CI) addresses these drawbacks of per-partition filters. (It must know all keys at build time, though.)
- **DCF-cuckoo-index** [📁](./DCF-cuckoo-index) [🌐](https://github.com/GerHobbelt/DCF) -- the Dynamic Cuckoo Filter (DCF) is an efficient approximate membership test data structure. Different from the classic Bloom filter and its variants, DCF is especially designed for highly dynamic datasets and supports extending and reducing its capacity. The DCF design is the first to achieve both reliable item deletion and flexibly extending/reducing for approximate set representation and membership testing. DCF outperforms the state-of-the-art DBF designs in both speed and memory consumption.
- **emphf-hash** [📁](./emphf-hash) [🌐](https://github.com/GerHobbelt/emphf) -- an efficient external-memory algorithm for the construction of minimal perfect hash functions for large-scale key sets, focusing on speed and low memory usage (2.61 N bits plus a small constant factor).
- **EWAHBoolArray** [📁](./EWAHBoolArray) [🌐](https://github.com/GerHobbelt/EWAHBoolArray) -- a C++ compressed bitset data structure (also called bitset or bit vector). It supports several word sizes by a template parameter (16-bit, 32-bit, 64-bit). You should expect the 64-bit word-size to provide better performance, but higher memory usage, while a 32-bit word-size might compress a bit better, at the expense of some performance.
- **eytzinger** [📁](./eytzinger) [🌐](https://github.com/GerHobbelt/eytzinger) -- `fixed_eytzinger_map` is a free implementation of Eytzinger’s layout, in a form of an STL-like generic associative container, broadly compatible with a well-established access patterns. An Eytzinger map, or BFS(breadth-first search) map, places elements in a lookup order, which leads to a better memory locality. In practice, such container can outperform searching in sorted arrays, like `boost::flat_map`, due to less cache misses made in a lookup process. In comparison with RB-based trees, like `std::map`, lookup in Eytzinger map can be multiple times faster. Some comparison graphs are [given here](https://kazakov.life/2017/03/06/cache-friendly-associative-container/).
- **farmhash** [📁](./farmhash) [🌐](https://github.com/GerHobbelt/farmhash) -- FarmHash, a family of hash functions. FarmHash provides hash functions for strings and other data.  The functions mix the input bits thoroughly but are not suitable for cryptography.
- **fastfilter_cpp** [📁](./fastfilter_cpp) [🌐](https://github.com/GerHobbelt/fastfilter_cpp) -- Fast Filter: Fast approximate membership filter implementations (C++, research library)
- **fasthashing** [📁](./fasthashing) [🌐](https://github.com/GerHobbelt/fasthashing) -- a few very fast (almost) strongly universal hash functions over 32-bit strings, as described by the paper:  Owen Kaser and Daniel Lemire, Strongly universal string hashing is fast, Computer Journal (2014) 57 (11): 1624-1638. http://arxiv.org/abs/1202.4961
- **fifo_map** [📁](./fifo_map) [🌐](https://github.com/GerHobbelt/fifo_map) -- a FIFO-ordered associative container for C++. It has the same interface as `std::map`, it can be used as drop-in replacement.
- **flat_hash_map** [📁](./flat_hash_map) [🌐](https://github.com/GerHobbelt/flat_hash_map) -- a very fast hashtable.
- **flat.hpp** [📁](./flat.hpp) [🌐](https://github.com/GerHobbelt/flat.hpp) -- a library of flat vector-like based associative containers.
- **fph-table** [📁](./fph-table) [🌐](https://github.com/GerHobbelt/fph-table) -- the Flash Perfect Hash (FPH) library is a modern C++/17 implementation of a dynamic [perfect hash](https://en.wikipedia.org/wiki/Perfect_hash_function) table (no collisions for the hash), which makes the hash map/set extremely fast for lookup operations. We provide four container classes `fph::DynamicFphSet`,`fph::DynamicFphMap`,`fph::MetaFphSet` and `fph::MetaFphMap`. The APIs of these four classes are almost the same as those of `std::unordered_set` and `std::unordered_map`.
- **fsst** [📁](./fsst) [🌐](https://github.com/GerHobbelt/fsst) -- Fast Static Symbol Table (FSST): fast text compression that allows random access. See also the PVLDB paper https://github.com/cwida/fsst/raw/master/fsstcompression.pdf. FSST is a compression scheme focused on string/text data: it can compress strings from distributions with many different values (i.e. where dictionary compression will not work well). It allows *random-access* to compressed data: it is not block-based, so individual strings can be decompressed without touching the surrounding data in a compressed block. When compared to e.g. LZ4 (which is block-based), FSST further achieves similar decompression speed and compression speed, and better compression ratio. FSST encodes strings using a symbol table -- but it works on pieces of the string, as it maps "symbols" (1-8 byte sequences) onto "codes" (single-bytes). FSST can also represent a byte as an exception (255 followed by the original byte). Hence, compression transforms a sequence of bytes into a (supposedly shorter) sequence of codes or escaped bytes. These shorter byte-sequences could be seen as strings again and fit in whatever your program is that manipulates strings. An optional 0-terminated mode (like, C-strings) is also supported.
- **gperf-hash** [📁](./gperf-hash) [🌐](https://github.com/GerHobbelt/gperf) -- This is GNU gperf, a program that generates C/C++ perfect hash functions for sets of key words.
- **HashMap** [📁](./HashMap) [🌐](https://github.com/GerHobbelt/HashMap) -- a hash table mostly compatible with the C++11 *std::unordered_map* interface, but with much higher performance for many workloads. This hash table uses open addressing with linear probing and backshift deletion. Open addressing and linear probing minimizes memory allocations and achieves high cache efficiency. Backshift deletion keeps performance high for delete heavy workloads by not clobbering the hash table with tombestones.
- **highwayhash** [📁](./highwayhash) [🌐](https://github.com/GerHobbelt/highwayhash) -- Fast strong hash functions: SipHash/HighwayHash
- **hopscotch-map** [📁](./hopscotch-map) [🌐](https://github.com/GerHobbelt/hopscotch-map) -- a C++ implementation of a fast hash map and hash set using hopscotch hashing and open-addressing to resolve collisions. It is a cache-friendly data structure offering better performances than `std::unordered_map` in most cases and is closely similar to `google::dense_hash_map` while using less memory and providing more functionalities.
- **iceberghashtable** [📁](./iceberghashtable) [🌐](https://github.com/GerHobbelt/iceberghashtable) -- [IcebergDB: High Performance Hash Tables Through Stability and Low Associativity](https://arxiv.org/abs/2210.04068) is a fast, concurrent, and resizeable hash table implementation. It supports insertions, deletions and queries for 64-bit keys and values.
- **LDCF-hash** [📁](./LDCF-hash) [🌐](https://github.com/GerHobbelt/LDCF) -- The Logarithmic Dynamic Cuckoo Filter (LDCF) is an efficient approximate membership test data structure for dynamic big data sets. LDCF uses a novel multi-level tree structure and reduces the worst insertion and membership testing time from O(N) to O(1), while simultaneously reducing the memory cost of DCF as the cardinality of the set increases.
- **libbloom** [📁](./libbloom) [🌐](https://github.com/GerHobbelt/bloomd) -- a high-performance C server, exposing bloom filters and operations over them. The rate of false positives can be tuned to meet application demands, but reducing the error rate rapidly increases the amount of memory required for the representation. Example: Bloom filters enable you to represent 1MM items with a false positive rate of 0.1% in 2.4MB of RAM.
- **libbloomfilters** [📁](./libbloomfilters) [🌐](https://github.com/GerHobbelt/libbloomfilters) -- **libbf** is a C++11 library which implements various Bloom filters, including:
  
  - A^2
  - Basic
  - Bitwise
  - Counting
  - Spectral MI
  - Spectral RM
  - Stable

- **libCRCpp** [📁](./libCRCpp) [🌐](https://github.com/GerHobbelt/CRCpp) -- easy to use and fast C++ CRC library.
- **libCSD** [📁](./libCSD) [🌐](https://github.com/GerHobbelt/libCSD) -- a C++ library providing some different techniques for managing string dictionaries in compressed space. These approaches are inspired on the paper: "Compressed String Dictionaries", Nieves R. Brisaboa, Rodrigo Cánovas, Francisco Claude, Miguel A. Martínez-Prieto, and Gonzalo Navarro, 10th Symposium on Experimental Algorithms (SEA'2011), p.136-147, 2011.
- **libcuckoo** [📁](./libcuckoo) [🌐](https://github.com/GerHobbelt/libcuckoo) -- provides a high-performance, compact hash table that allows multiple concurrent reader and writer threads.
- **lshbox** [📁](./lshbox) [🌐](https://github.com/GerHobbelt/LSHBOX) -- a C++ Toolbox of Locality-Sensitive Hashing for Large Scale Image Retrieval. Locality-Sensitive Hashing (LSH) is an efficient method for large scale image retrieval, and it achieves great performance in approximate nearest neighborhood searching.
  
  LSHBOX is a simple but robust C++ toolbox that provides several LSH algrithms, in addition, it can be integrated into Python and MATLAB languages. The following LSH algrithms have been implemented in LSHBOX, they are:
  
  * LSH Based on Random Bits Sampling
  * Random Hyperplane Hashing
  * LSH Based on Thresholding
  * LSH Based on p-Stable Distributions
  * [Spectral Hashing](http://www.cs.huji.ac.il/~yweiss/SpectralHashing/) (SH)
  * [Iterative Quantization](http://www.unc.edu/~yunchao/itq.htm) (ITQ)
  * Double-Bit Quantization Hashing (DBQ)
  * K-means Based Double-Bit Quantization Hashing (KDBQ)

- **morton_filter** [📁](./morton_filter) [🌐](https://github.com/GerHobbelt/morton_filter) -- a [Morton filter](https://www.vldb.org/pvldb/vol11/p1041-breslow.pdf) -- a new approximate set membership data structure. A Morton filter is a modified cuckoo filter that is optimized for bandwidth-constrained systems. Morton filters use additional computation in order to reduce their off-chip memory traffic. Like a cuckoo filter, a Morton filter supports insertions, deletions, and lookup operations. It additionally adds high-throughput self-resizing, a feature of quotient filters, which allows a Morton filter to increase its capacity solely by leveraging its internal representation. This capability is in contrast to existing vanilla cuckoo filter implementations, which are static and thus require using a backing data structure that contains the full set of items to resize the filter. Morton filters can also be configured to use less memory than a cuckoo filter for the same error rate while simultaneously delivering insertion, deletion, and lookup throughputs that are, respectively, up to 15.5x, 1.3x, and 2.5x higher than a cuckoo filter. Morton filters in contrast to vanilla cuckoo filters do not require a power of two number of buckets but rather only a number that is a multiple of two. They also use fewer bits per item than a Bloom filter when the target false positive rate is less than around 1% to 3%.
- **mutable_rank_select** [📁](./mutable_rank_select) [🌐](https://github.com/GerHobbelt/mutable_rank_select) -- Rank/Select Queries over Mutable Bitmaps. Given a *mutable* bitmap `B[0..u)` where `n` bits are set, the *rank/select problem* asks for a data structure built from `B` that supports `rank(i)` (the number of bits set in `B[0..i]`, for 0 ≤ i < u), `select(i)` (the position of the i-th bit set, for 0 ≤ i < n), `flip(i)` (toggles `B[i]`, for 0 ≤ i < u) and `access(i)` (return `B[i]`, for 0 ≤ i < u). The input bitmap is partitioned into blocks and a tree index is built over them. The tree index implemented in the library is an optimized b-ary Segment-Tree with SIMD AVX2/AVX-512 instructions. You can test a block size of 256 or 512 bits, and various rank/select algorithms for the blocks such as broadword techniques, CPU intrinsics, and SIMD instructions.
- **nedtries** [📁](./nedtries) [🌐](https://github.com/GerHobbelt/nedtries) -- an in-place bitwise binary Fredkin trie algorithm which allows for near constant time insertions, deletions, finds, closest fit finds and iteration. On modern hardware it is approximately 50-100% faster than red-black binary trees, it handily beats even the venerable O(1) hash table for less than 3000 objects and it is barely slower than the hash table for 10000 objects. Past 10000 objects you probably ought to use a hash table though, and if you need nearest fit rather than close fit then red-black trees are still optimal.
- **OZBCBitmap** [📁](./OZBCBitmap) [🌐](https://github.com/GerHobbelt/OZBCBitmap) -- OZBC provides an efficent compressed bitmap to create bitmap indexes on high-cardinality columns. Bitmap indexes have traditionally been considered to work well for low-cardinality columns, which have a modest number of distinct values. The simplest and most common method of bitmap indexing on attribute A with K cardinality associates a bitmap with every attribute value V then the Vth bitmap rapresent the predicate A=V. This approach ensures an efficient solution for performing search but on high-cardinality attributes the size of the bitmap index increase dramatically. OZBC is a run-length-encoded hybrid compressed bitmap designed exclusively to create a bitmap indexes on L cardinality attributes where L>=16 and provide bitwise logical operations in running time complexity proportianl to the compressed bitmap size.
- **parallel-hashmap** [📁](./parallel-hashmap) [🌐](https://github.com/GerHobbelt/parallel-hashmap) -- a set of hash map implementations, as well as a btree alternative to std::map and std::set
- **phf-hash** [📁](./phf-hash) [🌐](https://github.com/GerHobbelt/phf) -- a simple implementation of the CHD perfect hash algorithm. CHD can generate perfect hash functions for very large key sets -- on the order of millions of keys -- in a very short time.
- **poplar-trie** [📁](./poplar-trie) [🌐](https://github.com/GerHobbelt/poplar-trie) -- a C++17 library of a memory-efficient associative array whose keys are strings. The data structure is based on a dynamic path-decomposed trie (DynPDT) described in the paper, Shunsuke Kanda, Dominik Köppl, Yasuo Tabei, Kazuhiro Morita, and Masao Fuketa: [Dynamic Path-decomposed Tries](https://arxiv.org/abs/1906.06015), *ACM Journal of Experimental Algorithmics (JEA)*, *25*(1): 1–28, 2020. Poplar-trie is a memory-efficient updatable associative array implementation which maps key strings to values of any type like `std::map<std::string,anytype>`. DynPDT is composed of two structures: dynamic trie and node label map (NLM) structures.
- **prvhash** [📁](./prvhash) [🌐](https://github.com/GerHobbelt/prvhash) -- PRVHASH is a hash function that generates a [uniform pseudo-random number sequence](https://en.wikipedia.org/wiki/Pseudorandom_number_generator) derived from the message. PRVHASH is conceptually similar (in the sense of using a pseudo-random number sequence as a hash) to [`keccak`](https://en.wikipedia.org/wiki/SHA-3) and [`RadioGatun`](https://en.wikipedia.org/wiki/RadioGat%C3%BAn) schemes, but is a completely different implementation of such concept. PRVHASH is both a ["randomness extractor"](https://en.wikipedia.org/wiki/Randomness_extractor) and an "extendable-output function" (XOF).
- **QALSH** [📁](./QALSH) [🌐](https://github.com/GerHobbelt/QALSH) -- QALSH: Query-Aware Locality-Sensitive Hashing, is a package for the problem of Nearest Neighbor Search (NNS) over high-dimensional Euclidean spaces. Given a set of data points and a query, the problem of NNS aims to find the nearest data point to the query. It is a very fundamental probelm and has wide applications in many data mining and machine learning tasks. This package provides the external memory implementations (disk-based) of QALSH and QALSH<sup>+</sup> for *c*-Approximate Nearest Neighbor Search (c-ANNS) under *l<sub>p</sub>* norm, where *0 < p ⩽ 2*. The internel memory version can be found [here](https://github.com/HuangQiang/QALSH_Mem).
- **QALSH_Mem** [📁](./QALSH_Mem) [🌐](https://github.com/GerHobbelt/QALSH_Mem) -- Memory Version of QALSH: **QALSH_Mem** is a package for the problem of Nearest Neighbor Search (NNS). Given a set of data points and a query, the problem of NNS aims to find the nearest data point to the query. It has wide applications in many data mining and machine learning tasks. This package provides the internal memory implementations of two LSH schemes QALSH and QALSH<sup>+</sup> for *c*-Approximate Nearest Neighbor Search (c-ANNS) under *l<sub>p</sub>* norm, where *0 < p ⩽ 2*. The external version of QALSH and QALSH<sup>+</sup> can be found [here](https://github.com/HuangQiang/QALSH).
- **RectangleBinPack** [📁](./RectangleBinPack) [🌐](https://github.com/GerHobbelt/RectangleBinPack) -- the source code used in "A Thousand Ways to Pack the Bin - A Practical Approach to Two-Dimensional Rectangle Bin Packing." The code can be
- **RoaringBitmap** [📁](./RoaringBitmap) [🌐](https://github.com/GerHobbelt/RoaringBitmap) -- Roaring bitmaps are compressed bitmaps which tend to outperform conventional compressed bitmaps such as WAH, EWAH or Concise. In some instances, roaring bitmaps can be hundreds of times faster and they often offer significantly better compression. They can even be faster than uncompressed bitmaps.
- **robin-hood-hashing** [📁](./robin-hood-hashing) [🌐](https://github.com/GerHobbelt/robin-hood-hashing) -- robin_hood unordered map & set.
- **robin-map** [📁](./robin-map) [🌐](https://github.com/GerHobbelt/robin-map) -- a C++ implementation of a fast hash map and hash set using open-addressing and linear robin hood hashing with backward shift deletion to resolve collisions.
- **rollinghashcpp** [📁](./rollinghashcpp) [🌐](https://github.com/GerHobbelt/rollinghashcpp) -- randomized rolling hash functions in C++. This is a set of C++ classes implementing various recursive n-gram hashing techniques, also called rolling hashing (http://en.wikipedia.org/wiki/Rolling_hash), including Randomized Karp-Rabin (sometimes called Rabin-Karp), Hashing by Cyclic Polynomials (also known as Buzhash) and Hashing by Irreducible Polynomials.
- **semimap** [📁](./semimap) [🌐](https://github.com/GerHobbelt/semimap) -- semi::static_map and semi::map: associative map containers with compile-time lookup! Normally, associative containers require some runtime overhead when looking up their values from a key. However, when the key is known at compile-time (for example, when the key is a literal) then this run-time lookup could technically be avoided. This is exactly what the goal of `semi::static_map` and `semi::map` is.
- **SipHash** [📁](./SipHash) [🌐](https://github.com/GerHobbelt/SipHash) -- SipHash is a family of pseudorandom functions (PRFs) optimized for speed on short messages. This is the reference C code of SipHash: portable, simple, optimized for clarity and debugging. SipHash was designed in 2012 by [Jean-Philippe Aumasson](https://aumasson.jp) and [Daniel J. Bernstein](https://cr.yp.to) as a defense against [hash-flooding DoS attacks](https://aumasson.jp/siphash/siphashdos_29c3_slides.pdf).
  
  It is *simpler and faster* on short messages than previous cryptographic algorithms, such as MACs based on universal hashing, *competitive in performance* with insecure non-cryptographic algorithms, such as [fhhash](https://github.com/cbreeden/fxhash), *cryptographically secure*, with no sign of weakness despite multiple [cryptanalysis](https://eprint.iacr.org/2019/865) [projects](https://eprint.iacr.org/2019/865) by leading cryptographers, *battle-tested*, with successful integration in OSs (Linux kernel, OpenBSD, FreeBSD, FreeRTOS), languages (Perl, Python, Ruby, etc.), libraries (OpenSSL libcrypto, Sodium, etc.) and applications (Wireguard, Redis, etc.).
  
  As a secure pseudorandom function (a.k.a. keyed hash function), SipHash can also be used as a secure message authentication code (MAC). But SipHash is *not a hash* in the sense of general-purpose key-less hash function such as BLAKE3 or SHA-3. SipHash should therefore always be used with a secret key in order to be secure.

- **slot_map** [📁](./slot_map) [🌐](https://github.com/GerHobbelt/slot_map) -- a Slot Map is a high-performance associative container with persistent unique keys to access stored values. Upon insertion, a key is returned that can be used to later access or remove the values. Insertion, removal, and access are all guaranteed to take `O(1)` time (best, worst, and average case). Great for storing collections of objects that need stable, safe references but have no clear ownership. The difference between a `std::unordered_map` and a `dod::slot_map` is that the slot map generates and returns the key when inserting a value. A key is always unique and will only refer to the value that was inserted.
- **smhasher** [📁](./smhasher) [🌐](https://github.com/GerHobbelt/smhasher) -- benchmark and collection of fast hash functions for symbol tables or hash tables.
- **sparsehash** [📁](./sparsehash) [🌐](https://github.com/GerHobbelt/sparsehash) -- fast (non-cryptographic) hash algorithms
- **sparsepp** [📁](./sparsepp) [🌐](https://github.com/GerHobbelt/sparsepp) -- a fast, memory efficient hash map for C++. Sparsepp is derived from Google's excellent [sparsehash](https://github.com/sparsehash/sparsehash) implementation.
- **spookyhash** [📁](./spookyhash) [🌐](https://github.com/GerHobbelt/spookyhash) -- a very fast non cryptographic hash function, [designed by Bob Jenkins](http://burtleburtle.net/bob/hash/spooky.html). It produces well-distributed 128-bit hash values for byte arrays of any length. It can produce 64-bit and 32-bit hash values too, at the same speed.
- **StronglyUniversalStringHashing** [📁](./StronglyUniversalStringHashing) [🌐](https://github.com/GerHobbelt/StronglyUniversalStringHashing) -- very fast [universal hash families](https://en.wikipedia.org/wiki/Universal_hashing) on strings.
- **tensorstore** [📁](./tensorstore) [🌐](https://github.com/GerHobbelt/tensorstore) -- TensorStore is an open-source C++ and Python software library designed for storage and manipulation of large multi-dimensional arrays.
- **wyhash** [📁](./wyhash) [🌐](https://github.com/GerHobbelt/wyhash) -- No hash function is perfect, but some are useful. `wyhash` and `wyrand` are the ideal 64-bit hash function and PRNG respectively: solid, portable, fastest (especially for short keys), salted (using a dynamic secret to avoid intended attack).
- **xor-and-binary-fuse-filter** [📁](./xor-and-binary-fuse-filter) [🌐](https://github.com/GerHobbelt/xor_singleheader) -- XOR and Binary Fuse Filter library: Bloom filters are used to quickly check whether an element is part of a set. Xor filters and binary fuse filters are faster and more concise alternative to Bloom filters. They are also smaller than cuckoo filters. They are used in [production systems](https://github.com/datafuselabs/databend).
- **xsg** [📁](./xsg) [🌐](https://github.com/GerHobbelt/xsg) -- XOR [BST](https://en.wikipedia.org/wiki/Binary_search_tree) implementations are related to the [XOR linked list](https://en.wikipedia.org/wiki/XOR_linked_list), a [doubly linked list](https://en.wikipedia.org/wiki/Doubly_linked_list) variant, from where we borrow the idea about how links between nodes are to be implemented. Modest resource requirements and simplicity make XOR [scapegoat trees](https://en.wikipedia.org/wiki/Scapegoat_tree) stand out of the [BST](https://en.wikipedia.org/wiki/Binary_search_tree) crowd. All iterators (except `end()` iterators), but not references and pointers, are invalidated, after inserting or erasing from this XOR [scapegoat tree](https://en.wikipedia.org/wiki/Scapegoat_tree) implementation. You can dereference invalidated iterators, if they were not erased, but you cannot iterate with them. `end()` iterators are constant and always valid, but dereferencing them results in undefined behavior.
- **xxHash** [📁](./xxHash) [🌐](https://github.com/GerHobbelt/xxHash) -- fast (non-cryptographic) hash algorithm
- ~~**circlehash** [📁](./circlehash) [🌐](https://github.com/GerHobbelt/circlehash) -- a family of non-cryptographic hash functions that pass every test in SMHasher.~~
  
  - **removed**; reason: written in Go; port to C/C++ is easy but just too much effort for too little gain; when we're looking for *fast* non-cryptographic hashes like this, we don't it to include 128-bit / 64-bit multiplications as those are generally slower than shift, add, xor. While this will surely be a nice hash, it doesn't fit our purposes.













### _delta features_ & other feature extraction (see Qiqqa research notes)

- **diffutils** [📁](./diffutils) [🌐](https://github.com/GerHobbelt/diffutils) -- the GNU diff, diff3, sdiff, and cmp utilities. Their features are a superset of the Unix features and they are significantly faster.
- **dtl-diff-template-library** [📁](./dtl-diff-template-library) [🌐](https://github.com/GerHobbelt/dtl) -- `dtl` is the diff template library written in C++.
- **google-diff-match-patch** [📁](./google-diff-match-patch) [🌐](https://github.com/GerHobbelt/diff-match-patch) -- Diff, Match and Patch offers robust algorithms to perform the operations required for synchronizing plain text.
  
  1. Diff:
     * Compare two blocks of plain text and efficiently return a list of differences.
  2. Match:
     * Given a search string, find its best fuzzy match in a block of plain text. Weighted for both accuracy and location.
  3. Patch:
     * Apply a list of patches onto plain text. Use best-effort to apply patch even when the underlying text doesn't match.
  
  Originally built in 2006 to power Google Docs.

- **HDiffPatch** [📁](./HDiffPatch) [🌐](https://github.com/GerHobbelt/HDiffPatch) -- a library and command-line tools for Diff & Patch between binary files or directories(folders); cross-platform; runs fast; create small delta/differential; support large files and limit memory requires when diff & patch.
- **libdist** [📁](./libdist) [🌐](https://github.com/GerHobbelt/distlib) -- string distance related functions (Damerau-Levenshtein, Jaro-Winkler, longest common substring & subsequence) implemented as SQLite run-time loadable extension, with UTF-8 support.
- **libharry** [📁](./libharry) [🌐](https://github.com/GerHobbelt/harry) -- Harry - A Tool for Measuring String Similarity. The tool supports several common distance and kernel functions for strings as well as some excotic similarity measures.  The focus of Harry lies on implicit similarity measures, that is, comparison functions that do not give rise to an explicit vector space.  Examples of such similarity measures are the Levenshtein distance, the Jaro-Winkler distance or the spectrum kernel.
- **open-vcdiff** [📁](./open-vcdiff) [🌐](https://github.com/GerHobbelt/open-vcdiff) -- an encoder and decoder for the VCDIFF format, as described in [RFC 3284](http://www.ietf.org/rfc/rfc3284.txt): The VCDIFF Generic Differencing and Compression Data Format.
- **rollinghashcpp** [📁](./rollinghashcpp) [🌐](https://github.com/GerHobbelt/rollinghashcpp) -- randomized rolling hash functions in C++. This is a set of C++ classes implementing various recursive n-gram hashing techniques, also called rolling hashing (http://en.wikipedia.org/wiki/Rolling_hash), including Randomized Karp-Rabin (sometimes called Rabin-Karp), Hashing by Cyclic Polynomials (also known as Buzhash) and Hashing by Irreducible Polynomials.
- **ssdeep** [📁](./ssdeep) [🌐](https://github.com/GerHobbelt/ssdeep) -- fuzzy hashing library, can be used to assist with identifying almost identical files using context triggered piecewise hashing.
- **xdelta** [📁](./xdelta) [🌐](https://github.com/GerHobbelt/xdelta) -- a C library and command-line tool for delta compression using VCDIFF/RFC 3284 streams.
- **yara-pattern-matcher** [📁](./yara-pattern-matcher) [🌐](https://github.com/GerHobbelt/yara) -- for automated and user-specified pattern recognition in custom document & metadata *cleaning* / processing tasks






### fuzzy matching

- **FM-fast-match** [📁](./FM-fast-match) [🌐](https://github.com/GerHobbelt/FAsT-Match) -- FAsT-Match: a port of the Fast Affine Template Matching algorithm (Simon Korman, Daniel Reichman, Gilad Tsur, Shai Avidan, CVPR 2013, Portland)
- **fuzzy-match** [📁](./fuzzy-match) [🌐](https://github.com/GerHobbelt/fuzzy-match) -- `FuzzyMatch-cli` is a commandline utility allowing to compile FuzzyMatch indexes and use them to lookup fuzzy matches. Okapi BM25 prefiltering is available on branch [`bm25`](https://github.com/SYSTRAN/fuzzy-match/tree/bm25).
- **libdist** [📁](./libdist) [🌐](https://github.com/GerHobbelt/distlib) -- string distance related functions (Damerau-Levenshtein, Jaro-Winkler, longest common substring & subsequence) implemented as SQLite run-time loadable extension, with UTF-8 support.
- **lshbox** [📁](./lshbox) [🌐](https://github.com/GerHobbelt/LSHBOX) -- a C++ Toolbox of Locality-Sensitive Hashing for Large Scale Image Retrieval. Locality-Sensitive Hashing (LSH) is an efficient method for large scale image retrieval, and it achieves great performance in approximate nearest neighborhood searching.
  
  LSHBOX is a simple but robust C++ toolbox that provides several LSH algrithms, in addition, it can be integrated into Python and MATLAB languages. The following LSH algrithms have been implemented in LSHBOX, they are:
  
  * LSH Based on Random Bits Sampling
  * Random Hyperplane Hashing
  * LSH Based on Thresholding
  * LSH Based on p-Stable Distributions
  * [Spectral Hashing](http://www.cs.huji.ac.il/~yweiss/SpectralHashing/) (SH)
  * [Iterative Quantization](http://www.unc.edu/~yunchao/itq.htm) (ITQ)
  * Double-Bit Quantization Hashing (DBQ)
  * K-means Based Double-Bit Quantization Hashing (KDBQ)

- **pdiff** [📁](./pdiff) [🌐](https://github.com/GerHobbelt/pdiff) -- perceptualdiff (pdiff): a program that compares two images using a perceptually based image metric.
- **rollinghashcpp** [📁](./rollinghashcpp) [🌐](https://github.com/GerHobbelt/rollinghashcpp) -- randomized rolling hash functions in C++. This is a set of C++ classes implementing various recursive n-gram hashing techniques, also called rolling hashing (http://en.wikipedia.org/wiki/Rolling_hash), including Randomized Karp-Rabin (sometimes called Rabin-Karp), Hashing by Cyclic Polynomials (also known as Buzhash) and Hashing by Irreducible Polynomials.
- **sdhash** [📁](./sdhash) [🌐](https://github.com/GerHobbelt/sdhash) -- a tool which allows two arbitrary blobs of data to be compared for similarity based on common strings of binary data. It is designed to provide quick results during triage and initial investigation phases.
- **ssdeep** [📁](./ssdeep) [🌐](https://github.com/GerHobbelt/ssdeep) -- fuzzy hashing library, can be used to assist with identifying almost identical files using context triggered piecewise hashing.
- **ssimulacra2** [📁](./ssimulacra2) [🌐](https://github.com/GerHobbelt/ssimulacra2) -- Structural SIMilarity Unveiling Local And Compression Related Artifacts metric developed by Jon Sneyers. SSIMULACRA 2 is based on the concept of the multi-scale structural similarity index measure (MS-SSIM), computed in a perceptually relevant color space, adding two other (asymmetric) error maps, and aggregating using two different norms.
- **VQMT** [📁](./VQMT) [🌐](https://github.com/GerHobbelt/VQMT) -- VQMT (Video Quality Measurement Tool) provides fast implementations of the following objective metrics:
  
  - **MS-SSIM**: Multi-Scale Structural Similarity,
  - **PSNR**: Peak Signal-to-Noise Ratio,
  - **PSNR-HVS**: Peak Signal-to-Noise Ratio taking into account Contrast Sensitivity Function (CSF),
  - **PSNR-HVS-M**: Peak Signal-to-Noise Ratio taking into account Contrast Sensitivity Function (CSF) and between-coefficient contrast masking of DCT basis functions.
  - **SSIM**: Structural Similarity,
  - **VIFp**: Visual Information Fidelity, pixel domain version
  
  The above metrics are implemented in C++ with the help of OpenCV and are based on the original Matlab implementations provided by their developers.

- **xor-and-binary-fuse-filter** [📁](./xor-and-binary-fuse-filter) [🌐](https://github.com/GerHobbelt/xor_singleheader) -- XOR and Binary Fuse Filter library: Bloom filters are used to quickly check whether an element is part of a set. Xor filters and binary fuse filters are faster and more concise alternative to Bloom filters. They are also smaller than cuckoo filters. They are used in [production systems](https://github.com/datafuselabs/databend).


















### similarity search

- **aho_corasick** [📁](./aho_corasick) [🌐](https://github.com/GerHobbelt/aho_corasick) -- a header only implementation of the Aho-Corasick pattern search algorithm invented by Alfred V. Aho and Margaret J. Corasick. It is a very efficient dictionary matching algorithm that can locate all search patterns against in input text simultaneously in O(n + m), with space complexity O(m) (where n is the length of the input text, and m is the combined length of the search patterns).
- **annoy** [📁](./annoy) [🌐](https://github.com/GerHobbelt/annoy) -- ANNOY (<b>A</b>pproximate <b>N</b>earest <b>N</b>eighbors <b>O</b>h <b>Y</b>eah) is a C++ library to search for points in space that are close to a given query point. It also creates large read-only file-based data structures that are `mmap`-ped into memory so that many processes may share the same data. ANNOY is almost as fast as the fastest libraries, but what really sets Annoy apart is: it has the ability to use static files as indexes, enabling you to share an index across processes. ANNOY also decouples creating indexes from loading them, so you can pass around indexes as files and map them into memory quickly. ANNOY tries to minimize its memory footprint: the indexes are quite small. This is useful when you want to find nearest neighbors using multiple CPU's. Spotify uses ANNOY for music recommendations.
- **brown-cluster** [📁](./brown-cluster) [🌐](https://github.com/GerHobbelt/brown-cluster) -- the Brown hierarchical word clustering algorithm. Runs in $O(N C^2)$, where $N$ is the number of word types and $C$ is the number of clusters. Algorithm by Brown, et al.: Class-Based n-gram Models of Natural Language, http://acl.ldc.upenn.edu/J/J92/J92-4003.pdf
- **cppsimhash** [📁](./cppsimhash) [🌐](https://github.com/GerHobbelt/cppsimhash) -- C++ simhash implementation for documents and an additional (prototype) simhash index for text documents. Simhash is a hashing technique that belongs to the LSH (Local Sensitive Hashing) algorithmic family. It was initially developed by Moses S. Charikar in 2002 and is described in detail in his [paper](http://www.cs.princeton.edu/courses/archive/spring04/cos598B/bib/CharikarEstim.pdf).
- **CTCWordBeamSearch** [📁](./CTCWordBeamSearch) [🌐](https://github.com/GerHobbelt/CTCWordBeamSearch) -- Connectionist Temporal Classification (CTC) decoder with dictionary and Language Model (LM).
- **DiskANN** [📁](./DiskANN) [🌐](https://github.com/GerHobbelt/DiskANN) -- DiskANN is a suite of scalable, accurate and cost-effective approximate nearest neighbor search algorithms for large-scale vector search that support real-time changes and simple filters.
- **DP_means** [📁](./DP_means) [🌐](https://github.com/GerHobbelt/DP_means) -- Dirichlet Process K-means is a bayesian non-parametric extension of the K-means algorithm based on small variance assymptotics (SVA) approximation of the Dirichlet Process Mixture Model.  B. Kulis and M. Jordan, "Revisiting k-means: New Algorithms via Bayesian Nonparametrics"
- **faiss** [📁](./faiss) [🌐](https://github.com/GerHobbelt/faiss) -- a library for efficient similarity search and clustering of dense vectors. It contains algorithms that search in sets of vectors of any size, up to ones that possibly do not fit in RAM. It also contains supporting code for evaluation and parameter tuning. Faiss is written in C++ with complete wrappers for Python/numpy. Some of the most useful algorithms are implemented on the GPU. It is developed primarily at Facebook AI Research.
- **falconn** [📁](./falconn) [🌐](https://github.com/GerHobbelt/FALCONN) -- FALCONN (FAst Lookups of Cosine and Other Nearest Neighbors) is a library with algorithms for the nearest neighbor search problem. The algorithms in FALCONN are based on [Locality-Sensitive Hashing](https://en.wikipedia.org/wiki/Locality-sensitive_hashing) (LSH), which is a popular class of methods for nearest neighbor search in high-dimensional spaces. The goal of FALCONN is to provide very efficient and well-tested implementations of LSH-based data structures.  Currently, FALCONN supports two LSH families for the [cosine similarity](https://en.wikipedia.org/wiki/Cosine_similarity): hyperplane LSH and cross polytope LSH. Both hash families are implemented with multi-probe LSH in order to minimize memory usage. Moreover, FALCONN is optimized for both dense and sparse data. Despite being designed for the cosine similarity, FALCONN can often be used for nearest neighbor search under the Euclidean distance or a maximum inner product search.
- **flann** [📁](./flann) [🌐](https://github.com/GerHobbelt/flann) -- FLANN (Fast Library for Approximate Nearest Neighbors) is a library for performing fast approximate nearest neighbor searches in high dimensional spaces. It contains a collection of algorithms we found to work best for nearest neighbor search and a system for automatically choosing the best algorithm and optimum parameters depending on the dataset.
- **flinng** [📁](./flinng) [🌐](https://github.com/GerHobbelt/FLINNG) -- Filters to Identify Near-Neighbor Groups (FLINNG) is a near neighbor search algorithm outlined in the paper [Practical Near Neighbor Search via Group Testing](https://arxiv.org/pdf/2106.11565.pdf).
- **FM-fast-match** [📁](./FM-fast-match) [🌐](https://github.com/GerHobbelt/FAsT-Match) -- FAsT-Match: a port of the Fast Affine Template Matching algorithm (Simon Korman, Daniel Reichman, Gilad Tsur, Shai Avidan, CVPR 2013, Portland)
- **fuzzy-match** [📁](./fuzzy-match) [🌐](https://github.com/GerHobbelt/fuzzy-match) -- `FuzzyMatch-cli` is a commandline utility allowing to compile FuzzyMatch indexes and use them to lookup fuzzy matches. Okapi BM25 prefiltering is available on branch [`bm25`](https://github.com/SYSTRAN/fuzzy-match/tree/bm25).
- **hnswlib** [📁](./hnswlib) [🌐](https://github.com/GerHobbelt/hnswlib) -- fast approximate nearest neighbor search. Header-only C++ HNSW implementation with python bindings.
- **ikd-Tree** [📁](./ikd-Tree) [🌐](https://github.com/GerHobbelt/ikd-Tree) -- an incremental k-d tree designed for robotic applications. The ikd-Tree incrementally updates a k-d tree with new coming points only, leading to much lower computation time than existing static k-d trees. Besides point-wise operations, the ikd-Tree supports several features such as box-wise operations and down-sampling that are practically useful in robotic applications.
- **imagehash** [📁](./imagehash) [🌐](https://github.com/GerHobbelt/imagehash) -- an image hashing library written in Python. ImageHash supports Average hashing, Perceptual hashing, Difference hashing, Wavelet hashing, HSV color hashing (colorhash) and Crop-resistant hashing. The image hash algorithms (average, perceptual, difference, wavelet) analyse the image structure on luminance (without color information). The color hash algorithm analyses the color distribution and black & gray fractions (without position information).
- **ivf-hnsw** [📁](./ivf-hnsw) [🌐](https://github.com/GerHobbelt/ivf-hnsw) -- Revisiting the Inverted Indices for Billion-Scale Approximate Nearest Neighbors. This is the code for the current state-of-the-art billion-scale nearest neighbor search system presented in the paper: [Revisiting the Inverted Indices for Billion-Scale Approximate Nearest Neighbors](http://openaccess.thecvf.com/content_ECCV_2018/html/Dmitry_Baranchuk_Revisiting_the_Inverted_ECCV_2018_paper.html) (Dmitry Baranchuk, Artem Babenko, Yury Malkov).
- **kgraph** [📁](./kgraph) [🌐](https://github.com/GerHobbelt/kgraph) -- a library for k-nearest neighbor (k-NN) graph construction and online k-NN search using a k-NN Graph as index. KGraph implements heuristic algorithms that are extremely generic and fast. KGraph works on abstract objects. The only assumption it makes is that a similarity score can be computed on any pair of objects, with a user-provided function.
- **K-Medoids-Clustering** [📁](./K-Medoids-Clustering) [🌐](https://github.com/GerHobbelt/K-Medoids-Clustering) -- K-medoids is a clustering algorithm related to K-means. In contrast to the K-means algorithm, K-medoids chooses datapoints as centers of the clusters. There are eight combinations of Initialization, Assignment and Update algorithms to achieve the best results in the given dataset. Also Clara algorithm approach is implemented.
- **libahocorasick** [📁](./libahocorasick) [🌐](https://github.com/GerHobbelt/pyahocorasick) -- a fast and memory efficient library for exact or approximate multi-pattern string search meaning that you can find multiple key strings occurrences at once in some input text.  The strings "index" can be built ahead of time and saved (as a pickle) to disk to reload and reuse later.  The library provides an `ahocorasick` Python module that you can use as a plain dict-like Trie or convert a Trie to an automaton for efficient Aho-Corasick search.
- **libharry** [📁](./libharry) [🌐](https://github.com/GerHobbelt/harry) -- Harry - A Tool for Measuring String Similarity. The tool supports several common distance and kernel functions for strings as well as some excotic similarity measures.  The focus of Harry lies on implicit similarity measures, that is, comparison functions that do not give rise to an explicit vector space.  Examples of such similarity measures are the Levenshtein distance, the Jaro-Winkler distance or the spectrum kernel.
- **libkdtree** [📁](./libkdtree) [🌐](https://github.com/GerHobbelt/libkdtree) -- libkdtree++ is a C++ template container implementation of k-dimensional space sorting, using a kd-tree.
- **libngt-ann** [📁](./libngt-ann) [🌐](https://github.com/GerHobbelt/NGT) -- Yahoo's Neighborhood Graph and Tree for Indexing High-dimensional Data. NGT provides commands and a library for performing high-speed approximate nearest neighbor searches against a large volume of data (several million to several 10 million items of data) in high dimensional vector data space (several ten to several thousand dimensions).
- **libsptag** [📁](./libsptag) [🌐](https://github.com/GerHobbelt/SPTAG) -- a library for fast approximate nearest neighbor search.  SPTAG (Space Partition Tree And Graph) is a library for large scale vector approximate nearest neighbor search scenario released by [Microsoft Research (MSR)](https://www.msra.cn/) and [Microsoft Bing](http://bing.com).
- **LMW-tree** [📁](./LMW-tree) [🌐](https://github.com/GerHobbelt/LMW-tree) -- LMW-tree: learning m-way tree is a generic template library written in C++ that implements several algorithms that use the m-way nearest neighbor tree structure to store their data. See the related [PhD thesis](http://eprints.qut.edu.au/75862/) for more details on m-way nn trees. The algorithms are primarily focussed on computationally efficient clustering. Clustering is an unsupervised machine learning process that finds interesting patterns in data. It places similar items into clusters and dissimilar items into different clusters. The data structures and algorithms can also be used for nearest neighbor search, supervised learning and other machine learning applications. The package includes EM-tree, K-tree, k-means, TSVQ, repeated k-means, clustering, random projections, random indexing, hashing, bit signatures. See the related [PhD thesis](http://eprints.qut.edu.au/75862/) for more details these algorithms and representations.
- **lshbox** [📁](./lshbox) [🌐](https://github.com/GerHobbelt/LSHBOX) -- a C++ Toolbox of Locality-Sensitive Hashing for Large Scale Image Retrieval. Locality-Sensitive Hashing (LSH) is an efficient method for large scale image retrieval, and it achieves great performance in approximate nearest neighborhood searching.
  
  LSHBOX is a simple but robust C++ toolbox that provides several LSH algrithms, in addition, it can be integrated into Python and MATLAB languages. The following LSH algrithms have been implemented in LSHBOX, they are:
  
  * LSH Based on Random Bits Sampling
  * Random Hyperplane Hashing
  * LSH Based on Thresholding
  * LSH Based on p-Stable Distributions
  * [Spectral Hashing](http://www.cs.huji.ac.il/~yweiss/SpectralHashing/) (SH)
  * [Iterative Quantization](http://www.unc.edu/~yunchao/itq.htm) (ITQ)
  * Double-Bit Quantization Hashing (DBQ)
  * K-means Based Double-Bit Quantization Hashing (KDBQ)

- **mrpt** [📁](./mrpt) [🌐](https://github.com/GerHobbelt/mrpt) -- MRPT is a lightweight and easy-to-use library for approximate nearest neighbor search with random projection. The index building has an integrated hyperparameter tuning algorithm, so the only hyperparameter required to construct the index is the target recall level! According to [our experiments](https://github.com/ejaasaari/mrpt-comparison/) MRPT is one of the fastest libraries for approximate nearest neighbor search.
  
  In the offline phase of the algorithm MRPT indexes the data with a collection of *random projection trees*. In the online phase the index structure allows us to answer queries in superior time. A detailed description of the algorithm with the time and space complexities, and the aforementioned comparisons can be found in [our article](https://www.cs.helsinki.fi/u/ttonteri/pub/bigdata2016.pdf) that was published in IEEE International Conference on Big Data 2016.
  
  The algorithm for automatic hyperparameter tuning is described in detail in our new article that will be presented in Pacific-Asia Conference on Knowledge Discovery and Data Mining 2019 ([arxiv preprint](https://arxiv.org/abs/1812.07484)).

- **n2-kNN** [📁](./n2-kNN) [🌐](https://github.com/GerHobbelt/n2) -- N2: Lightweight approximate **N**\ earest **N**\ eighbor algorithm library. N2 stands for two N's, which comes from \'Approximate ``N``\ earest ``N``\ eighbor Algorithm\'. Before N2, there has been other great approximate nearest neighbor libraries such as `Annoy` and `NMSLIB`. However, each of them had different strengths and weaknesses regarding usability, performance, etc. N2 has been developed aiming to bring the strengths of existing aKNN libraries and supplement their weaknesses.
- **nanoflann** [📁](./nanoflann) [🌐](https://github.com/GerHobbelt/nanoflann) -- a C++11 header-only library for building KD-Trees of datasets with different topologies: R^2, R^3 (point clouds), SO(2) and SO(3) (2D and 3D rotation groups). No support for approximate NN is provided. This library is a fork of the `flann` library by Marius Muja and David G. Lowe, and born as a child project of `MRPT`.
- **nanoflann_dbscan** [📁](./nanoflann_dbscan) [🌐](https://github.com/GerHobbelt/nanoflann_dbscan) -- a fast C++ implementation of the Density-Based Spatial Clustering of Applications with Noise (DBSCAN) algorithm.
- **nmslib** [📁](./nmslib) [🌐](https://github.com/GerHobbelt/nmslib) -- Non-Metric Space Library (NMSLIB) is an efficient cross-platform similarity search library and a toolkit for evaluation of similarity search methods. The core-library does not have any third-party dependencies. It has been gaining popularity recently. In particular, it has become a part of Amazon Elasticsearch Service. The goal of the project is to create an effective and comprehensive toolkit for searching in generic and non-metric spaces. Even though the library contains a variety of metric-space access methods, our main focus is on generic and approximate search methods, in particular, on methods for non-metric spaces. NMSLIB is possibly the first library with a principled support for non-metric space searching.
- **online-hnsw** [📁](./online-hnsw) [🌐](https://github.com/GerHobbelt/online-hnsw) -- Online HNSW: an implementation of the HNSW index for approximate nearest neighbors search for C++14, that supports incremental insertion and removal of elements.
- **pagerank** [📁](./pagerank) [🌐](https://github.com/GerHobbelt/pagerank) -- a [pagerank](http://www.ams.org/samplings/feature-column/fcarc-pagerank) implementation in C++ able to handle very big graphs.
- **pHash** [📁](./pHash) [🌐](https://github.com/GerHobbelt/pHash) -- the open source perceptual hash library. Potential applications include copyright protection, similarity search for media files, or even digital forensics. For example, YouTube could maintain a database of hashes that have been submitted by the major movie producers of movies to which they hold the copyright. If a user then uploads the same video to YouTube, the hash will be almost identical, and it can be flagged as a possible copyright violation. The audio hash could be used to automatically tag MP3 files with proper ID3 information, while the text hash could be used for plagiarism detection.
- **phash-gpl** [📁](./phash-gpl) [🌐](https://github.com/GerHobbelt/phash-gpl) -- pHash&trade; Perceptual Hashing Library is a collection of perceptual hashing algorithms for image, audo, video and text media.
- **pico_tree** [📁](./pico_tree) [🌐](https://github.com/GerHobbelt/pico_tree) -- a C++ header only library for fast nearest neighbor searches and range searches using a KdTree.
- **probminhash** [📁](./probminhash) [🌐](https://github.com/GerHobbelt/probminhash) -- a class of Locality-Sensitive Hash Algorithms for the (Probability) Jaccard Similarity
- **pyglass** [📁](./pyglass) [🌐](https://github.com/GerHobbelt/pyglass) -- a library for fast inference of graph index for approximate similarity search.
  
  - It's high performant.
  - No third-party library dependencies, does not rely on OpenBLAS / MKL or any other computing framework.
  - Sophisticated memory management and data structure design, very low memory footprint.
  - Supports multiple graph algorithms, like [**HNSW**](https://github.com/nmslib/hnswlib) and [**NSG**](https://github.com/ZJULearning/nsg).
  - Supports multiple hardware platforms, like **X86** and **ARM**. Support for **GPU** is on the way

- **sdhash** [📁](./sdhash) [🌐](https://github.com/GerHobbelt/sdhash) -- a tool which allows two arbitrary blobs of data to be compared for similarity based on common strings of binary data. It is designed to provide quick results during triage and initial investigation phases.
- **Shifted-Hamming-Distance** [📁](./Shifted-Hamming-Distance) [🌐](https://github.com/GerHobbelt/Shifted-Hamming-Distance) -- Shifted Hamming Distance (SHD) is an edit-distance based filter that can quickly check whether the minimum number of edits (including insertions, deletions and substitutions) between two strings is smaller than a user defined threshold **T** (the number of allowed edits between the two strings).  Testing if two stings differs by a small amount is a prevalent function that is used in many applications. One of its biggest usage, perhaps, is in DNA or protein mapping, where a short DNA or protein string is compared against an enormous database, in order to find similar matches. In such applications, a query string is usually compared against multiple candidate strings in the database. Only candidates that are similar to the query are considered **matches** and recorded.  SHD expands the basic Hamming distance computation, which only detects substitutions, into a full-fledged edit-distance filter, which counts not only substitutions but **insertions and deletions** as well.
- **simhash-cpp** [📁](./simhash-cpp) [🌐](https://github.com/GerHobbelt/simhash-cpp) -- Simhash Near-Duplicate Detection enables the identification of all fingerprints that are nearly identical to a query fingerprint. In this context, a fingerprint is an unsigned 64-bit integer. It also comes with an auxillary function designed to generate a fingerprint given a `char*` and a length. This fingeprint is generated with a tokenizer and a hash function (both of which may be provided as template parameters). Using a cyclic hash function, it then performs simhash on a moving window of tokens (as defined by the tokenizer).
- **spherical-k-means** [📁](./spherical-k-means) [🌐](https://github.com/GerHobbelt/spherical-k-means) -- the spherical K-means algorithm in Matlab and C++. The C++ version emphasizes a multithreaded implementation and features three ways of running the algorithm. It can be executed with a single-thread (same as the Matlab implementation), or using OpenMP or Galois (http://iss.ices.utexas.edu/?p=projects/galois). The purpose of this code is to optimize and compare the different parallel paradigms to maximize the efficiency of the algorithm.
- **ssdeep** [📁](./ssdeep) [🌐](https://github.com/GerHobbelt/ssdeep) -- fuzzy hashing library, can be used to assist with identifying almost identical files using context triggered piecewise hashing.
- **ssimulacra2** [📁](./ssimulacra2) [🌐](https://github.com/GerHobbelt/ssimulacra2) -- Structural SIMilarity Unveiling Local And Compression Related Artifacts metric developed by Jon Sneyers. SSIMULACRA 2 is based on the concept of the multi-scale structural similarity index measure (MS-SSIM), computed in a perceptually relevant color space, adding two other (asymmetric) error maps, and aggregating using two different norms.
- **tiny-dnn** [📁](./tiny-dnn) [🌐](https://github.com/GerHobbelt/tiny-dnn) -- a C++14 implementation of deep learning. It is suitable for deep learning on limited computational resource, embedded systems and IoT devices.
- **tlsh** [📁](./tlsh) [🌐](https://github.com/GerHobbelt/tlsh) -- TLSH - Trend Micro Locality Sensitive Hash - is a fuzzy matching library. Given a byte stream with a minimum length of 50 bytes TLSH generates a hash value which can be used for similarity comparisons. Similar objects will have similar hash values which allows for the detection of similar objects by comparing their hash values.  Note that the byte stream should have a sufficient amount of complexity.  For example, a byte stream of identical bytes will not generate a hash value.
- **usearch** [📁](./usearch) [🌐](https://github.com/GerHobbelt/usearch) -- smaller & faster Single-File Similarity Search Engine for vectors & texts.
- **VQMT** [📁](./VQMT) [🌐](https://github.com/GerHobbelt/VQMT) -- VQMT (Video Quality Measurement Tool) provides fast implementations of the following objective metrics:
  
  - **MS-SSIM**: Multi-Scale Structural Similarity,
  - **PSNR**: Peak Signal-to-Noise Ratio,
  - **PSNR-HVS**: Peak Signal-to-Noise Ratio taking into account Contrast Sensitivity Function (CSF),
  - **PSNR-HVS-M**: Peak Signal-to-Noise Ratio taking into account Contrast Sensitivity Function (CSF) and between-coefficient contrast masking of DCT basis functions.
  - **SSIM**: Structural Similarity,
  - **VIFp**: Visual Information Fidelity, pixel domain version
  
  The above metrics are implemented in C++ with the help of OpenCV and are based on the original Matlab implementations provided by their developers.

- **xgboost** [📁](./xgboost) [🌐](https://github.com/GerHobbelt/xgboost) -- an optimized distributed gradient boosting library designed to be highly efficient, flexible and portable. It implements machine learning algorithms under the Gradient Boosting framework. XGBoost provides a parallel tree boosting (also known as GBDT, GBM) that solve many data science problems in a fast and accurate way. The same code runs on major distributed environment (Kubernetes, Hadoop, SGE, MPI, Dask) and can solve problems beyond billions of examples.






















### image export, image / \[scanned] document import

- **brunsli** [📁](./brunsli) [🌐](https://github.com/GerHobbelt/brunsli) -- a lossless JPEG repacking library. Brunsli allows for a 22% decrease in file size while allowing the original JPEG to be recovered byte-by-byte.
- **CImg** [📁](./CImg) [🌐](https://github.com/GerHobbelt/CImg) -- a **small** C++ toolkit for **image processing**.
- **CxImage** [📁](./CxImage) [🌐](https://github.com/GerHobbelt/CxImage) -- venerated library for reading and creating many image file formats.
- **FFmpeg** [📁](./FFmpeg) [🌐](https://github.com/GerHobbelt/FFmpeg) -- a collection of libraries and tools to process multimedia content such as audio, video, subtitles and related metadata.
- **fpng** [📁](./fpng) [🌐](https://github.com/GerHobbelt/fpng) -- a very fast C++ .PNG image reader/writer for 24/32bpp images. fpng was written to see just how fast you can write .PNG's without sacrificing too much compression. The files written by fpng conform to the [PNG standard](https://www.w3.org/TR/PNG/), are readable using any PNG decoder, and load or validate successfully using libpng, wuffs, lodepng, stb_image, and [pngcheck](http://www.libpng.org/pub/png/apps/pngcheck.html). PNG files written using fpng can also be read using fpng faster than other PNG libraries, due to its explicit use of [Length-Limited Prefix Codes](https://create.stephan-brumme.com/length-limited-prefix-codes/) and an [optimized decoder](https://fastcompression.blogspot.com/2015/10/huffman-revisited-part-4-multi-bytes.html) that exploits the properties of these codes.
- **giflib-turbo** [📁](./giflib-turbo) [🌐](https://github.com/GerHobbelt/giflib-turbo) -- GIFLIB-Turbo is a faster drop-in replacement for GIFLIB. The original GIF codecs were written for a much different world and took great pains to use as little memory as possible and to accommodate a slow and unreliable input stream of data. Those constraints are no longer a problem for the vast majority of users and they were hurting the performance. Another feature holding back the performance of the original GIFLIB was that the original codec was designed to work with image data a line at a time and used a separate LZW dictionary to manage the strings of repeating symbols. My codec uses the output image as the dictionary; this allows much faster 'unwinding' of the codes since they are all stored in the right direction to just be copied to the new location.
- **grok-jpeg2000** [📁](./grok-jpeg2000) [🌐](https://github.com/GerHobbelt/grok) -- World's Leading Open Source JPEG 2000 Codec
  
  Features:
  
  * support for new **High Throughput JPEG 2000 (HTJ2K)** standard
  * fast random-access sub-image decoding using `TLM` and `PLT` markers
  * full encode/decode support for `ICC` colour profiles
  * full encode/decode support for `XML`,`IPTC`, `XMP` and `EXIF` meta-data
  * full encode/decode support for `monochrome`, `sRGB`, `palette`, `YCC`, `extended YCC`, `CIELab` and `CMYK` colour spaces
  * full encode/decode support for `JPEG`,`PNG`,`BMP`,`TIFF`,`RAW`,`PNM` and `PAM` image formats
  * full encode/decode support for 1-16 bit precision images

- **guetzli** [📁](./guetzli) [🌐](https://github.com/GerHobbelt/guetzli) -- a JPEG encoder that aims for excellent compression density at high visual quality. Guetzli-generated images are typically 20-30% smaller than images of equivalent quality generated by libjpeg. Guetzli generates only sequential (nonprogressive) JPEGs due to faster decompression speeds they offer.
- **icer_compression** [📁](./icer_compression) [🌐](https://github.com/GerHobbelt/icer_compression) -- implements the NASA ICER image compression algorithm as a C library. Said compression algorithm is a progressive, wavelet-based image compression algorithm designed to be resistant to data loss, making it suitable for use as the image compression algorithm when encoding images to be transmitted over unreliable delivery channels, such as those in satellite radio communications.
- **jbig2dec** [📁](../../thirdparty/jbig2dec) [🌐](https://github.com/GerHobbelt/jbig2dec) -- a decoder library and example utility implementing the JBIG2 bi-level image compression spec. Also known as ITU T.88 and ISO IEC 14492, and included by reference in Adobe's PDF version 1.4 and later.
- **jbig2enc** [📁](./jbig2enc) [🌐](https://github.com/GerHobbelt/jbig2enc) -- an encoder for JBIG2. JBIG2 encodes bi-level (1 bpp) images using a number of clever tricks to get better compression than G4. This encoder can:
  
  * Generate JBIG2 files, or fragments for embedding in PDFs
  * Generic region encoding
  * Perform symbol extraction, classification and text region coding
  * Perform refinement coding and,
  * Compress multipage documents
  
  It uses the Leptonica library.

- **jpeginfo** [📁](../../thirdparty/jpeginfo) [🌐](https://github.com/GerHobbelt/jpeginfo) -- prints information and tests integrity of JPEG/JFIF files.
- **JPEG-XL** [📁](./jpeg-xl) [🌐](https://github.com/GerHobbelt/jpeg-xl) -- JPEG XL reference implementation (encoder and decoder), called `libjxl`. JPEG XL was standardized in 2022 as [ISO/IEC 18181](https://jpeg.org/jpegxl/workplan.html). The [core codestream](doc/format_overview.md#codestream-features) is specified in 18181-1, the [file format](doc/format_overview.md#file-format-features) in 18181-2. [Decoder conformance](https://github.com/libjxl/conformance) is defined in 18181-3, and 18181-4 is the [reference software](https://github.com/libjxl/libjxl).
- **knusperli** [📁](./knusperli) [🌐](https://github.com/GerHobbelt/knusperli) -- Knusperli reduces blocking artifacts in decoded JPEG images by interpreting quantized DCT coefficients in the image data as an interval, rather than a fixed value, and choosing the value from that interval that minimizes discontinuities at block boundaries.
- **lerc** [📁](./lerc) [🌐](https://github.com/GerHobbelt/lerc) -- LERC (Limited Error Raster Compression) is an open-source image or raster format which supports rapid encoding and decoding for any pixel type (not just RGB or Byte). Users set the maximum compression error per pixel while encoding, so the precision of the original input image is preserved (within user defined error bounds).
- **libaom** [📁](./libaom) [🌐](https://github.com/GerHobbelt/libaom) -- AV1 Codec Library
- **libavif** [📁](./libavif) [🌐](https://github.com/GerHobbelt/libavif) -- a friendly, portable C implementation of the AV1 Image File Format, as described here: <https://aomediacodec.github.io/av1-avif/>
- **libde265** [📁](./libde265) [🌐](https://github.com/GerHobbelt/libde265) -- libde265 is an open source implementation of the h.265 video codec. It is written from scratch and has a plain C API to enable a simple integration into other software. libde265 supports WPP and tile-based multithreading and includes SSE optimizations. The decoder includes all features of the Main profile and correctly decodes almost all conformance streams (see [[wiki page](https://github.com/strukturag/libde265/wiki/Decoder-conformance)]).
- **libgd** [📁](./libgd) [🌐](https://github.com/GerHobbelt/libgd) -- GD is a library for the dynamic creation of images by programmers. GD has support for: WebP, JPEG, PNG, AVIF, HEIF, TIFF, BMP, GIF, TGA, WBMP, XPM.
- **libgif** [📁](./libgif) [🌐](https://github.com/GerHobbelt/libgif) -- a library for manipulating GIF files.
- **libheif** [📁](./libheif) [🌐](https://github.com/GerHobbelt/heif) -- High Efficiency Image File Format (HEIF) :: a visual media container format standardized by the Moving Picture Experts Group (MPEG) for storage and sharing of images and image sequences. It is based on the well-known ISO Base Media File Format (ISOBMFF) standard. HEIF Reader/Writer Engine is an implementation of HEIF standard in order to demonstrate its powerful features and capabilities.
- **libheif-alt** [📁](./libheif-alt) [🌐](https://github.com/GerHobbelt/libheif) -- an ISO/IEC 23008-12:2017 HEIF and AVIF (AV1 Image File Format) file format decoder and encoder. HEIF and AVIF are new image file formats employing HEVC (h.265) or AV1 image coding, respectively, for the best compression ratios currently possible.
- **libjpeg** [📁](../../thirdparty/libjpeg) [🌐](https://github.com/GerHobbelt/thirdparty-libjpeg) -- the Independent JPEG Group's JPEG software
- **libjpeg-turbo** [📁](./libjpeg-turbo) [🌐](https://github.com/GerHobbelt/libjpeg-turbo) -- a JPEG image codec that uses SIMD instructions to accelerate baseline JPEG compression and decompression on x86, x86-64, Arm, PowerPC, and MIPS systems, as well as progressive JPEG compression on x86, x86-64, and Arm systems.  On such systems, libjpeg-turbo is generally 2-6x as fast as libjpeg, all else being equal.  On other types of systems, libjpeg-turbo can still outperform libjpeg by a significant amount, by virtue of its highly-optimized Huffman coding routines.  In many cases, the performance of libjpeg-turbo rivals that of proprietary high-speed JPEG codecs.
- **libkra** [📁](./libkra) [🌐](https://github.com/GerHobbelt/libkra) -- a C++ library for importing Krita's KRA & KRZ formatted documents.
- **libpng** [📁](../../thirdparty/libpng) [🌐](https://github.com/GerHobbelt/libpng) -- LIBPNG: Portable Network Graphics support, official libpng repository.
- **libtiff** [📁](../../thirdparty/libtiff) [🌐](https://github.com/GerHobbelt/libtiff) -- TIFF Software Distribution
- **libwebp** [📁](./libwebp) [🌐](https://github.com/GerHobbelt/libwebp) -- a library to encode and decode images in WebP format.
- **mozjpeg** [📁](./mozjpeg) [🌐](https://github.com/GerHobbelt/mozjpeg) -- the Mozilla JPEG Encoder Project improves JPEG compression efficiency achieving higher visual quality and smaller file sizes at the same time. It is compatible with the JPEG standard, and the vast majority of the world's deployed JPEG decoders. MozJPEG is a patch for [libjpeg-turbo](https://github.com/libjpeg-turbo/libjpeg-turbo).
- **OpenEXR** [📁](./OpenEXR) [🌐](https://github.com/GerHobbelt/openexr) -- a high dynamic-range (HDR) image file format developed by Industrial Light & Magic (ILM) for use in computer imaging applications. OpenEXR is a lossless format for multi-layered images. Professional use. (I've used it before; nice file format.)
- **openexr-images** [📁](./openexr-images) [🌐](https://github.com/GerHobbelt/openexr-images) -- collection of images associated with the OpenEXR distribution.
- **OpenImageIO** [📁](./oiio) [🌐](https://github.com/GerHobbelt/oiio) -- Reading, writing, and processing images in a wide variety of file formats, using a format-agnostic API, aimed at VFX applications.
  
  Also includes:
  
  - an ImageCache class that transparently manages a cache so that it can access truly vast amounts of image data (tens of thousands of image files totaling multiple TB) very efficiently using only a tiny amount (tens of megabytes at most) of runtime memory.
  - ImageBuf and ImageBufAlgo functions, which constitute a simple class for storing and manipulating whole images in memory, plus a collection of the most useful computations you might want to do involving those images, including many image processing operations.
  
  The primary target audience for OIIO is VFX studios and developers of tools such as renderers, compositors, viewers, and other image-related software you'd find in a production pipeline.

- **openjpeg** [📁](../../thirdparty/openjpeg) [🌐](https://github.com/GerHobbelt/thirdparty-openjpeg) -- OPENJPEG Library and Applications -- OpenJPEG is an open-source JPEG 2000 codec written in C language. It has been developed in order to promote the use of [JPEG 2000](http://www.jpeg.org/jpeg2000), a still-image compression standard from the Joint Photographic Experts Group ([JPEG](http://www.jpeg.org)).  Since April 2015, it is officially recognized by ISO/IEC and ITU-T as a [JPEG 2000 Reference Software](http://www.itu.int/rec/T-REC-T.804-201504-I!Amd2).
- **pdiff** [📁](./pdiff) [🌐](https://github.com/GerHobbelt/pdiff) -- perceptualdiff (pdiff): a program that compares two images using a perceptually based image metric.
- **pmt-png-tools** [📁](./pmt-png-tools) [🌐](https://github.com/GerHobbelt/pmt) -- pngcrush and other PNG and MNG tools
- **psd_sdk** [📁](./psd_sdk) [🌐](https://github.com/GerHobbelt/psd_sdk) -- a C++ library that directly reads Photoshop PSD files. The library supports:
  
  * Groups
  * Nested layers
  * Smart Objects
  * User and vector masks
  * Transparency masks and additional alpha channels
  * 8-bit, 16-bit, and 32-bit data in grayscale and RGB color mode
  * All compression types known to Photoshop
  
  Additionally, limited export functionality is also supported.

- **qoi** [📁](./qoi) [🌐](https://github.com/GerHobbelt/qoi) -- QOI: the “Quite OK Image Format” for fast, lossless image compression, single-file MIT licensed library for C/C++. Compared to stb_image and stb_image_write QOI offers 20x-50x faster encoding, 3x-4x faster decoding and 20% better compression. It's also stupidly simple and fits in about 300 lines of C.
- **tinyexr** [📁](./tinyexr) [🌐](https://github.com/GerHobbelt/tinyexr) -- Tiny OpenEXR: `tinyexr` is a small, single header-only library to load and save OpenEXR (.exr) images.
- **twain_library** [📁](./twain_library) [🌐](https://github.com/GerHobbelt/twain_library) -- the DTWAIN Library, **Version 5.x**, from Dynarithmic Software.  DTWAIN is an open source programmer's library that will allow applications to acquire images from TWAIN-enabled devices using a simple Application Programmer's Interface (API).
- **Imath** [🌐](https://github.com/AcademySoftwareFoundation/Imath) -- float16 support lib for OpenEXR format
  
  - **optional**; reason: considered *overkill* for the projects I'm currently involved in, including Qiqqa. Those can use [Apache Tika](https://tika.apache.org/), [ImageMagick](https://imagemagick.org/) or other thirdparty pipelines to convert to & from supported formats.

- **OpenImageIO** [🌐](https://github.com/OpenImageIO/oiio) -- a library for reading, writing, and processing images in a wide variety of file formats, using a format-agnostic API, aimed at VFX applications.
  
  - **tentative/pending**; reason: considered nice & cool but still *overkill*. Qiqqa tooling can use [Apache Tika](https://tika.apache.org/), [ImageMagick](https://imagemagick.org/) or other thirdparty pipelines to convert to & from supported formats.

- ~~**cgohlke::imagecodecs** [🌐](https://github.com/cgohlke/imagecodecs) (*not included; see also DICOM slot above*)~~
- ~~[DICOM to NIfTI](https://github.com/rordenlab/dcm2niix) (*not included; see also DICOM slot above*)~~
- ~~**GDCM-Grassroots-DICOM** [🌐](https://github.com/malaterre/GDCM)~~
  
  - **removed**; reason: not a frequently used format; the filter codes can be found in other libraries. *Overkill*. Qiqqa tooling can use [Apache Tika](https://tika.apache.org/), [ImageMagick](https://imagemagick.org/) or other thirdparty pipelines to convert to & from supported formats.













	



### Distance Metrics, Image Quality Metrics, Image Comparison

- **edit-distance** [📁](./edit-distance) [🌐](https://github.com/GerHobbelt/editdistance) -- a fast implementation of the edit distance (Levenshtein distance). The algorithm used in this library is proposed by _Heikki Hyyrö, "Explaining and extending the bit-parallel approximate string matching algorithm of Myers", (2001) <http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.19.7158&rep=rep1&type=pdf>_.
- **figtree** [📁](./figtree) [🌐](https://github.com/GerHobbelt/figtree) -- FIGTree is a library that provides a C/C++ and MATLAB interface for speeding up the computation of the Gauss Transform.
- **flip** [📁](./flip) [🌐](https://github.com/GerHobbelt/flip) -- ꟻLIP: A Tool for Visualizing and Communicating Errors in Rendered Images, implements the [LDR-ꟻLIP](https://research.nvidia.com/publication/2020-07_FLIP) and [HDR-ꟻLIP](https://research.nvidia.com/publication/2021-05_HDR-FLIP) image error metrics.
- **glfw** [📁](./glfw) [🌐](https://github.com/GerHobbelt/glfw) -- GLFW is an Open Source, multi-platform library for OpenGL, OpenGL ES and Vulkan application development.  It provides a simple, platform-independent API for creating windows, contexts and surfaces, reading input, handling events, etc.
- **imagedistance** [📁](./imagedistance) [🌐](https://github.com/GerHobbelt/imagedistance) -- given two images, calculate their distance in several criteria.
- **libdip** [📁](./libdip) [🌐](https://github.com/GerHobbelt/diplib) -- **[*DIPlib*](https://diplib.org/diplib-docs/)** is a C++ library for quantitative image analysis.
- **libxcam** [📁](./libxcam) [🌐](https://github.com/GerHobbelt/libxcam) -- libXCam is a project for extended camera features and focus on image quality improvement and video analysis. There are lots features supported in image pre-processing, image post-processing and smart analysis. This library makes GPU/CPU/ISP working together to improve image quality. OpenCL is used to improve performance in different platforms.
- **magsac** [📁](./magsac) [🌐](https://github.com/GerHobbelt/magsac) -- (MAGSAC++ had been included in OpenCV) the MAGSAC and MAGSAC++ algorithms for robust model fitting without using a single inlier-outlier threshold.
- **mecab** [📁](./mecab) [🌐](https://github.com/GerHobbelt/mecab) -- MeCab (Yet Another Part-of-Speech and Morphological Analyzer) is a high-performance morphological analysis engine, designed to be independent of languages, dictionaries, and corpora, using Conditional Random Fields ((CRF)[http://www.cis.upenn.edu/~pereira/papers/crf.pdf]) to estimate the parameters.
- **pg_similarity** [📁](./pg_similarity) [🌐](https://github.com/GerHobbelt/pg_similarity) -- **pg\_similarity** is an extension to support similarity queries on [PostgreSQL](http://www.postgresql.org/). The implementation is tightly integrated in the RDBMS in the sense that it defines operators so instead of the traditional operators (`=` and `<>`) you can use `~~~` and `~!~` (any of these operators represents a similarity function).
- **poisson_blend** [📁](./poisson_blend) [🌐](https://github.com/GerHobbelt/poisson_blend) -- a simple, readable implementation of Poisson Blending, that demonstrates the concepts explained in [my article](https://erkaman.github.io/posts/poisson_blending.html), seamlessly blending a source image and a target image, at some specified pixel location.
- **polatory** [📁](./polatory) [🌐](https://github.com/GerHobbelt/polatory) -- a fast and memory-efficient framework for RBF (radial basis function) interpolation. Polatory can perform kriging prediction via RBF interpolation (dual kriging). Although different terminologies are used, both methods produce the same results.
- **radon-tf** [📁](./radon-tf) [🌐](https://github.com/GerHobbelt/radon-tf) -- simple implementation of the radon transform. Faster when using more than one thread to execute it. No inverse function is provided. CPU implementation only.
- **RapidFuzz** [📁](./RapidFuzz) [🌐](https://github.com/GerHobbelt/RapidFuzz) -- rapid fuzzy string matching in Python and C++ using the Levenshtein Distance.
- **rotate** [📁](./rotate) [🌐](https://github.com/GerHobbelt/rotate) -- provides several classic, commonly used and novel rotation algorithms (aka block swaps), which were documented since around 1981 up to 2021: three novel rotation algorithms were introduced in 2021, notably the [trinity rotation](https://github.com/scandum/rotate#Trinity-Rotation).
- **Shifted-Hamming-Distance** [📁](./Shifted-Hamming-Distance) [🌐](https://github.com/GerHobbelt/Shifted-Hamming-Distance) -- Shifted Hamming Distance (SHD) is an edit-distance based filter that can quickly check whether the minimum number of edits (including insertions, deletions and substitutions) between two strings is smaller than a user defined threshold **T** (the number of allowed edits between the two strings).  Testing if two stings differs by a small amount is a prevalent function that is used in many applications. One of its biggest usage, perhaps, is in DNA or protein mapping, where a short DNA or protein string is compared against an enormous database, in order to find similar matches. In such applications, a query string is usually compared against multiple candidate strings in the database. Only candidates that are similar to the query are considered **matches** and recorded.  SHD expands the basic Hamming distance computation, which only detects substitutions, into a full-fledged edit-distance filter, which counts not only substitutions but **insertions and deletions** as well.
- **vmaf** [📁](./vmaf) [🌐](https://github.com/GerHobbelt/vmaf) -- VMAF (Video Multi-Method Assessment Fusion) is an [Emmy-winning](https://theemmys.tv/) perceptual video quality assessment algorithm developed by Netflix. It also provides a set of tools that allows a user to train and test a custom VMAF model.
- **ZLMediaKit** [📁](./ZLMediaKit) [🌐](https://github.com/GerHobbelt/ZLMediaKit) -- a high-performance operational-level streaming media service framework based on C++11, supporting multiple protocols (RTSP/RTMP/HLS/HTTP-FLV/WebSocket-FLV/GB28181/HTTP-TS/WebSocket-TS/HTTP-fMP4/WebSocket-fMP4/MP4/WebRTC) and protocol conversion.
  
  This extension supports a set of similarity algorithms. The most known algorithms are covered by this extension. You must be aware that each algorithm is suited for a specific domain. The following algorithms are provided.
  
  - Cosine Distance;
  - Dice Coefficient;
  - Euclidean Distance;
  - Hamming Distance;
  - Jaccard Coefficient;
  - Jaro Distance;
  - Jaro-Winkler Distance;
  - L1 Distance (as known as City Block or Manhattan Distance);
  - Levenshtein Distance;
  - Matching Coefficient;
  - Monge-Elkan Coefficient;
  - Needleman-Wunsch Coefficient;
  - Overlap Coefficient;
  - Q-Gram Distance;
  - Smith-Waterman Coefficient;
  - Smith-Waterman-Gotoh Coefficient;
  - Soundex Distance.















## metadata & text (OCR et al) -- language detect, suggesting fixes, ...

- **cld1-language-detect** [📁](./cld1-language-detect) [🌐](https://github.com/GerHobbelt/cld) -- the CLD (Compact Language Detection) library, extracted from the source code for Google's Chromium library. CLD1 probabilistically detects languages in Unicode UTF-8 text.
- **cld2-language-detect** [📁](./cld2-language-detect) [🌐](https://github.com/GerHobbelt/cld2) -- CLD2 probabilistically detects over 80 languages in Unicode UTF-8 text, either plain text or HTML/XML. For mixed-language input, CLD2 returns the top three languages found and their approximate percentages of the total text bytes.  Optionally, it also returns a vector of text spans with the language of each identified. The design target is web pages of at least 200 characters (about two sentences); CLD2 is not designed to do well on very short text.
- **cld3-language-detect** [📁](./cld3-language-detect) [🌐](https://github.com/GerHobbelt/cld3) -- CLD3 is a neural network model for language identification. The inference code extracts character ngrams from the input text and computes the fraction of times each of them appears. The model outputs BCP-47-style language codes, shown in the table below. For some languages, output is differentiated by script. Language and script names from Unicode CLDR.
- **compact_enc_det** [📁](./compact_enc_det) [🌐](https://github.com/GerHobbelt/compact_enc_det) -- Compact Encoding Detection (CED for short) is a library written in C++ that scans given raw bytes and detect the most likely text encoding.
- **cppjieba** [📁](./cppjieba) [🌐](https://github.com/GerHobbelt/cppjieba) -- the C++ version of the Chinese "Jieba" project:
  
  - Supports loading a custom user dictionary, using the '|' separator when multipathing or the ';' separator for separate, multiple, dictionaries.
  - Supports 'utf8' encoding.
  - The project comes with a relatively complete unit test, and the stability of the core function Chinese word segmentation (utf8) has been tested by the online environment.

- **detect-character-encoding** [📁](./detect-character-encoding) [🌐](https://github.com/GerHobbelt/detect-character-encoding) -- detect character encoding using [ICU](http://site.icu-project.org).  **Tip:** If you don’t need ICU in particular, consider using [ced](https://github.com/sonicdoe/ced), which is based on Google’s lighter [compact_enc_det](https://github.com/google/compact_enc_det) library.
- **enca** [📁](./enca) [🌐](https://github.com/GerHobbelt/enca) -- Enca (Extremely Naive Charset Analyser) consists of two main components: `libenca`, an encoding detection library, and `enca`, a command line frontend, integrating libenca and several charset conversion libraries and tools (GNU `recode`, UNIX98 `iconv`, perl `Unicode::Map`, `cstocs`).
- **fastBPE** [📁](./fastBPE) [🌐](https://github.com/GerHobbelt/fastBPE) -- text tokenization / ngrams
- **fastText** [📁](./fastText) [🌐](https://github.com/GerHobbelt/fastText) -- [fastText](https://fasttext.cc/) is a library for efficient learning of word representations and sentence classification.
- **glyph_name** [📁](./glyph_name) [🌐](https://github.com/GerHobbelt/glyph_name) -- a library for computing Unicode sequences from glyph names according to the Adobe Glyph Naming convention: https://github.com/adobe-type-tools/agl-specification
- **libchardet** [📁](./libchardet) [🌐](https://github.com/GerHobbelt/libchardet) -- is based on Mozilla Universal Charset Detector library and, detects the character set used to encode data.
- **libchopshop** [📁](./libchopshop) [🌐](https://github.com/GerHobbelt/libchopshop) -- NLP/text processing with automated stop word detection and stemmer-based filtering. This library / toolkit is engineered to be able to provide **both** of the (often more or less disparate) n-gram token streams / vectors required for (1) initializing / training FTS databases, neural nets, etc. and (2) executing effective queries / matches on these engines.
- **libcppjieba** [📁](./libcppjieba) [🌐](https://github.com/GerHobbelt/libcppjieba) -- source code extracted from the [CppJieba] project to form a separate project, making it easier to understand and use.
- **libiconv** [📁](./libiconv) [🌐](https://github.com/GerHobbelt/libiconv-win-build) -- provides conversion between many platform, language or country dependent character encodings to & from Unicode. This library provides an `iconv()` implementation, for use on systems which don't have one, or whose implementation cannot convert from/to Unicode. It provides support for the encodings: European languages (ASCII, ISO-8859-{1,2,3,4,5,7,9,10,13,14,15,16}, KOI8-R, KOI8-U, KOI8-RU, CP{1250,1251,1252,1253,1254,1257}, CP{850,866,1131}, Mac{Roman,CentralEurope,Iceland,Croatian,Romania}, Mac{Cyrillic,Ukraine,Greek,Turkish}, Macintosh), Semitic languages (ISO-8859-{6,8}, CP{1255,1256}, CP862, Mac{Hebrew,Arabic}), Japanese (EUC-JP, SHIFT_JIS, CP932, ISO-2022-JP, ISO-2022-JP-2, ISO-2022-JP-1, ISO-2022-JP-MS), Chinese (EUC-CN, HZ, GBK, CP936, GB18030, EUC-TW, BIG5, CP950, BIG5-HKSCS, BIG5-HKSCS:2004, BIG5-HKSCS:2001, BIG5-HKSCS:1999, ISO-2022-CN, ISO-2022-CN-EXT), Korean (EUC-KR, CP949, ISO-2022-KR, JOHAB), Armenian (ARMSCII-8), Georgian (Georgian-Academy, Georgian-PS), Tajik (KOI8-T), Kazakh (PT154, RK1048), Thai (ISO-8859-11, TIS-620, CP874, MacThai), Laotian (MuleLao-1, CP1133), Vietnamese (VISCII, TCVN, CP1258), Platform specifics (HP-ROMAN8, NEXTSTEP), Full Unicode (UTF-8, UCS-2, UCS-2BE, UCS-2LE, UCS-4, UCS-4BE, UCS-4LE, UTF-16, UTF-16BE, UTF-16LE, UTF-32, UTF-32BE, UTF-32LE, UTF-7, C99, JAVA, UCS-2-INTERNAL, UCS-4-INTERNAL). It also provides support for a few extra encodings: European languages (CP{437,737,775,852,853,855,857,858,860,861,863,865,869,1125}), Semitic languages (CP864), Japanese (EUC-JISX0213, Shift_JISX0213, ISO-2022-JP-3), Chinese (BIG5-2003), Turkmen (TDS565), Platform specifics (ATARIST, RISCOS-LATIN1). It has also some limited support for transliteration, i.e. when a character cannot be represented in the target character set, it can be approximated through one or several similarly looking characters.
- **libpinyin** [📁](./libpinyin) [🌐](https://github.com/GerHobbelt/libpinyin) -- the libpinyin project aims to provide the algorithms core for intelligent sentence-based Chinese pinyin input methods.
- **libpostal** [📁](./libpostal) [🌐](https://github.com/GerHobbelt/libpostal) -- a C library for parsing/normalizing street addresses around the world using statistical NLP and open data. The goal of this project is to understand location-based strings in every language, everywhere.
- **libtextcat** [📁](./libtextcat) [🌐](https://github.com/GerHobbelt/libtextcat) -- text language detection
- **libunibreak** [📁](./libunibreak) [🌐](https://github.com/GerHobbelt/libunibreak) -- an implementation of the line breaking and word breaking algorithms as described in (Unicode Standard Annex 14)[http://www.unicode.org/reports/tr14/] and (Unicode Standard Annex 29)[http://www.unicode.org/reports/tr29/].
- **line_detector** [📁](./line_detector) [🌐](https://github.com/GerHobbelt/line_detector) -- line segment detector ([lsd](http://www.ipol.im/pub/art/2012/gjmr-lsd/)) &. edge drawing line detector (edl) &. hough line detector (standard &. probabilistic) for detection.
- **marian** [📁](./marian) [🌐](https://github.com/GerHobbelt/marian) -- an efficient Neural Machine Translation framework written in pure C++ with minimal dependencies.
- **pinyin** [📁](./pinyin) [🌐](https://github.com/GerHobbelt/pinyin) -- pīnyīn is a tool for converting Chinese characters to *pinyin*. It can be used for Chinese phonetic notation, sorting, and retrieval.
- **sentencepiece** [📁](./sentencepiece) [🌐](https://github.com/GerHobbelt/sentencepiece) -- text tokenization
- **sentence-tokenizer** [📁](./sentence-tokenizer) [🌐](https://github.com/GerHobbelt/Tokenizer) -- text tokenization
- **uchardet** [📁](./uchardet) [🌐](https://github.com/GerHobbelt/uchardet) -- [uchardet](https://www.freedesktop.org/wiki/Software/uchardet/) is an encoding and language detector library, which attempts to determine the encoding of the text. It can reliably detect many charsets. Moreover it also works as a very good and fast language detector.
- **ucto** [📁](./ucto) [🌐](https://github.com/GerHobbelt/ucto) -- text tokenization
  
  - **libfolia** [📁](./libfolia) [🌐](https://github.com/GerHobbelt/libfolia) -- working with the Format for Linguistic Annotation (FoLiA). Provides a high-level API to read, manipulate, and create FoLiA documents.
  - **uctodata** [📁](./uctodata) [🌐](https://github.com/GerHobbelt/uctodata) -- data for `ucto` library

- **unicode-cldr** [📁](./unicode-cldr) [🌐](https://github.com/GerHobbelt/cldr) -- Unicode CLDR Project: provides key building blocks for software to support the world's languages, with the largest and most extensive standard repository of locale data available. This data is used by a wide spectrum of companies for their software internationalization and localization, adapting software to the conventions of different languages for such common software tasks.
- **unicode-cldr-data** [📁](./unicode-cldr-data) [🌐](https://github.com/GerHobbelt/cldr-json) -- the JSON distribution of CLDR locale data for internationalization. While XML (not JSON) is the "official" format for all CLDR data, this data is programatically generated from the corresponding XML, using the CLDR tooling. This JSON data is generated using only data that has achieved draft="contributed" or draft="approved" status in the CLDR. This is the same threshhold as is used by the ICU (International Components for Unicode).
- **unicode-icu** [📁](./unicode-icu) [🌐](https://github.com/GerHobbelt/icu) -- the [International Components for Unicode](https://icu.unicode.org/).
- **unicode-icu-data** [📁](./unicode-icu-data) [🌐](https://github.com/GerHobbelt/icu-data) -- International Components for Unicode: Data Repository. This is an auxiliary repository for the International Components for Unicode.
- **unicode-icu-demos** [📁](./unicode-icu-demos) [🌐](https://github.com/GerHobbelt/icu-demos) -- ICU Demos contains sample applications built using the International Components for Unicode (ICU) C++ library ICU4C.
- **unilib** [📁](./unilib) [🌐](https://github.com/GerHobbelt/unilib) -- an embeddable C++17 Unicode library.
- **utfcpp** [📁](./utfcpp) [🌐](https://github.com/GerHobbelt/utfcpp) -- UTF-8 with C++ in a Portable Way
- **win-iconv** [📁](./win-iconv) [🌐](https://github.com/GerHobbelt/win-iconv) -- an `iconv` implementation using Win32 API to convert.
- **worde_butcher** [📁](./worde_butcher) [🌐](https://github.com/GerHobbelt/worde_butcher) -- a tool for text segmentation, keyword extraction and speech tagging. Butchers any text into prime word / phrase cuts, deboning all incoming based on our definitive set of stopwords for all languages.
- **xmunch** [📁](./xmunch) [🌐](https://github.com/GerHobbelt/xmunch) -- xmunch essentially does, what the 'munch' command of, for example, hunspell does, but is not compatible with hunspell affix definition files. So why use it then? What makes xmunch different from the other tools is the ability to extend incomplete word-lists. For hunspell's munch to identify a stem and add an affix mark, every word formed by the affix with the stem has to be in the original word-list. This makes sense for a compression tool. However if your word list is incomplete, you have to add all possible word-forms of a word first, before any compression is done. Using xmunch instead, you can define a subset of forms which are required to be in the word-list to allow the word to be used as stem. Like this, you can extend the word-list.
- **you-token-to-me** [📁](./you-token-to-me) [🌐](https://github.com/GerHobbelt/YouTokenToMe) -- text tokenization












## FTS (*Full Text Search*) and related: SOLR/Lucene et al: document content search

We'll be using SOLR mostly, but here might be some interface libraries and an intersting alternative

- **Bi-Sent2Vec** [📁](./Bi-Sent2Vec) [🌐](https://github.com/GerHobbelt/Bi-Sent2Vec) -- provides cross-lingual numerical representations (features) for words, short texts, or sentences, which can be used as input to any machine learning task with applications geared towards cross-lingual word translation, cross-lingual sentence retrieval as well as cross-lingual downstream NLP tasks. The library is a cross-lingual extension of [Sent2Vec](https://github.com/epfml/sent2vec). Bi-Sent2Vec vectors are also well suited to monolingual tasks as indicated by a marked improvement in the monolingual quality of the word embeddings. (For more details, see [paper](https://arxiv.org/abs/1912.12481))
- **BitFunnel** [📁](./BitFunnel) [🌐](https://github.com/GerHobbelt/BitFunnel) -- the BitFunnel search index is used by [Bing's](http://www.bing.com) super-fresh, news, and media indexes. The algorithm is described in [BitFunnel: Revisiting Signatures for
- **completesearch** [📁](./completesearch) [🌐](https://github.com/GerHobbelt/completesearch) -- a fast and interactive search engine for *context-sensitive prefix search* on a given collection of documents. It does not only provide search results, like a regular search engine, but also completions for the last (maybe only partially typed) query word that lead to a hit.
- **edit-distance** [📁](./edit-distance) [🌐](https://github.com/GerHobbelt/editdistance) -- a fast implementation of the edit distance (Levenshtein distance). The algorithm used in this library is proposed by _Heikki Hyyrö, "Explaining and extending the bit-parallel approximate string matching algorithm of Myers", (2001) <http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.19.7158&rep=rep1&type=pdf>_.
- **fxt** [📁](./fxt) [🌐](https://github.com/GerHobbelt/fxt) -- a large scale feature extraction tool for text-based machine learning.
- **groonga** [📁](./groonga) [🌐](https://github.com/GerHobbelt/groonga) -- an open-source fulltext search engine and column store.
- **iresearch** [📁](./iresearch) [🌐](https://github.com/GerHobbelt/iresearch) -- the IResearch search engine is meant to be treated as a standalone index that is capable of both indexing and storing individual values verbatim. Indexed data is treated on a per-version/per-revision basis, i.e. existing data version/revision is never modified and updates/removals are treated as new versions/revisions of the said data. This allows for trivial multi-threaded read/write operations on the index. The index exposes its data processing functionality via a multi-threaded 'writer' interface that treats each document abstraction as a collection of fields to index and/or store. The index exposes its data retrieval functionality via 'reader' interface that returns records from an index matching a specified query. The queries themselves are constructed query trees built directly using the query building blocks available in the API. The querying infrastructure provides the capability of ordering the result set by one or more ranking/scoring implementations. The ranking/scoring implementation logic is plugin-based and lazy-initialized during runtime as needed, allowing for addition of custom ranking/scoring logic without the need to even recompile the IResearch library.
- **libchopshop** [📁](./libchopshop) [🌐](https://github.com/GerHobbelt/libchopshop) -- NLP/text processing with automated stop word detection and stemmer-based filtering. This library / toolkit is engineered to be able to provide **both** of the (often more or less disparate) n-gram token streams / vectors required for (1) initializing / training FTS databases, neural nets, etc. and (2) executing effective queries / matches on these engines.
- **libunibreak** [📁](./libunibreak) [🌐](https://github.com/GerHobbelt/libunibreak) -- an implementation of the line breaking and word breaking algorithms as described in (Unicode Standard Annex 14)[http://www.unicode.org/reports/tr14/] and (Unicode Standard Annex 29)[http://www.unicode.org/reports/tr29/].
- [Manticore](https://manticoresearch.com/) -- while the userbase is much smaller than for the *Lucene Gang* (Lucene/SOLR/ES/OpenSearch), this still got me. Can't say exactly why. All the other Lucene/SOLR alternatives out there didn't appeal to me (old tech, slow dev, ...).
  
  - **manticore-columnar** [📁](./manticore-columnar) [🌐](https://github.com/GerHobbelt/columnar) -- Manticore Columnar Library is a column-oriented storage and secondary indexing library, aiming to provide **decent performance with low memory footprint at big data volume**. When used in combination with [Manticore Search](https://github.com/manticoresoftware/manticoresearch) it can be beneficial for those looking for:
    
    1. log analytics including rich free text search capabities (which is missing in e.g. [Clickhouse](https://github.com/ClickHouse/ClickHouse) - great tool for metrics analytics)
    2. faster / low resource consumption log/metrics analytics. Since the library and Manticore Search are both written in C++ with low optimizations in mind, in many cases the performance / RAM consumption is better than in Lucene / SOLR / Elasticsearch
    3. running log / metric analytics in docker / kubernetes. Manticore Search + the library can work with as little as 30 megabytes of RAM which Elasticsearch / Clickhouse can't. It also starts in less than a second or a few seconds in the worst case. Since the overhead is so little you can afford having more nodes of Manticore Search + the library than Elasticsearch. More nodes and quicker start means higher high availability and agility.
    4. powerful SQL for logs/metrics analytics and everything else [Manticore Search](https://github.com/manticoresoftware/manticoresearch) can give you
  
  - **manticore-plugins** [📁](./manticore-plugins) [🌐](https://github.com/GerHobbelt/manticore-plugins) -- Manticore Search plugins and UDFs (user defined functions) -- Manticore Search can be extended with help of plugins and custom functions (aka user defined functions or UDFs).
  - **manticoresearch** [📁](./manticoresearch) [🌐](https://github.com/GerHobbelt/manticoresearch) -- Manticore Search is an easy to use open source fast database for search. Good alternative for Elasticsearch. What distinguishes it from other solutions is:
    
    * It's very fast and therefore more cost-efficient than alternatives, for example Manticore is:
    * Modern MPP architecture and smart query parallelization capabilities allow to fully utilize all your CPU cores to **lower response time** as much as possible, when needed.
    * Powerful and fast full-text search which **works fine for small and big datasets**
    * Traditional **row-wise storage** for small, medium and big size datasets
    * **Columnar storage** support via the [Manticore Columnar Library](https://github.com/manticoresoftware/columnar/) for bigger datasets (much bigger than can fit in RAM)
    * Easy to use secondary indexes (you don't need to create them manually)
    * Cost-based optimizer for search queries
    * SQL-first: Manticore's **native syntax is SQL**. It speaks SQL over HTTP and uses the MySQL protocol (you can use your preferred MySQL client)
    * **JSON over HTTP**: to provide a more programmatic way to manage your data and schemas, Manticore provides a HTTP JSON protocol
    * Written fully in C++: **starts fast, doesn't take much RAM**, and low-level optimizations provide good performance
    * **Real-time inserts**: after an INSERT is made, the document is accessible immediately
    * [Interactive courses](https://play.manticoresearch.com/) for **easier learning**
    * **Built-in replication and load balancing**
    * **Can sync** from MySQL/PostgreSQL/ODBC/xml/csv out of the box
    * Not fully ACID-compliant, but **supports transactions and binlog** for safe writes

- **mitlm** [📁](./mitlm) [🌐](https://github.com/GerHobbelt/mitlm) -- the MIT Language Modeling Toolkit (MITLM) toolkit is a set of tools designed for the efficient estimation of statistical n-gram language models involving iterative parameter estimation.  It achieves much of its efficiency through the use of a compact vector representation of n-grams.
- **pg_similarity** [📁](./pg_similarity) [🌐](https://github.com/GerHobbelt/pg_similarity) -- **pg\_similarity** is an extension to support similarity queries on [PostgreSQL](http://www.postgresql.org/). The implementation is tightly integrated in the RDBMS in the sense that it defines operators so instead of the traditional operators (`=` and `<>`) you can use `~~~` and `~!~` (any of these operators represents a similarity function).
- **pisa** [📁](./pisa) [🌐](https://github.com/GerHobbelt/pisa) -- a text search engine able to run on large-scale collections of documents. It allows researchers to experiment with state-of-the-art techniques, allowing an ideal environment for rapid development. PISA is a text search engine, though the "PISA Project" is a set of tools that help experiment with indexing and query processing. Given a text collection, PISA can build an inverted index over this corpus, allowing the corpus to be searched. The inverted index, put simply, is an efficient data structure that represents the document corpus by storing a list of documents for each unique term (see here). At query time, PISA stores its index in main memory for rapid retrieval.
- **pisa_formatter** [📁](./pisa_formatter) [🌐](https://github.com/GerHobbelt/pisa_formatter) -- converts list of documents to the [pisa-engine](https://github.com/pisa-engine/pisa) binary format: {.docs, .freqs, .sizes}. Its input should be a text file where each line is a document.  Each document starts with the document name (which should not have whitespaces) followed by a list of ascii terms separated by whitespaces which define the document. This also generates a binary .terms file which has the information to convert from term to index and is used by the query_transformer executable. This file stores all the unique terms from all the documents.
- **sent2vec** [📁](./sent2vec) [🌐](https://github.com/GerHobbelt/sent2vec) -- a tool and pre-trained models related to the [Bi-Sent2vec](https://arxiv.org/abs/1912.12481). The cross-lingual extension of Sent2Vec can be found [here](https://github.com/epfml/Bi-sent2vec). This library provides numerical representations (features) for words, short texts, or sentences, which can be used as input to any machine learning task.
- **sist2** [📁](./sist2) [🌐](https://github.com/GerHobbelt/sist2) -- sist2 (Simple incremental search tool) is a fast, low memory usage, multi-threaded application, which scans drives and directory trees, extracts text and metadata from common file types, generates thumbnails and comes with OCR support (with tesseract) and  Named-Entity Recognition (using pre-trained client-side tensorflow models).
- **sqlite-fts5-snowball** [📁](./sqlite-fts5-snowball) [🌐](https://github.com/GerHobbelt/fts5-snowball) -- a simple extension for use with FTS5 within SQLite. It allows FTS5 to use Martin Porter's Snowball stemmers (libstemmer), which are available in several languages. Check http://snowballstem.org/ for more information about them.
- **sqlite_fts_tokenizer_chinese_simple** [📁](./sqlite_fts_tokenizer_chinese_simple) [🌐](https://github.com/GerHobbelt/simple) -- an extension of [sqlite3 fts5](https://www.sqlite.org/fts5.html) that supports Chinese and Pinyin. It fully provides a [solution to the multi-phonetic word problem of full-text retrieval on WeChat mobile terminal](https://cloud.tencent.com/developer/article/1198371): solution 4 in the article, very simple and efficient support for Chinese and Pinyin searches.
  
  On this basis we also support more accurate phrase matching through [cppjieba](https://github.com/yanyiwu/cppjieba). See the introduction article at https://www.wangfenjin.com/posts/simple-jieba-tokenizer/

- **typesense** [📁](./typesense) [🌐](https://github.com/GerHobbelt/typesense) -- a fast, typo-tolerant search engine for building delightful search experiences. Open Source alternative to Algolia and an Easier-to-Use alternative to ElasticSearch. ⚡🔍✨ Fast, typo tolerant, in-memory fuzzy Search Engine for building delightful search experiences.











### stemmers

- **libstemmer** [📁](./libstemmer) [🌐](https://github.com/GerHobbelt/libstemmer) -- SnowBall stemmer for many languages.
- **snowball** [📁](./snowball) [🌐](https://github.com/GerHobbelt/snowball) -- SnowBall stemming compiler (code generator)











### language detection / inference

- **cld1-language-detect** [📁](./cld1-language-detect) [🌐](https://github.com/GerHobbelt/cld) -- the CLD (Compact Language Detection) library, extracted from the source code for Google's Chromium library. CLD1 probabilistically detects languages in Unicode UTF-8 text.
- **cld2-language-detect** [📁](./cld2-language-detect) [🌐](https://github.com/GerHobbelt/cld2) -- CLD2 probabilistically detects over 80 languages in Unicode UTF-8 text, either plain text or HTML/XML. For mixed-language input, CLD2 returns the top three languages found and their approximate percentages of the total text bytes.  Optionally, it also returns a vector of text spans with the language of each identified. The design target is web pages of at least 200 characters (about two sentences); CLD2 is not designed to do well on very short text.
- **cld3-language-detect** [📁](./cld3-language-detect) [🌐](https://github.com/GerHobbelt/cld3) -- CLD3 is a neural network model for language identification. The inference code extracts character ngrams from the input text and computes the fraction of times each of them appears. The model outputs BCP-47-style language codes, shown in the table below. For some languages, output is differentiated by script. Language and script names from Unicode CLDR.
- **libchardet** [📁](./libchardet) [🌐](https://github.com/GerHobbelt/libchardet) -- is based on Mozilla Universal Charset Detector library and, detects the character set used to encode data.
- **uchardet** [📁](./uchardet) [🌐](https://github.com/GerHobbelt/uchardet) -- [uchardet](https://www.freedesktop.org/wiki/Software/uchardet/) is an encoding and language detector library, which attempts to determine the encoding of the text. It can reliably detect many charsets. Moreover it also works as a very good and fast language detector.











## scripting *user-tunable tasks* such as OCR preprocessing, metadata extraction, metadata cleaning & other \[post-\]processing, ...

- **cel-cpp** [📁](./cel-cpp) [🌐](https://github.com/GerHobbelt/cel-cpp) -- C++ Implementations of the Common Expression Language. For background on the Common Expression Language see the cel-spec repo. Common Expression Language specification: the Common Expression Language (CEL) implements common semantics for expression evaluation, enabling different applications to more easily interoperate. Key Applications are (1) Security policy: organizations have complex infrastructure and need common tooling to reason about the system as a whole and (2) Protocols: expressions are a useful data type and require interoperability across programming languages and platforms.
- **cel-spec** [📁](./cel-spec) [🌐](https://github.com/GerHobbelt/cel-spec) -- Common Expression Language specification: the Common Expression Language (CEL) implements common semantics for expression evaluation, enabling different applications to more easily interoperate. Key Applications are (1) Security policy: organizations have complex infrastructure and need common tooling to reason about the system as a whole and (2) Protocols: expressions are a useful data type and require interoperability across programming languages and platforms.
- **chibi-scheme** [📁](./chibi-scheme) [🌐](https://github.com/GerHobbelt/chibi-scheme) -- Chibi-Scheme is a very small library intended for use as an extension and scripting language in C programs.  In addition to support for lightweight VM-based threads, each VM itself runs in an isolated heap allowing multiple VMs to run simultaneously in different OS threads.
- **cppdap** [📁](./cppdap) [🌐](https://github.com/GerHobbelt/cppdap) -- a C++11 library (["SDK"](https://microsoft.github.io/debug-adapter-protocol/implementors/sdks/)) implementation of the [Debug Adapter Protocol](https://microsoft.github.io/debug-adapter-protocol/), providing an API for implementing a DAP client or server. `cppdap` provides C++ type-safe structures for the full [DAP specification](https://microsoft.github.io/debug-adapter-protocol/specification), and provides a simple way to add custom protocol messages.
- **cpython** [📁](./cpython) [🌐](https://github.com/GerHobbelt/cpython) -- Python version 3. Note: Building a complete Python installation requires the use of various additional third-party libraries, depending on your build platform and configure options.  Not all standard library modules are buildable or useable on all platforms.
- **duktape** [📁](./duktape) [🌐](https://github.com/GerHobbelt/duktape) -- [Duktape](http://duktape.org/) is an **embeddable Javascript** engine, with a focus on **portability** and **compact** footprint. Duktape is ECMAScript E5/E5.1 compliant, with some semantics updated from ES2015+, with partial support for ECMAScript 2015 (E6) and ECMAScript 2016 (E7), ES2015 TypedArray, Node.js Buffer bindings and comes with a built-in debugger.
- **ECMA262** [📁](./ECMA262) [🌐](https://github.com/GerHobbelt/ecma262) -- ECMAScript :: the source for the current draft of ECMA-262, the ECMAScript® Language Specification.
- **guile** [📁](./guile) [🌐](https://github.com/GerHobbelt/guile) -- Guile is Project GNU's extension language library. Guile is an implementation of the Scheme programming language, packaged as a library that can be linked into applications to give them their own extension language.  Guile supports other languages as well, giving users of Guile-based applications a choice of languages.
- **harbour-core** [📁](./harbour-core) [🌐](https://github.com/GerHobbelt/core) -- Harbour is the free software implementation of a multi-platform, multi-threading, object-oriented, scriptable programming language, backward compatible with Clipper/xBase. Harbour consists of a compiler and runtime libraries with multiple UI and database backends, its own make system and a large collection of libraries and interfaces to many popular APIs.
- **itcl** [📁](./itcl) [🌐](https://github.com/GerHobbelt/itcl) -- Itcl is an object oriented extension for Tcl.
- **jerryscript** [📁](./jerryscript) [🌐](https://github.com/GerHobbelt/jerryscript) -- [JerryScript](https://github.com/jerryscript-project/jerryscript/) is a lightweight JavaScript engine for resource-constrained devices such as microcontrollers. It can run on devices with less than 64 KB of RAM and less than 200 KB of flash memory.
  
  Key characteristics of JerryScript:
  
  * Full ECMAScript 5.1 standard compliance
  * 160K binary size when compiled for ARM Thumb-2
  * Heavily optimized for low memory consumption
  * Written in C99 for maximum portability
  * Snapshot support for precompiling JavaScript source code to byte code
  * Mature C API, easy to embed in applications
  
  Additional information can be found at the [project page](http://jerryscript.net) and [Wiki](https://github.com/jerryscript-project/jerryscript/wiki).

- **jimtcl** [📁](./jimtcl) [🌐](https://github.com/GerHobbelt/jimtcl) -- the Jim Interpreter is a small-footprint implementation of the Tcl programming language written from scratch. Currently Jim Tcl is very feature complete with an extensive test suite (see the tests directory). There are some Tcl commands and features which are not implemented (and likely never will be), including traces and Tk. However, Jim Tcl offers a number of both Tcl8.5 and Tcl8.6 features ({*}, dict, lassign, tailcall and optional UTF-8 support) and some unique features. These unique features include [lambda] with garbage collection, a general GC/references system, arrays as syntax sugar for [dict]tionaries, object-based I/O and more. Other common features of the Tcl programming language are present, like the "everything is a string" behaviour, implemented internally as dual ported objects to ensure that the execution time does not reflect the semantic of the language :)
- **linenoise** [📁](./linenoise) [🌐](https://github.com/GerHobbelt/linenoise) -- `readline` simile for REPL/interactive runs in a CLI
- **miniscript** [📁](./miniscript) [🌐](https://github.com/GerHobbelt/miniscript) -- the [MiniScript scripting language](http://miniscript.org).
- **mujs** [📁](../../thirdparty/mujs) [🌐](https://github.com/GerHobbelt/mujs) -- a lightweight ES5 Javascript interpreter designed for embedding in other software to extend them with scripting capabilities.
- **newlisp** [📁](./newlisp) [🌐](https://github.com/GerHobbelt/newlisp) -- newLISP is a LISP-like scripting language for doing things you typically do with scripting languages: programming for the internet, system administration, text processing, gluing other programs together, etc. newLISP is a scripting LISP for people who are fascinated by LISP's beauty and power of expression, but who need it stripped down to easy-to-learn essentials. newLISP is LISP reborn as a scripting language: pragmatic and casual, simple to learn without requiring you to know advanced computer science concepts. Like any good scripting language, newLISP is quick to get into and gets the job done without fuss. newLISP has a very fast startup time, is small on resources like disk space and memory and has a deep, practical API with functions for networking, statistics, machine learning, regular expressions, multiprocessing and distributed computing built right into it, not added as a second thought in external modules.
- **owl** [📁](./owl) [🌐](https://github.com/GerHobbelt/owl) -- Owl Lisp is a functional dialect of the Scheme programming language. It is mainly based on the applicative subset of the R7RS standard.
- **picoc** [📁](./picoc) [🌐](https://github.com/GerHobbelt/picoc) -- PicoC is a very small C interpreter for scripting. It was originally written as a script language for a UAV's on-board flight system. It's also very suitable for other robotic, embedded and non-embedded applications. The core C source code is around 3500 lines of code. It's not intended to be a complete implementation of ISO C but it has all the essentials.
- **pybind11** [📁](./pybind11) [🌐](https://github.com/GerHobbelt/pybind11) -- a lightweight header-only library that exposes C++ types in Python and vice versa, mainly to create Python bindings of existing C++ code.
- **QuickJS** [📁](./QuickJS) [🌐](https://github.com/GerHobbelt/quickjs) -- a small and embeddable Javascript engine. It supports the <a href="https://tc39.github.io/ecma262/">ES2020</a> specification including modules, asynchronous generators, proxies and BigInt. It optionally supports mathematical extensions such as big decimal floating point numbers (BigDecimal), big binary floating point numbers (BigFloat) and operator overloading.
  
  - **libbf** [📁](./libbf) [🌐](https://github.com/GerHobbelt/libbf) -- a small library to handle arbitrary precision binary or decimal floating point numbers
  - **QuickJS-C++-Wrapper** [📁](./QuickJS-C++-Wrapper) [🌐](https://github.com/GerHobbelt/quickjscpp) -- quickjscpp is a header-only wrapper around the [quickjs](https://bellard.org/quickjs/) JavaScript engine, which allows easy integration into C++11 code. This wrapper also automatically tracks the lifetime of values and objects, is exception-safe, and automates clean-up.
  - **QuickJS-C++-Wrapper2** [📁](./QuickJS-C++-Wrapper2) [🌐](https://github.com/GerHobbelt/quickjspp) -- QuickJSPP is QuickJS wrapper for C++. It allows you to easily embed Javascript engine into your program.
  - **txiki** [📁](./txiki.js) [🌐](https://github.com/GerHobbelt/txiki.js) -- uses QuickJS as its kernel

- **replxx** [📁](./replxx) [🌐](https://github.com/GerHobbelt/replxx) -- REPL CLI component: `readline` simile for REPL/interactive runs in a CLI
- **sbcl** [📁](./sbcl) [🌐](https://github.com/GerHobbelt/sbcl) -- SBCL is an implementation of ANSI Common Lisp, featuring a high-performance native compiler, native threads on several platforms, a socket interface, a source-level debugger, a statistical profiler, and much more.
- **ScriptX** [📁](./ScriptX) [🌐](https://github.com/GerHobbelt/ScriptX) -- wrapper for V8, QuickJS, Lua, Python, ...
- **tcl** [📁](./tcl) [🌐](https://github.com/GerHobbelt/tcl) -- the latest **Tcl** source distribution. Tcl provides a powerful platform for creating integration applications that tie together diverse applications, protocols, devices, and frameworks.
- **tclclockmod** [📁](./tclclockmod) [🌐](https://github.com/GerHobbelt/tclclockmod) -- TclClockMod is the fastest, most powerful Tcl clock engine written in C. This Tcl clock extension is the faster Tcl-module for the replacement of the standard "clock" ensemble of tcl.
- **tcllib** [📁](./tcllib) [🌐](https://github.com/GerHobbelt/tcllib) -- the Tcl Standard Library.
- **txiki** [📁](./txiki.js) [🌐](https://github.com/GerHobbelt/txiki.js) -- a small and powerful JavaScript runtime. It's built on the shoulders of giants: it uses [QuickJS] as its JavaScript engine, [libuv] as the platform layer, [wasm3] as the WebAssembly engine and [curl] as the HTTP / WebSocket client.
- **VisualScriptEngine** [📁](./VisualScriptEngine) [🌐](https://github.com/GerHobbelt/VisualScriptEngine) -- A visual scripting engine designed for embedding. The engine is written in modern C++ and compiles on several platforms with no external dependencies.
- **wxVisualScriptEngine** [📁](./wxVisualScriptEngine) [🌐](https://github.com/GerHobbelt/VisualScriptEngineWxWidgets) -- a utility module for [VisualScriptEngine](https://github.com/kovacsv/VisualScriptEngine) which provides helper classes for embedding the engine in a wxWidgets application.
- **yasl** [📁](./yasl) [🌐](https://github.com/GerHobbelt/yasl) -- Bytecode Interpreter for Yet Another Scripting Language (YASL).
- ~~**CPython** [🌐](https://github.com/python/cpython)~~
  
  - **removed**; reason: we've decided to offer any application user facing scripting features in JavaScript only: Python and the others can use socket-based messaging when someone wants to write their user scripts in any of those languages.


The additional (and more important) reason to ditch CPython from the R&D set is hairiness of integrating Python into an application as an embedded scripting language, instead of the other way around. With the envisioned advent of ZeroMQ/socket based IPC, any Python scripts can hook into that instead of spending the effort and maintenance of having that large language as an embedded 'assistive' scripting/configuration language: it's simply too huge and complicated. We're not Blender and we don't have the funding.

- **linecook** [📁](./linecook) [🌐](https://github.com/GerHobbelt/linecook) -- a C library for editing the command line, much like the [readline](https://tiswww.cwru.edu/php/chet/readline/readline.html) library used in <b>bash</b> and <b>gdb</b>.
- **txiki.js** [📁](./txiki.js) [🌐](https://github.com/GerHobbelt/txiki.js) -- a small and powerful JavaScript runtime.  It targets ECMAScript 2020 and implements many web platform features.
- ~~**lua** [🌐](https://github.com/lua/lua)~~
  
  - **removed**; reason: we've decided to offer any application user facing scripting features in JavaScript only: Python and the others can use socket-based messaging when someone wants to write their user scripts in any of those languages. See also the `CPython` entry.

- ~~**luaJIT** [🌐](https://github.com/LuaJIT/LuaJIT)~~
  
  - **removed**; reason: see the `lua` entry above.
















### Visualization

- **agg** [📁](./agg) [🌐](https://github.com/GerHobbelt/agg) -- Anti-Grain Geometry library, written by Maxim Shemanarev in C++. It is an Open Source, 2D vector graphics library. Agg produces pixel images in memory from vectorial data. AGG doesn't depend on any graphic API or technology. Basically, you can think of AGG as of a rendering engine that produces pixel images in memory from some vectorial data.
- **butteraugli** [📁](./butteraugli) [🌐](https://github.com/GerHobbelt/butteraugli) -- a tool for measuring perceived differences between images. Butteraugli is a project that estimates the psychovisual similarity of two images. It gives a score for the images that is reliable in the domain of barely noticeable differences. Butteraugli not only gives a scalar score, but also computes a spatial map of the level of differences. One of the main motivations for this project is the statistical differences in location and density of different color receptors, particularly the low density of blue cones in the fovea. Another motivation comes from more accurate modeling of ganglion cells, particularly the frequency space inhibition.
- **colormap-shaders** [📁](./colormap-shaders) [🌐](https://github.com/GerHobbelt/colormap-shaders) -- a collection of shaders to draw color maps.
- **ColorPaletteCodable** [📁](./ColorPaletteCodable) [🌐](https://github.com/GerHobbelt/ColorPaletteCodable) -- a color palette reader/editor/writer package for iOS, macOS, macCatalyst, tvOS, watchOS and Linux. Supports many palette formats, including Adobe Swatch Exchange (`.ase`), Adobe Photoshop Color Swatch (`.aco`), Adobe Color Table (`.act`) and Microsoft RIFF palette files (`.pal`)
- **ColorSpace** [📁](./ColorSpace) [🌐](https://github.com/GerHobbelt/ColorSpace) -- library for converting between color spaces and comparing colors.
- **color-util** [📁](./color-util) [🌐](https://github.com/GerHobbelt/color-util) -- a header-only C++11 library for handling colors, including color space converters between RGB, XYZ, Lab, etc. and color difference calculators such as CIEDE2000.
- **gnuplot** [📁](./gnuplot) [🌐](https://github.com/GerHobbelt/gnuplot) -- the Gnuplot Plotting Utility is a command-line driven interactive function plotting utility for linux, OSX, MSWin, VMS, and many other platforms. Gnuplot handles both curves (2 dimensions) and surfaces (3 dimensions). Surfaces can be plotted as a mesh fitting the specified function, floating in the 3-d coordinate space, or as a contour plot on the x-y plane. For 2-d plots, there are also many plot styles including lines, points, boxes, heat maps, stacked histograms, and contoured projections of 3D data. Graphs may be labeled with arbitrary labels and arrows, axis labels, a title, date and time, and a key.  The interface includes command-line editing and history on most platforms.
- **gnuplot_i** [📁](./gnuplot_i) [🌐](https://github.com/GerHobbelt/gnuplot_i) -- gnuplot C interface library enables developers to create [gnuplots](http://www.gnuplot.info/) directly from their C programs.
- **gnuplot-palettes** [📁](./gnuplot-palettes) [🌐](https://github.com/GerHobbelt/gnuplot-palettes) -- color palettes for gnuplot.
- **graph-coloring** [📁](./graph-coloring) [🌐](https://github.com/GerHobbelt/graph-coloring) -- a C++ Graph Coloring Package. This project has two primary uses:
  
  * As an executable for finding the chromatic number for an input graph (in edge list or edge matrix format)
  * As a library for finding the particular coloring of an input graph (represented as a `map<string,vector<string>>` edge list)

- **hsluv-c** [📁](./hsluv-c) [🌐](https://github.com/GerHobbelt/hsluv-c) -- HSLuv (revision 4) is a human-friendly alternative to HSL. HSLuv is very similar to CIELUV, a color space designed for perceptual uniformity based on human experiments. When accessed by polar coordinates, it becomes functionally similar to HSL with a single problem: its chroma component doesn't fit into a specific range. HSLuv extends CIELUV with a new saturation component that allows you to span all the available chroma as a neat percentage.
- **IconFontCppHeaders** [📁](./IconFontCppHeaders) [🌐](https://github.com/GerHobbelt/IconFontCppHeaders) -- provides C and C++ headers, among others, for icon fonts Font Awesome, Fork Awesome, Google Material Design, Pictogrammers Material Design icons, Kenney game icons, Fontaudio, Codicons and Lucide. Useful in UI applications such as ones built in Dear ImGui.
- **leptonica-hillshade** [📁](./leptonica-hillshade) [🌐](https://github.com/GerHobbelt/leptonica-hillshade) -- apply hillshade elevation/shadow render to leptonica PIX & FPIX
- **libchiaroscuramente** [📁](./libchiaroscuramente) [🌐](https://github.com/GerHobbelt/libchiaroscuramente) -- a collection of C/C++ functions (components) to help improving / enhancing your images for various purposes (e.g. helping an OCR engine detect and recognize the text in the page scan image)
- **libjpegqs** [📁](./libjpegqs) [🌐](https://github.com/GerHobbelt/libjpegqs) -- JPEG Quant Smooth tries to recreate lost precision of DCT coefficients based on quantization table from jpeg image. You may not notice jpeg artifacts on the screen without zooming in, but you may notice them after printing. Also, when editing compressed images, artifacts can accumulate, but if you use this program before editing - the result will be better.
- **lterpalettefinder** [📁](./lterpalettefinder) [🌐](https://github.com/GerHobbelt/lterpalettefinder) -- extract Color Palettes from Photos and Pick Official LTER Palettes. The goal of `lterpalettefinder` is to provide high quality color palettes derived from photos at Long Term Ecological Research (LTER) sites. This allows users to create beautiful graphics that have close visual ties to photos from the places where data were collected. This package also allows users to generate their own palettes from any photo (PNG, JPEG, TIFF, or HEIC) if the current palettes in the function do not meet their needs. For more information on the LTER Network, check out [our website](https://lternet.edu/)!
- **matplotplusplus** [📁](./matplotplusplus) [🌐](https://github.com/GerHobbelt/matplotplusplus) -- **Matplot++** is a graphics library for data visualization that provides interactive plotting, means for exporting plots in high-quality formats for scientific publications, a compact syntax consistent with similar libraries, dozens of plot categories with specialized algorithms, multiple coding styles, and supports generic backends.
- **MetBrewer** [📁](./MetBrewer) [🌐](https://github.com/GerHobbelt/MetBrewer) -- palettes inspired by works at the Metropolitan Museum of Art in New York. Pieces selected come from various time periods, regions, and mediums.
- **netdata** [📁](./netdata) [🌐](https://github.com/GerHobbelt/netdata) -- <a href="https://www.netdata.cloud">Netdata</a> collects metrics per second and presents them in beautiful low-latency dashboards. It is designed to run on all of your physical and virtual servers, cloud deployments, Kubernetes clusters, and edge/IoT devices, to monitor your systems, containers, and applications. It scales nicely from just a single server to thousands of servers, even in complex multi/mixed/hybrid cloud environments, and given enough disk space it can keep your metrics for years.
- **nodesoup** [📁](./nodesoup) [🌐](https://github.com/GerHobbelt/nodesoup) -- delivers graph untangling: a force-directed graph layout simulates forces to give motion to vertices and arrange them in a way that is visually pleasing and/or reveals structure. The Fruchterman-Reingold algorithm assigns a repelling force to vertices pair of the graph, effectively pushing apart vertices so they don't overlap, and a attraction force between each adjacent vertices pair, thus dragging closer connected vertices. The forces attenuate when the vertices get respectively further apart or closer, and a global temperature also serves as a simulated annealing, capping the maximum vertex displacement at each iteration. As the forces between each component and the temperature gradually diminish, the layout stabilizes.  Another method, the Kamada Kawai algorithm, relies on the simulation of springs between each vertex, which strength is determined by the length of the shortest path between both vertices. The potential energy of each vertex, i.e. the sum of the energy of all its springs, is then computed. The goal being to reduce the global energy of the layout, each vertex is moved step-by-step until its potential energy is considered low-enough, using a Newton-Raphson algorithm.
- **OpenColorIO** [📁](./OpenColorIO) [🌐](https://github.com/GerHobbelt/OpenColorIO) -- OpenColorIO (OCIO) is a complete color management solution geared towards motion picture production with an emphasis on visual effects and computer animation. OCIO provides a straightforward and consistent user experience across all supporting applications while allowing for sophisticated back-end configuration options suitable for high-end production usage. OCIO is compatible with the Academy Color Encoding Specification (ACES) and is LUT-format agnostic, supporting many popular formats.
- **paintingReorganize** [📁](./paintingReorganize) [🌐](https://github.com/GerHobbelt/paintingReorganize) -- color palatte extraction demo, based on PCA.
- **pdiff** [📁](./pdiff) [🌐](https://github.com/GerHobbelt/pdiff) -- perceptualdiff (pdiff): a program that compares two images using a perceptually based image metric.
- **PNWColors** [📁](./PNWColors) [🌐](https://github.com/GerHobbelt/PNWColors) -- Four years spent in the most beautiful place in the world, immortalized in an R color palette package. May the colors of Washington State and the Pacific Northwest live on in our presentation figures forever.  Palettes are pulled from photos I took in some of the dreamiest, most colorful, PNW-iest places I know.
- **sqlplot-tools** [📁](./sqlplot-tools) [🌐](https://github.com/GerHobbelt/sqlplot-tools) -- a tool to **process data series** from algorithm experiments **using SQL statements** and embed the results in **gnuplot** datafiles or **pgfplots** LaTeX files. Using SQL to generate plots can be see as **cracking a nut with a sledgehammer**, but it really works well in practice.
- **svg-charter** [📁](./svg-charter) [🌐](https://github.com/GerHobbelt/charter) -- SVG chart renderer
- **tinycolormap** [📁](./tinycolormap) [🌐](https://github.com/GerHobbelt/tinycolormap) -- a header-only, single-file library for colormaps written in C++11.
- **tmap** [📁](./tmap) [🌐](https://github.com/GerHobbelt/tmap) -- a very fast visualization library for large, high-dimensional data sets. tmap's graph layouts are based on the [OGDF](https://ogdf.uos.de/) library.
- **vizzu** [📁](./vizzu) [🌐](https://github.com/GerHobbelt/vizzu-lib) -- Vizzu is a Javascript/C++ library for animated data visualizations and data stories, utilizing a generic dataviz engine that generates many types of charts and seamlessly animates between them. It can be used to create static charts but more importantly, it is designed for building animated data stories and interactive explorers as Vizzu enables showing different perspectives of the data that the viewers can easily follow due to the animation.
- **VTK** [📁](./VTK) [🌐](https://github.com/GerHobbelt/VTK) -- VTK - The Visualization Toolkit - is an open-source software system for image processing, 3D graphics, volume rendering and visualization. VTK includes many advanced algorithms (e.g., surface reconstruction, implicit modeling, decimation) and rendering techniques (e.g., hardware-accelerated volume rendering, LOD control).
- **wesanderson** [📁](./wesanderson) [🌐](https://github.com/GerHobbelt/wesanderson) -- Wes Anderson color palettes demo.  Here’s the most indie thing you can do to your plots.  ;-)

















