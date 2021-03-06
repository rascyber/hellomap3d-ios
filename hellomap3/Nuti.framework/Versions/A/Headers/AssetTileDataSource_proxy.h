/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "TileDataSource_proxy.h"

/**
 * A tile data source where each map tile is a seperate image file bundled with the application.<br>
 * The requests are generated using a template scheme, where tags in the basePath string are replaced with actual values.<br>
 * The following tags are supported: zoom, x, y, xflipped, yflipped, quadkey.<br>
 * <br>
 * For example, if basePath = "t{zoom}_{x}_{y}.png" and the requested tile has zoom == 2,<br>
 * x == 1 and y == 3, then the tile will be loaded from the following path: "t2_1_2.png".
 */
__attribute__ ((visibility("default"))) @interface NTAssetTileDataSource : NTTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs an AssetTileDataSource object.<br>
 * @param minZoom The minimum zoom level supported by this data source.<br>
 * @param maxZoom The maximum zoom level supported by this data source.<br>
 * @param basePath The base path containing tags (for example, "t{zoom}_{x}_{y}.png").
 */
-(id)initWithMinZoom: (int)minZoom maxZoom: (int)maxZoom basePath: (NSString*)basePath;
-(NTTileData*)loadTile: (NTMapTile*)tile;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

