/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_azavea_gdal_GDALWarp */

#ifndef _Included_com_azavea_gdal_GDALWarp
#define _Included_com_azavea_gdal_GDALWarp
#ifdef __cplusplus
extern "C" {
#endif
#undef com_azavea_gdal_GDALWarp_GDT_Unknown
#define com_azavea_gdal_GDALWarp_GDT_Unknown 0L
#undef com_azavea_gdal_GDALWarp_GDT_Byte
#define com_azavea_gdal_GDALWarp_GDT_Byte 1L
#undef com_azavea_gdal_GDALWarp_GDT_UInt16
#define com_azavea_gdal_GDALWarp_GDT_UInt16 2L
#undef com_azavea_gdal_GDALWarp_GDT_Int16
#define com_azavea_gdal_GDALWarp_GDT_Int16 3L
#undef com_azavea_gdal_GDALWarp_GDT_UInt32
#define com_azavea_gdal_GDALWarp_GDT_UInt32 4L
#undef com_azavea_gdal_GDALWarp_GDT_Int32
#define com_azavea_gdal_GDALWarp_GDT_Int32 5L
#undef com_azavea_gdal_GDALWarp_GDT_Float32
#define com_azavea_gdal_GDALWarp_GDT_Float32 6L
#undef com_azavea_gdal_GDALWarp_GDT_Float64
#define com_azavea_gdal_GDALWarp_GDT_Float64 7L
#undef com_azavea_gdal_GDALWarp_GDT_CInt16
#define com_azavea_gdal_GDALWarp_GDT_CInt16 8L
#undef com_azavea_gdal_GDALWarp_GDT_CInt32
#define com_azavea_gdal_GDALWarp_GDT_CInt32 9L
#undef com_azavea_gdal_GDALWarp_GDT_CFloat32
#define com_azavea_gdal_GDALWarp_GDT_CFloat32 10L
#undef com_azavea_gdal_GDALWarp_GDT_CFloat64
#define com_azavea_gdal_GDALWarp_GDT_CFloat64 11L
#undef com_azavea_gdal_GDALWarp_GDT_TypeCount
#define com_azavea_gdal_GDALWarp_GDT_TypeCount 12L
#undef com_azavea_gdal_GDALWarp_GCI_Undefined
#define com_azavea_gdal_GDALWarp_GCI_Undefined 0L
#undef com_azavea_gdal_GDALWarp_GCI_GrayIndex
#define com_azavea_gdal_GDALWarp_GCI_GrayIndex 1L
#undef com_azavea_gdal_GDALWarp_GCI_PaletteIndex
#define com_azavea_gdal_GDALWarp_GCI_PaletteIndex 2L
#undef com_azavea_gdal_GDALWarp_GCI_RedBand
#define com_azavea_gdal_GDALWarp_GCI_RedBand 3L
#undef com_azavea_gdal_GDALWarp_GCI_GreenBand
#define com_azavea_gdal_GDALWarp_GCI_GreenBand 4L
#undef com_azavea_gdal_GDALWarp_GCI_BlueBand
#define com_azavea_gdal_GDALWarp_GCI_BlueBand 5L
#undef com_azavea_gdal_GDALWarp_GCI_AlphaBand
#define com_azavea_gdal_GDALWarp_GCI_AlphaBand 6L
#undef com_azavea_gdal_GDALWarp_GCI_HueBand
#define com_azavea_gdal_GDALWarp_GCI_HueBand 7L
#undef com_azavea_gdal_GDALWarp_GCI_SaturationBand
#define com_azavea_gdal_GDALWarp_GCI_SaturationBand 8L
#undef com_azavea_gdal_GDALWarp_GCI_LightnessBand
#define com_azavea_gdal_GDALWarp_GCI_LightnessBand 9L
#undef com_azavea_gdal_GDALWarp_GCI_CyanBand
#define com_azavea_gdal_GDALWarp_GCI_CyanBand 10L
#undef com_azavea_gdal_GDALWarp_GCI_MagentaBand
#define com_azavea_gdal_GDALWarp_GCI_MagentaBand 11L
#undef com_azavea_gdal_GDALWarp_GCI_YellowBand
#define com_azavea_gdal_GDALWarp_GCI_YellowBand 12L
#undef com_azavea_gdal_GDALWarp_GCI_BlackBand
#define com_azavea_gdal_GDALWarp_GCI_BlackBand 13L
#undef com_azavea_gdal_GDALWarp_GCI_YCbCr_YBand
#define com_azavea_gdal_GDALWarp_GCI_YCbCr_YBand 14L
#undef com_azavea_gdal_GDALWarp_GCI_YCbCr_CbBand
#define com_azavea_gdal_GDALWarp_GCI_YCbCr_CbBand 15L
#undef com_azavea_gdal_GDALWarp_GCI_YCbCr_CrBand
#define com_azavea_gdal_GDALWarp_GCI_YCbCr_CrBand 16L
#undef com_azavea_gdal_GDALWarp_GCI_Max
#define com_azavea_gdal_GDALWarp_GCI_Max 16L
#undef com_azavea_gdal_GDALWarp_SOURCE
#define com_azavea_gdal_GDALWarp_SOURCE 0L
#undef com_azavea_gdal_GDALWarp_WARPED
#define com_azavea_gdal_GDALWarp_WARPED 1L
/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    _init
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_azavea_gdal_GDALWarp__1init
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    deinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_azavea_gdal_GDALWarp_deinit
  (JNIEnv *, jclass);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    _get_version_info
 * Signature: (Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp__1get_1version_1info
  (JNIEnv *, jclass, jstring, jbyteArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    set_config_option
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_azavea_gdal_GDALWarp_set_1config_1option
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_token
 * Signature: (Ljava/lang/String;[Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_azavea_gdal_GDALWarp_get_1token
  (JNIEnv *, jclass, jstring, jobjectArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_block_size
 * Signature: (JIII[I[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1block_1size
  (JNIEnv *, jclass, jlong, jint, jint, jint, jintArray, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_histogram
 * Signature: (JIIIDD[JZZ)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1histogram
  (JNIEnv *, jclass, jlong, jint, jint, jint, jdouble, jdouble, jlongArray, jboolean, jboolean);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_offset
 * Signature: (JIII[D[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1offset
  (JNIEnv *, jclass, jlong, jint, jint, jint, jdoubleArray, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_scale
 * Signature: (JIII[D[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1scale
  (JNIEnv *, jclass, jlong, jint, jint, jint, jdoubleArray, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    noop
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_noop
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_color_interpretation
 * Signature: (JIII[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1color_1interpretation
  (JNIEnv *, jclass, jlong, jint, jint, jint, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_metadata_domain_list
 * Signature: (JIII[[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1metadata_1domain_1list
  (JNIEnv *, jclass, jlong, jint, jint, jint, jobjectArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_metadata
 * Signature: (JIIILjava/lang/String;[[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1metadata
  (JNIEnv *, jclass, jlong, jint, jint, jint, jstring, jobjectArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_metadata_item
 * Signature: (JIIILjava/lang/String;Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1metadata_1item
  (JNIEnv *, jclass, jlong, jint, jint, jint, jstring, jstring, jbyteArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_overview_widths_heights
 * Signature: (JIII[I[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1overview_1widths_1heights
  (JNIEnv *, jclass, jlong, jint, jint, jint, jintArray, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_crs_proj4
 * Signature: (JII[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1crs_1proj4
  (JNIEnv *, jclass, jlong, jint, jint, jbyteArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_crs_wkt
 * Signature: (JII[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1crs_1wkt
  (JNIEnv *, jclass, jlong, jint, jint, jbyteArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_band_nodata
 * Signature: (JIII[D[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1band_1nodata
  (JNIEnv *, jclass, jlong, jint, jint, jint, jdoubleArray, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_band_min_max
 * Signature: (JIIIZ[D[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1band_1min_1max
  (JNIEnv *, jclass, jlong, jint, jint, jint, jboolean, jdoubleArray, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_band_data_type
 * Signature: (JIII[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1band_1data_1type
  (JNIEnv *, jclass, jlong, jint, jint, jint, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_band_count
 * Signature: (JII[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1band_1count
  (JNIEnv *, jclass, jlong, jint, jint, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_width_height
 * Signature: (JII[I)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1width_1height
  (JNIEnv *, jclass, jlong, jint, jint, jintArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_data
 * Signature: (JII[I[III[B)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1data
  (JNIEnv *, jclass, jlong, jint, jint, jintArray, jintArray, jint, jint, jbyteArray);

/*
 * Class:     com_azavea_gdal_GDALWarp
 * Method:    get_transform
 * Signature: (JII[D)I
 */
JNIEXPORT jint JNICALL Java_com_azavea_gdal_GDALWarp_get_1transform
  (JNIEnv *, jclass, jlong, jint, jint, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif
