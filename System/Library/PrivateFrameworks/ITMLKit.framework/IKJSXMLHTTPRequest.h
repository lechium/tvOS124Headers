/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSEventListenerObject.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/IKJSXMLHTTPRequest.h>
@class NSString, IKDOMDocument, NSDictionary;


@protocol IKJSXMLHTTPRequest <IKJSEventListenerObject,JSExport>
@property (assign) unsigned long long timeout; 
@property (readonly) unsigned readyState; 
@property (readonly) unsigned status; 
@property (retain,readonly) NSString * statusText; 
@property (readonly) NSString * responseText; 
@property (readonly) IKDOMDocument * responseXML; 
@property (retain) NSString * responseType; 
@property (readonly) id response; 
@property (readonly) NSDictionary * metrics; 
@required
-(void)setTimeout:(unsigned long long)arg1;
-(unsigned long long)timeout;
-(NSString *)responseType;
-(void)send:(id)arg1;
-(void)abort;
-(NSString *)responseText;
-(IKDOMDocument *)responseXML;
-(void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
-(void)setRequestHeader:(id)arg1 :(id)arg2;
-(id)getResponseHeader:(id)arg1;
-(id)getAllResponseHeaders;
-(NSString *)statusText;
-(unsigned)readyState;
-(void)setResponseType:(id)arg1;
-(id)init;
-(NSDictionary *)metrics;
-(unsigned)status;
-(id)response;

@end


@protocol IKNetworkRequestRecord;
@class NSString, IKDOMDocument, NSDictionary, NSURL, ISURLOperation, NSMutableArray, NSMutableURLRequest, NSURLSessionConfiguration, NSURLSession, NSURLConnection, NSHTTPURLResponse, NSData, NSError, JSManagedValue, NSNumber;

@interface IKJSXMLHTTPRequest : IKJSEventListenerObject <ISStoreURLOperationDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, IKJSXMLHTTPRequest> {

	BOOL _shouldSquashOnReadyStateEvents;
	os_unfair_lock_s _onReadyStateChangeMessageQueueLock;
	BOOL _async;
	BOOL _inProgress;
	BOOL _jingleRequest;
	BOOL _primeEnabled;
	unsigned _requestStatusCode;
	unsigned _readyState;
	unsigned _status;
	unsigned long long timeout;
	NSURL* _requestURL;
	NSString* _requestId;
	id<IKNetworkRequestRecord> _networkRequestRecord;
	NSString* _dataToSend;
	ISURLOperation* _jingleOperation;
	NSMutableArray* _onReadyStateChangeMessageQueue;
	NSMutableURLRequest* _urlRequest;
	NSURLSessionConfiguration* _urlSessionConfiguration;
	NSURLSession* _urlSession;
	NSURLConnection* _urlConnection;
	NSString* _user;
	NSString* _password;
	long long _primeRetryCount;
	NSHTTPURLResponse* _urlResponse;
	NSData* _receivedData;
	long long _reprimingResponseStatus;
	long long _requestReadyState;
	NSString* _requestStatusText;
	long long _requestResponseType;
	NSError* _requestError;
	NSString* _statusText;
	NSDictionary* _performanceMetrics;
	NSHTTPURLResponse* _cachedURLResponse;
	JSManagedValue* _managedSelf;

}

@property (nonatomic,retain) NSURL * requestURL;                                                        //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,retain) NSString * requestId;                                                      //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,readonly) id<IKNetworkRequestRecord> networkRequestRecord;                         //@synthesize networkRequestRecord=_networkRequestRecord - In the implementation block
@property (nonatomic,copy) NSString * dataToSend;                                                       //@synthesize dataToSend=_dataToSend - In the implementation block
@property (assign,nonatomic) BOOL jingleRequest;                                                        //@synthesize jingleRequest=_jingleRequest - In the implementation block
@property (assign,nonatomic,__weak) ISURLOperation * jingleOperation;                                   //@synthesize jingleOperation=_jingleOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * onReadyStateChangeMessageQueue;                           //@synthesize onReadyStateChangeMessageQueue=_onReadyStateChangeMessageQueue - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * urlRequest;                                          //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * urlSessionConfiguration;                         //@synthesize urlSessionConfiguration=_urlSessionConfiguration - In the implementation block
@property (nonatomic,retain) NSURLSession * urlSession;                                                 //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSURLConnection * urlConnection;                                           //@synthesize urlConnection=_urlConnection - In the implementation block
@property (nonatomic,retain) NSString * user;                                                           //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSString * password;                                                       //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) long long primeRetryCount;                                                 //@synthesize primeRetryCount=_primeRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL primeEnabled;                                                       //@synthesize primeEnabled=_primeEnabled - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * urlResponse;                                           //@synthesize urlResponse=_urlResponse - In the implementation block
@property (retain) NSData * receivedData;                                                               //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,readonly) long long reprimingResponseStatus;                                       //@synthesize reprimingResponseStatus=_reprimingResponseStatus - In the implementation block
@property (assign,nonatomic) long long requestReadyState;                                               //@synthesize requestReadyState=_requestReadyState - In the implementation block
@property (assign,nonatomic) unsigned requestStatusCode;                                                //@synthesize requestStatusCode=_requestStatusCode - In the implementation block
@property (nonatomic,retain) NSString * requestStatusText;                                              //@synthesize requestStatusText=_requestStatusText - In the implementation block
@property (assign,nonatomic) long long requestResponseType;                                             //@synthesize requestResponseType=_requestResponseType - In the implementation block
@property (nonatomic,retain) NSError * requestError;                                                    //@synthesize requestError=_requestError - In the implementation block
@property (assign) unsigned readyState;                                                                 //@synthesize readyState=_readyState - In the implementation block
@property (assign) unsigned status;                                                                     //@synthesize status=_status - In the implementation block
@property (retain) NSString * statusText;                                                               //@synthesize statusText=_statusText - In the implementation block
@property (retain) NSDictionary * performanceMetrics;                                                   //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (retain) NSHTTPURLResponse * cachedURLResponse;                                               //@synthesize cachedURLResponse=_cachedURLResponse - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedSelf;                                              //@synthesize managedSelf=_managedSelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (assign) unsigned long long timeout; 
@property (readonly) NSString * responseText; 
@property (readonly) IKDOMDocument * responseXML; 
@property (retain) NSString * responseType; 
@property (readonly) id response; 
@property (readonly) NSDictionary * metrics; 
+(id)xhrOperationQueue;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)timeout;
-(void)_operationFinished:(id)arg1 ;
-(NSData *)receivedData;
-(NSString *)responseType;
-(NSURLSession *)urlSession;
-(void)send:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSHTTPURLResponse *)cachedURLResponse;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(NSMutableURLRequest *)urlRequest;
-(void)abort;
-(id)initWithAppContext:(id)arg1 jingleRequest:(BOOL)arg2 ;
-(JSManagedValue *)managedSelf;
-(void)setManagedSelf:(JSManagedValue *)arg1 ;
-(void)_setException:(id)arg1 ;
-(void)_openWithMethod:(id)arg1 url:(id)arg2 async:(BOOL)arg3 user:(id)arg4 password:(id)arg5 ;
-(long long)requestReadyState;
-(void)_sendWithData:(id)arg1 ;
-(void)_abort;
-(NSError *)requestError;
-(NSDictionary *)performanceMetrics;
-(id)_timeIntervalSince1970;
-(void)setPerformanceMetrics:(NSDictionary *)arg1 ;
-(long long)requestResponseType;
-(NSString *)responseText;
-(IKDOMDocument *)responseXML;
-(id)responseJSON;
-(id)responseBlob;
-(id)responseArrayBuffer;
-(unsigned)requestStatusCode;
-(NSString *)requestStatusText;
-(id)_constructProgressEventData;
-(NSURLConnection *)urlConnection;
-(void)setUrlConnection:(NSURLConnection *)arg1 ;
-(void)setRequestReadyState:(long long)arg1 ;
-(BOOL)jingleRequest;
-(void)_prime:(id)arg1 ;
-(id)_createStoreOperation:(id)arg1 ;
-(void)setJingleOperation:(ISURLOperation *)arg1 ;
-(id<IKNetworkRequestRecord>)networkRequestRecord;
-(NSURLSessionConfiguration *)urlSessionConfiguration;
-(void)setCachedURLResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setRequestStatusCode:(unsigned)arg1 ;
-(void)setRequestStatusText:(NSString *)arg1 ;
-(void)setRequestError:(NSError *)arg1 ;
-(ISURLOperation *)jingleOperation;
-(void)setDataToSend:(NSString *)arg1 ;
-(id)_loadingWillSendRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)_loadingDidReceiveResponse:(id)arg1 timingData:(id)arg2 ;
-(void)_loadingDidReceiveData:(id)arg1 ;
-(void)_loadingDidFailWithError:(id)arg1 ;
-(void)_loadingDidFinish;
-(BOOL)_isPrimeError:(long long)arg1 output:(id)arg2 ;
-(void)_reprime:(id)arg1 ;
-(long long)primeRetryCount;
-(void)setPrimeRetryCount:(long long)arg1 ;
-(NSString *)dataToSend;
-(void)open:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 ;
-(void)setRequestHeader:(id)arg1 :(id)arg2 ;
-(id)getResponseHeader:(id)arg1 ;
-(id)getAllResponseHeaders;
-(void)setJingleRequest:(BOOL)arg1 ;
-(NSMutableArray *)onReadyStateChangeMessageQueue;
-(void)setOnReadyStateChangeMessageQueue:(NSMutableArray *)arg1 ;
-(void)setUrlSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(BOOL)primeEnabled;
-(long long)reprimingResponseStatus;
-(void)setRequestResponseType:(long long)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(NSString *)statusText;
-(void)setStatusText:(NSString *)arg1 ;
-(unsigned)readyState;
-(void)setReadyState:(unsigned)arg1 ;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
-(void)setResponseType:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)_dequeueReadyStateChangeMessage;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)setReceivedData:(NSData *)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
-(NSHTTPURLResponse *)urlResponse;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2 ;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(id)init;
-(NSDictionary *)metrics;
-(unsigned)status;
-(id)response;
-(NSString *)password;
-(void)setStatus:(unsigned)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

