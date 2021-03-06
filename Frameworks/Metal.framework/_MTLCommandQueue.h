/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLCommandQueue : NSObject {
    BOOL  _StatEnabled;
    unsigned long long  _StatLocations;
    unsigned long long  _StatOptions;
    int  _backgroundTrackingPID;
    NSObject<OS_dispatch_semaphore> * _commandBufferSemaphore;
    NSObject<OS_dispatch_queue> * _commandQueueDispatch;
    NSObject<OS_dispatch_source> * _commandQueueEventSource;
    NSMutableDictionary * _counterInfo;
    BOOL  _executionEnabled;
    unsigned long long  _globalTraceObjectID;
    NSString * _label;
    unsigned long long  _labelTraceID;
    unsigned int  _numCommandBuffers;
    unsigned int  _numInternalSampleCounters;
    unsigned int  _numRequestedCounters;
    NSMutableArray * _pendingQueue;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _pendingQueueLock;
    id /* block */  _perfSampleHandlerBlock;
    BOOL  _profilingEnabled;
    BOOL  _skipRender;
    NSObject<OS_dispatch_group> * _submittedGroup;
    NSMutableArray * _submittedQueue;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _submittedQueueLock;
}

@property (getter=isStatEnabled, nonatomic) BOOL StatEnabled;
@property (getter=getStatLocations, nonatomic) unsigned long long StatLocations;
@property (getter=getStatOptions, nonatomic) unsigned long long StatOptions;
@property int backgroundTrackingPID;
@property (getter=counterInfo, retain) NSMutableDictionary *counterInfo;
@property BOOL executionEnabled;
@property (readonly) unsigned long long globalTraceObjectID;
@property (copy) NSString *label;
@property (nonatomic) unsigned int numCommandBuffers;
@property (getter=numInternalSampleCounters, nonatomic) unsigned int numInternalSampleCounters;
@property (getter=numRequestedCounters, nonatomic) unsigned int numRequestedCounters;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property BOOL skipRender;

- (unsigned long long)StatLocations;
- (unsigned long long)StatOptions;
- (void)_submitAvailableCommandBuffers;
- (void)addPerfSampleHandler:(id /* block */)arg1;
- (void)availableCounters;
- (int)backgroundTrackingPID;
- (void)commandBufferDidComplete:(id)arg1 timestamp:(unsigned long long)arg2 error:(unsigned int)arg3;
- (void)commitCommandBuffer:(id)arg1 wake:(BOOL)arg2;
- (void)completeCommandBuffers:(id*)arg1 count:(unsigned int)arg2;
- (id)counterInfo;
- (void)dealloc;
- (id)description;
- (void)enqueueCommandBuffer:(id)arg1;
- (BOOL)executionEnabled;
- (void)finish;
- (unsigned int)getAndIncrementNumCommandBuffers;
- (unsigned long long)getStatLocations;
- (unsigned long long)getStatOptions;
- (unsigned long long)globalTraceObjectID;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 maxCommandBufferCount:(unsigned long)arg2;
- (void)insertDebugCaptureBoundary;
- (BOOL)isProfilingEnabled;
- (BOOL)isStatEnabled;
- (id)label;
- (unsigned int)numCommandBuffers;
- (unsigned int)numInternalSampleCounters;
- (unsigned int)numRequestedCounters;
- (void)requestCounters:(id)arg1;
- (void)setBackgroundTrackingPID:(int)arg1;
- (void)setCounterInfo:(id)arg1;
- (void)setExecutionEnabled:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setNumCommandBuffers:(unsigned int)arg1;
- (void)setNumInternalSampleCounters:(unsigned int)arg1;
- (void)setNumRequestedCounters:(unsigned int)arg1;
- (void)setProfilingEnabled:(BOOL)arg1;
- (void)setSkipRender:(BOOL)arg1;
- (void)setStatEnabled:(BOOL)arg1;
- (void)setStatLocations:(unsigned long long)arg1;
- (void)setStatOptions:(unsigned long long)arg1;
- (void)setSubmissionQueue:(id)arg1;
- (BOOL)skipRender;
- (void)submitCommandBuffers:(const id*)arg1 count:(unsigned int)arg2;

@end
