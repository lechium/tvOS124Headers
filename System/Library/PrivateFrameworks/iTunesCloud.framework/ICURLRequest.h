/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSProgress, NSMutableArray, NSObject, ICRequestContext, NSData, ICURLResponseHandler, NSURLRequest, NSURLSessionTask, NSURLResponse, NSMutableData, NSURL, NSError, NSDictionary, NSString;

@interface ICURLRequest : NSObject <NSProgressReporting> {

	NSMutableArray* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _prioritize;
	BOOL _cancelOnHTTPErrors;
	BOOL _extendedCertificateValidationRequired;
	NSProgress* _progress;
	unsigned long long _maxRetryCount;
	ICRequestContext* _requestContext;
	unsigned long long _retryCount;
	unsigned long long _redirectCount;
	double _retryDelay;
	long long _requestState;
	NSData* _resumeData;
	ICURLResponseHandler* _responseHandler;
	NSURLRequest* _urlRequest;
	NSURLSessionTask* _task;
	long long _type;
	NSObject*<OS_dispatch_semaphore> _waitSemaphore;
	NSURLRequest* _currentURLRequest;
	NSURLResponse* _urlResponse;
	NSMutableData* _responseData;
	NSURL* _responseDataURL;
	NSError* _error;
	NSDictionary* _avDownloadOptions;
	long long _handlingType;
	double _lastUpdateTime;
	double _lastProgressUpdateTime;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest;                                                                            //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                                                                                //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) long long type;                                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> waitSemaphore;                                                         //@synthesize waitSemaphore=_waitSemaphore - In the implementation block
@property (nonatomic,retain) NSURLRequest * currentURLRequest;                                                                       //@synthesize currentURLRequest=_currentURLRequest - In the implementation block
@property (nonatomic,retain) NSURLResponse * urlResponse;                                                                            //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                                                                           //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSURL * responseDataURL;                                                                                //@synthesize responseDataURL=_responseDataURL - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDictionary * avDownloadOptions;                                                                       //@synthesize avDownloadOptions=_avDownloadOptions - In the implementation block
@property (assign,nonatomic) long long handlingType;                                                                                 //@synthesize handlingType=_handlingType - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                                                                                  //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) double lastProgressUpdateTime;                                                                          //@synthesize lastProgressUpdateTime=_lastProgressUpdateTime - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL prioritize;                                                                                        //@synthesize prioritize=_prioritize - In the implementation block
@property (assign,nonatomic) BOOL cancelOnHTTPErrors;                                                                                //@synthesize cancelOnHTTPErrors=_cancelOnHTTPErrors - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetryCount;                                                                       //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,copy,readonly) ICRequestContext * requestContext;                                                               //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                                                                          //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) unsigned long long redirectCount;                                                                       //@synthesize redirectCount=_redirectCount - In the implementation block
@property (assign,nonatomic) double retryDelay;                                                                                      //@synthesize retryDelay=_retryDelay - In the implementation block
@property (assign,nonatomic) long long requestState;                                                                                 //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy,readonly) NSData * resumeData;                                                                             //@synthesize resumeData=_resumeData - In the implementation block
@property (assign,getter=isExtendedCertificateValidationRequired,nonatomic) BOOL extendedCertificateValidationRequired;              //@synthesize extendedCertificateValidationRequired=_extendedCertificateValidationRequired - In the implementation block
@property (nonatomic,retain) ICURLResponseHandler * responseHandler;                                                                 //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prioritize;
-(unsigned long long)redirectCount;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(NSURLRequest *)urlRequest;
-(NSData *)resumeData;
-(void)setPrioritize:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(void)setResponseDataURL:(NSURL *)arg1 ;
-(void)setAvDownloadOptions:(NSDictionary *)arg1 ;
-(void)setHandlingType:(long long)arg1 ;
-(BOOL)isExtendedCertificateValidationRequired;
-(NSURLRequest *)currentURLRequest;
-(void)setCurrentURLRequest:(NSURLRequest *)arg1 ;
-(NSURL *)responseDataURL;
-(NSDictionary *)avDownloadOptions;
-(double)lastProgressUpdateTime;
-(void)setLastProgressUpdateTime:(double)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(BOOL)cancelOnHTTPErrors;
-(void)setCancelOnHTTPErrors:(BOOL)arg1 ;
-(void)setExtendedCertificateValidationRequired:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)waitSemaphore;
-(void)setWaitSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(long long)handlingType;
-(double)retryDelay;
-(void)setRetryDelay:(double)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(unsigned long long)maxRetryCount;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(ICRequestContext *)requestContext;
-(void)setLastUpdateTime:(double)arg1 ;
-(ICURLResponseHandler *)responseHandler;
-(void)setResponseHandler:(ICURLResponseHandler *)arg1 ;
-(void)updateState:(long long)arg1 ;
-(void)setUrlResponse:(NSURLResponse *)arg1 ;
-(NSURLResponse *)urlResponse;
-(void)dealloc;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)completionHandler;
-(NSProgress *)progress;
-(double)lastUpdateTime;
-(NSURLSessionTask *)task;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)requestState;
-(void)setRequestState:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

