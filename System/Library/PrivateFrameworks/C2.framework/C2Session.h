/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <C2/C2RequestDelegate.h>
#import <C2/C2SessionTaskDelegate.h>

@protocol C2SessionDelegate;
@class NSString, NSURLSession, C2RequestOptions, NSMutableDictionary, NSOperationQueue;

@interface C2Session : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionTaskDelegate> {

	BOOL _isComplete;
	NSString* _sessionConfigurationName;
	NSURLSession* _session;
	C2RequestOptions* _options;
	NSString* _originalHost;
	NSString* _routeHost;
	double _routeLastUpdated;
	id<C2SessionDelegate> _sessionDelegate;
	double _emptyTimestamp;
	NSMutableDictionary* _wrappedTaskByTaskDescription;
	NSOperationQueue* _queue;
	/*^block*/id _testBehavior_sessionInvalidated_cfnetwork;
	/*^block*/id _testBehavior_sessionInvalidated_shouldInvalidate;
	/*^block*/id _testBehavior_cleanupRetainCycle;

}

@property (nonatomic,retain) NSString * originalHost;                                           //@synthesize originalHost=_originalHost - In the implementation block
@property (nonatomic,retain) NSString * routeHost;                                              //@synthesize routeHost=_routeHost - In the implementation block
@property (assign,nonatomic) double routeLastUpdated;                                           //@synthesize routeLastUpdated=_routeLastUpdated - In the implementation block
@property (assign,nonatomic) BOOL isComplete;                                                   //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,retain) id<C2SessionDelegate> sessionDelegate;                             //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (assign,nonatomic) double emptyTimestamp;                                             //@synthesize emptyTimestamp=_emptyTimestamp - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * wrappedTaskByTaskDescription;              //@synthesize wrappedTaskByTaskDescription=_wrappedTaskByTaskDescription - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id testBehavior_sessionInvalidated_cfnetwork;                        //@synthesize testBehavior_sessionInvalidated_cfnetwork=_testBehavior_sessionInvalidated_cfnetwork - In the implementation block
@property (nonatomic,copy) id testBehavior_sessionInvalidated_shouldInvalidate;                 //@synthesize testBehavior_sessionInvalidated_shouldInvalidate=_testBehavior_sessionInvalidated_shouldInvalidate - In the implementation block
@property (nonatomic,copy) id testBehavior_cleanupRetainCycle;                                  //@synthesize testBehavior_cleanupRetainCycle=_testBehavior_cleanupRetainCycle - In the implementation block
@property (nonatomic,readonly) NSString * sessionConfigurationName;                             //@synthesize sessionConfigurationName=_sessionConfigurationName - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) C2RequestOptions * options;                                 //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)portFromURL:(id)arg1 ;
-(NSURLSession *)session;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<C2SessionDelegate>)sessionDelegate;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(id)initWithSessionConfigurationName:(id)arg1 routeHost:(id)arg2 options:(id)arg3 sessionDelegate:(id)arg4 ;
-(void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setIsComplete:(BOOL)arg1 ;
-(NSString *)originalHost;
-(void)setOriginalHost:(NSString *)arg1 ;
-(NSMutableDictionary *)wrappedTaskByTaskDescription;
-(void)_recalculateSessionDelegateQueuePriority;
-(void)removeTask:(id)arg1 ;
-(void)cleanupRetainCycle;
-(void)sessionTaskDelegateCallbackHelper:(id)arg1 task:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)C2Session:(id)arg1 sessionTask:(id)arg2 updatedRoute:(id)arg3 ;
-(id)createTaskWithOptions:(id)arg1 delegate:(id)arg2 ;
-(id)addTask:(id)arg1 withDescription:(id)arg2 request:(id)arg3 ;
-(BOOL)shouldInvalidateAndCancel;
-(void)testBehavior_triggerSessionExpiry;
-(NSString *)sessionConfigurationName;
-(NSString *)routeHost;
-(void)setRouteHost:(NSString *)arg1 ;
-(double)routeLastUpdated;
-(void)setRouteLastUpdated:(double)arg1 ;
-(double)emptyTimestamp;
-(void)setEmptyTimestamp:(double)arg1 ;
-(id)testBehavior_sessionInvalidated_cfnetwork;
-(void)setTestBehavior_sessionInvalidated_cfnetwork:(id)arg1 ;
-(id)testBehavior_sessionInvalidated_shouldInvalidate;
-(void)setTestBehavior_sessionInvalidated_shouldInvalidate:(id)arg1 ;
-(id)testBehavior_cleanupRetainCycle;
-(void)setTestBehavior_cleanupRetainCycle:(id)arg1 ;
-(void)dealloc;
-(C2RequestOptions *)options;
-(BOOL)isComplete;
-(void)setSessionDelegate:(id<C2SessionDelegate>)arg1 ;
-(NSOperationQueue *)queue;
@end

