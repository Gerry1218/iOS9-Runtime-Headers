/* Generated by RuntimeBrowser.
 */

@protocol PLPhotoEditDataExporter <NSObject>

@required

+ (NSData *)dataFromPhotoEditModel:(PLPhotoEditModel *)arg1 imageWidth:(unsigned int)arg2 imageHeight:(unsigned int)arg3 exifOrientation:(int)arg4;
+ (NSString *)formatIdentifier;
+ (NSString *)formatVersion;

@end
