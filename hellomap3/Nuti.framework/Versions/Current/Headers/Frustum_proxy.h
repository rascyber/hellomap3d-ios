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


#import "MapBounds_proxy.h"
#import "MapPos_proxy.h"
#import "Matrices_proxy.h"

/**
 * A 3D frustum defined by 6 clipping planes.
 */
__attribute__ ((visibility("default"))) @interface NTFrustum : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs an empty frustum where all corners coordinate are 0.
 */
-(id)init;
/**
 * Constructs a frustum from a modelview projection matrix.<br>
 * @param mvpMatrix The modelview projection matrix.
 */
-(id)initWithMvpMatrix: (NTMatrix4D*)mvpMatrix;
/**
 * Tests if a point is inside with the frustum.<br>
 * @param point The point to be tested.<br>
 * @return True if the point lies within the frustum.
 */
-(BOOL)pointInside: (NTMapPos*)point;
/**
 * Tests if a circle on the z = 0 plane inersects with the frustum.<br>
 * @param center The center position of the circle.<br>
 * @param radius The radius of the circle.<br>
 * @return True if the circle intersects with the frustum.
 */
-(BOOL)circleIntersects: (NTMapPos*)center radius: (double)radius;
/**
 * Tests if a sphere inersects with the frustum.<br>
 * @param center The center position of the sphere.<br>
 * @param radius The radius of the sphere.<br>
 * @return True if the sphere intersects with the frustum.
 */
-(BOOL)sphereIntersects: (NTMapPos*)center radius: (double)radius;
/**
 * Tests if an axis aligned square on the z = 0 plane inersects with the frustum.<br>
 * @param square The axis aligned square.<br>
 * @return True if the square intersects with the frustum.
 */
-(BOOL)squareIntersects: (NTMapBounds*)square;
/**
 * Tests if an axis aligned cuboid inersects with the frustum.<br>
 * @param cuboid The axis aligned cuboid.<br>
 * @return True if the cuboid intersects with the frustum.
 */
-(BOOL)cuboidIntersects: (NTMapBounds*)cuboid;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

