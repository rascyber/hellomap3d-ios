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


#import "NMLModelLODTreeDataSource_proxy.h"
#import "Projection_proxy.h"

/**
 * A sqlite database based data source for NML model LOD trees. The database must be created using<br>
 * custom toolkit from Nutiteq that supports several input formats like KMZ or GeoJSON.
 */
__attribute__ ((visibility("default"))) @interface NTSqliteNMLModelLODTreeDataSource : NTNMLModelLODTreeDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a SqliteNMLModelLODTreeDataSource object.<br>
 * @param projection The projection for the database. Currently only EPSG3857 is supported.<br>
 * @param fileName The file name of the sqlite database file.
 */
-(id)initWithProjection: (NTProjection*)projection fileName: (NSString*)fileName;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

