### Intro

---

Due to issues running the `geotrellis.raster.gdal.*` module in a Windows environment, where the dependency `gdalwarp-bindings-*.dll` cannot be loaded, the specific problem can be found here ([issues@127](https://github.com/geotrellis/gdal-warp-bindings/issues/127)). I have attempted to compile `gdalwarp-bindings.dll` separately for Windows. Currently, this has only been tried for Windows environment project debugging and should be applied with caution in actual projects, for reference only!

### How to use

---

* `/dll` contains the compiled `gdalwarp_bindings-win64.dll`.

* `/jar`, there is a packaged `gdal-warp-bindings-win64_3.8.0_debug.jar`, intended for use in a Windows environment only. If you need to package other versions, please pay attention to changing the .dll file name in `GDALWarp.java`.
* `/src/gdal-warp-bindings-dll` is the VS 2022 project file used to compile `gdalwarp_bindings-win64.dll`.
* `/src/gdal-warp-bindings-dll/Libs` includes the necessary dependency files (except Java). Remember to download related dependencies.
* `/src/main/BuildHeader.txt` records the command executed to generate `com_azavea_gdal_GDALWarp.h`.

### Dependents

---

**Java version :** jdk1.8.0_202

**Gdal version :** gdal_381_mapserver_801_release_msvc2017_x64

**Boost version :** 1.69.0 

