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


#import "Layer_proxy.h"
#import "LayerVector_proxy.h"

/**
 * Container for all raster and vector layers of the map view.<br>
 * <br>
 * The order in which layers are added is important for vector elements like Points, Lines<br>
 * and Polygons. For these elements the layer ordering defines their draw order.<br>
 * Other elements like NMLModels and Polygon3Ds are z ordered and are drawn using the depth buffer.<br>
 * For Billboard elements like Markers and Labels, the layer ordering is unimportant, because<br>
 * they will be sorted from back to front and drawn in that order on top of all other vector elements.
 */
__attribute__ ((visibility("default"))) @interface NTLayers : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Adds a new layer to the layer stack.<br>
 * @param layer The layer to be added.
 */
-(void)add: (NTLayer*)layer;
/**
 * Removes a layer to the layer stack.<br>
 * @param layer The layer to be removed.
 */
-(BOOL)remove: (NTLayer*)layer;
/**
 * Returns a list of layers. The layers are in the order in which they were added.<br>
 * @return A vector of all previously added layers.
 */
-(NTLayerVector*)getLayers;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

