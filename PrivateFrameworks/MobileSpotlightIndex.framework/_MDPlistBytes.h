/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSpotlightIndex.framework/MobileSpotlightIndex
 */

@interface _MDPlistBytes : NSObject {
    unsigned int  _byteVector;
    unsigned int  _byteVectorCapacity;
    unsigned int  _byteVectorCnt;
    unsigned int  _didFinalize;
    unsigned int  _isBad;
    unsigned int  _isMutable;
    unsigned int  _isMutating;
    struct __CFArray { } * _rleQueue;
    unsigned int  _shouldDeallocate;
    int  _uidCapacity;
    int  _uidCount;
    unsigned long long * _uidVector;
    unsigned int  _useMalloc;
    unsigned long long * _wrapperPtr;
}

+ (struct __MDPlistBytes { }*)createArrayPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createDictionaryPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createPlistBytes:(id)arg1;
+ (struct __MDPlistBytes { }*)emptyArrayPlistBytes;
+ (struct __MDPlistBytes { }*)emptyDictionaryPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(BOOL)arg3 usingBlock:(id /* block */)arg4;
+ (struct __MDPlistBytes { }*)nullObjectPlistBytes;

- (unsigned long)_cfTypeID;
- (struct __CFData { }*)copyData;
- (struct __CFData { }*)copyDataWithBytesNoCopy;
- (id)createDispatchData;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)finalize;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end
