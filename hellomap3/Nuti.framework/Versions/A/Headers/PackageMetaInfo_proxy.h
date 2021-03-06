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

/**
 * Meta info type.
 */
enum NTPackageMetaInfo_Type {
/**
 * Null element.
 */
  NTPackageMetaInfo_NULL_TYPE,
/**
 * String element.
 */
  NTPackageMetaInfo_STRING_TYPE,
/**
 * Boolean element.
 */
  NTPackageMetaInfo_BOOL_TYPE,
/**
 * Integer element.
 */
  NTPackageMetaInfo_INTEGER_TYPE,
/**
 * Double-precision floating point element.
 */
  NTPackageMetaInfo_DOUBLE_TYPE,
/**
 * Array element.
 */
  NTPackageMetaInfo_ARRAY_TYPE,
/**
 * Map (dictionary) element.
 */
  NTPackageMetaInfo_MAP_TYPE
};


#import "StringVector_proxy.h"

/**
 * Package meta info element. Can contain JSON-style structured data, including objects and arrays.
 */
__attribute__ ((visibility("default"))) @interface NTPackageMetaInfo : NSObject
{
	void *swigCPtr;
	BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Returns the underlying JSON value.<br>
 * @return The value of the element.
 */
-(NSString*)getJsonValue;
/**
 * Returns the type of this meta info element.<br>
 * @return The type of this element.
 */
-(enum NTPackageMetaInfo_Type)getType;
/**
 * Returns the string value of this element.<br>
 * @return The string value of the element. If the element is not string, empty string will be returned.
 */
-(NSString*)getString;
/**
 * Returns the boolean value of this element.<br>
 * @return The boolean value of the element. If the element is not boolean, false will be returned.
 */
-(BOOL)getBool;
/**
 * Returns the integer value of this element.<br>
 * @return The integer value of the element. If the element is not integer, 0 will be returned.
 */
-(long long)getLong;
/**
 * Returns the floating point value of this element.<br>
 * @return The floating point value of the element. If the element is integer, it will be converted to floating point. Otherwise 0.0 is be returned.
 */
-(double)getDouble;
/**
 * Returns the number of elements in the array.<br>
 * @return The number of elements in the array if the element is of array type. Otherwise 0 is returned.
 */
-(int)getArraySize;
/**
 * Returns the element of array at specified position.<br>
 * @param idx The index of the array element to return (starting from 0).<br>
 * @return The array element at specified position or null if the element does not exist.
 */
-(NTPackageMetaInfo*)getArrayElement: (int)idx;
/**
 * Returns all the keys in the map.<br>
 * @return The list containing all the keys of the map if the element is of map type. Otherwise empty list is returned.
 */
-(NTStringVector*)getMapKeys;
/**
 * Returns the element of map with the specified key.<br>
 * @param key The key of the map element to return.<br>
 * @return The map element with the specified key or null if the element does not exist.
 */
-(NTPackageMetaInfo*)getMapElement: (NSString*)key;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

