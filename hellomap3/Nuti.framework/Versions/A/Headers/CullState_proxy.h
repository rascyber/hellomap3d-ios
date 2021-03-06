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


#import "Frustum_proxy.h"
#import "MapEnvelope_proxy.h"
#import "MapPos_proxy.h"
#import "ViewState_proxy.h"

/**
 * View specific state determined by the culling process. This includes <br>
 * convex envelope of the visible area, view frustum, tiles and camera state.
 */
__attribute__ ((visibility("default"))) @interface NTCullState : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a CullState object from an envelope, visible and preloading frustums, a preloading camera<br>
 * position and a viewstate.<br>
 * @param envelope The envelope.<br>
 * @param preloadingFrustum The preloading frustum.<br>
 * @param preloadingCameraPos The preloading camera position.<br>
 * @param viewState The view state.
 */
-(id)initWithEnvelope: (NTMapEnvelope*)envelope preloadingFrustum: (NTFrustum*)preloadingFrustum preloadingCameraPos: (NTMapPos*)preloadingCameraPos viewState: (NTViewState*)viewState;
/**
 * Returns an envelope for the visible area.<br>
 * @return The envelope for the visible area in the internal coordiante system.
 */
-(NTMapEnvelope*)getEnvelope;
/**
 * Returns a frustum for the area that is not visible, but should still be drawn.<br>
 * @return The frustum for the preloading area in the internal coordiante system.
 */
-(NTFrustum*)getPreloadingFrustum;
/**
 * Returns a modified camera pos, that was used for calculating the preloading frustum.<br>
 * @return The modified preloading camera position in the internal coordinate system.
 */
-(NTMapPos*)getPreloadingCameraPos;
/**
 * Returns a view state.<br>
 * @return The view state.
 */
-(NTViewState*)getViewState;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

