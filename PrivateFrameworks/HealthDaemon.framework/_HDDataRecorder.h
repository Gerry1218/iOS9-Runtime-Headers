/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataRecorder : NSObject {
    NSMutableArray * _events;
    NSFileHandle * _fileHandle;
    NSOperationQueue * _operationQueue;
    NSString * _path;
    NSDate * _recordStartDate;
}

@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)_queue_flushEvents;
- (void)finalize;
- (id)initWithRecordFile:(id)arg1;
- (id)path;
- (void)recordData:(id)arg1;

@end
