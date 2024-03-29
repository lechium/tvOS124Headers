/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/C2RequestDelegate.h>
#import <libobjc.A.dylib/CKDZoneGatekeeperWaiter.h>
#import <libobjc.A.dylib/CKDProtobufMessageSigningDelegate.h>
#import <libobjc.A.dylib/CKDFlowControllable.h>

@protocol CKDAccountInfoProvider, OS_os_activity, CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, OS_dispatch_queue, OS_voucher;
@class NSString, CKDResponseBodyParser, NSData, CKDProtobufStreamWriter, NSObject, NSDictionary, NSArray, CKTimeLogger, CKDProtocolTranslator, NSError, CKDOperation, NSURLSessionDataTask, C2RequestOptions, NSURLRequest, NSHTTPURLResponse, NSURLSession, NSMutableSet, CKDTrafficLogger, NSDate, CKDOperationMetrics, CKDTapToRadarRequest, NSMutableDictionary, NSMutableArray, NSNumber, CKDClientContext, NSInputStream, NSURL;

@interface CKDURLRequest : NSObject <C2RequestDelegate, CKDZoneGatekeeperWaiter, CKDProtobufMessageSigningDelegate, CKDFlowControllable> {

	id<CKDAccountInfoProvider> _accountInfoProvider;
	long long _responseStatusCode;
	NSString* _requestUUID;
	BOOL _didSendRequest;
	BOOL _didFinishLoading;
	BOOL _finished;
	BOOL _didRetrySignature;
	CKDResponseBodyParser* _responseBodyParser;
	BOOL _allowAutomaticRedirects;
	/*^block*/id _requestProgressBlock;
	/*^block*/id _responseProgressBlock;
	/*^block*/id _completionBlock;
	NSData* _fakeResponseData;
	BOOL _haveParsedFakeResponseData;
	CKDProtobufStreamWriter* _streamWriter;
	CC_SHA256state_st _mescalTxSignature;
	NSObject*<OS_os_activity> _osActivity;
	NSObject*<OS_os_activity> _transmissionActivity;
	BOOL _needsAuthRetry;
	BOOL _isWaitingOnAuthRenew;
	BOOL _isHandlingAuthRetry;
	BOOL _didRetryAuth;
	BOOL _cancelled;
	BOOL _haveCachedServerType;
	BOOL _haveCachedPartitionType;
	BOOL _didReceiveResponseBodyData;
	NSDictionary* _requestProperties;
	NSArray* _requestOperations;
	CKTimeLogger* _timeLogger;
	id<CKDURLRequestMetricsDelegate> _metricsDelegate;
	id<CKDURLRequestAuthRetryDelegate> _authRetryDelegate;
	CKDProtocolTranslator* _translator;
	NSString* _automatedDeviceGroup;
	NSDictionary* _clientProvidedAdditionalHeaderValues;
	NSDictionary* _fakeResponseOperationResultByItemID;
	NSError* _error;
	CKDOperation* _operation;
	NSObject*<OS_dispatch_queue> _lifecycleQueue;
	NSURLSessionDataTask* _urlSessionTask;
	C2RequestOptions* _c2RequestOptions;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSURLSession* _urlSession;
	NSMutableSet* _responseObjectUUIDs;
	CKDTrafficLogger* _trafficLogger;
	NSString* _deviceID;
	unsigned long long _numDownloadedElements;
	long long _cachedServerType;
	long long _cachedPartitionType;
	NSDate* _dateRequestWentOut;
	CKDOperationMetrics* _metrics;
	NSDictionary* _timingData;
	NSObject*<OS_voucher> _voucher;
	NSString* _cloudKitAuthToken;
	NSString* _iCloudAuthToken;
	NSString* _serverProvidedAutoBugCaptureReason;
	CKDTapToRadarRequest* _serverProvidedTapToRadarRequest;
	NSString* _serverProvidedAutoSysdiagnoseCollectionReason;
	NSMutableDictionary* _countsByRequestOperationType;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;

}

@property (assign,nonatomic,__weak) CKDOperation * operation;                                          //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lifecycleQueue;                              //@synthesize lifecycleQueue=_lifecycleQueue - In the implementation block
@property (retain) NSURLSessionDataTask * urlSessionTask;                                              //@synthesize urlSessionTask=_urlSessionTask - In the implementation block
@property (retain) C2RequestOptions * c2RequestOptions;                                                //@synthesize c2RequestOptions=_c2RequestOptions - In the implementation block
@property (retain) NSURLRequest * request;                                                             //@synthesize request=_request - In the implementation block
@property (retain) NSHTTPURLResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (retain) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
@property (retain) NSURLSession * urlSession;                                                          //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSMutableSet * responseObjectUUIDs;                                       //@synthesize responseObjectUUIDs=_responseObjectUUIDs - In the implementation block
@property (nonatomic,retain) CKDTrafficLogger * trafficLogger;                                         //@synthesize trafficLogger=_trafficLogger - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) unsigned long long numDownloadedElements;                                 //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (assign,nonatomic) BOOL didRetryAuth;                                                        //@synthesize didRetryAuth=_didRetryAuth - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                                         //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL haveCachedServerType;                                                //@synthesize haveCachedServerType=_haveCachedServerType - In the implementation block
@property (assign,nonatomic) BOOL haveCachedPartitionType;                                             //@synthesize haveCachedPartitionType=_haveCachedPartitionType - In the implementation block
@property (assign,nonatomic) long long cachedServerType;                                               //@synthesize cachedServerType=_cachedServerType - In the implementation block
@property (assign,nonatomic) long long cachedPartitionType;                                            //@synthesize cachedPartitionType=_cachedPartitionType - In the implementation block
@property (nonatomic,retain) CKDProtocolTranslator * translator;                                       //@synthesize translator=_translator - In the implementation block
@property (retain) NSDate * dateRequestWentOut;                                                        //@synthesize dateRequestWentOut=_dateRequestWentOut - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * metrics;                                            //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * timingData;                                                //@synthesize timingData=_timingData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> voucher;                                            //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,retain) NSString * cloudKitAuthToken;                                             //@synthesize cloudKitAuthToken=_cloudKitAuthToken - In the implementation block
@property (nonatomic,retain) NSString * iCloudAuthToken;                                               //@synthesize iCloudAuthToken=_iCloudAuthToken - In the implementation block
@property (assign,nonatomic) BOOL didReceiveResponseBodyData;                                          //@synthesize didReceiveResponseBodyData=_didReceiveResponseBodyData - In the implementation block
@property (nonatomic,copy) NSString * serverProvidedAutoBugCaptureReason;                              //@synthesize serverProvidedAutoBugCaptureReason=_serverProvidedAutoBugCaptureReason - In the implementation block
@property (nonatomic,retain) CKDTapToRadarRequest * serverProvidedTapToRadarRequest;                   //@synthesize serverProvidedTapToRadarRequest=_serverProvidedTapToRadarRequest - In the implementation block
@property (nonatomic,retain) NSString * serverProvidedAutoSysdiagnoseCollectionReason;                 //@synthesize serverProvidedAutoSysdiagnoseCollectionReason=_serverProvidedAutoSysdiagnoseCollectionReason - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countsByRequestOperationType;                       //@synthesize countsByRequestOperationType=_countsByRequestOperationType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overriddenHeaders;                                  //@synthesize overriddenHeaders=_overriddenHeaders - In the implementation block
@property (nonatomic,retain) NSMutableArray * redirectHistory;                                         //@synthesize redirectHistory=_redirectHistory - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) BOOL automaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) unsigned long long discretionaryNetworkBehavior; 
@property (nonatomic,readonly) BOOL preferAnonymousRequests; 
@property (nonatomic,readonly) BOOL allowsBackgroundNetworking; 
@property (nonatomic,readonly) NSString * operationIDForProtobuf; 
@property (nonatomic,readonly) NSString * operationGroupID; 
@property (nonatomic,readonly) NSString * operationGroupName; 
@property (nonatomic,readonly) NSNumber * operationGroupQuantity; 
@property (nonatomic,readonly) unsigned long long networkServiceType; 
@property (nonatomic,readonly) BOOL allowsPowerNapScheduling; 
@property (nonatomic,readonly) NSString * operationID; 
@property (nonatomic,retain) CKTimeLogger * timeLogger;                                                //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,retain) id<CKDAccountInfoProvider> accountInfoProvider;                           //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CKDURLRequestMetricsDelegate> metricsDelegate;                  //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKDURLRequestAuthRetryDelegate> authRetryDelegate;              //@synthesize authRetryDelegate=_authRetryDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowAutomaticRedirects;                                             //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (nonatomic,retain) NSDictionary * requestProperties;                                         //@synthesize requestProperties=_requestProperties - In the implementation block
@property (nonatomic,readonly) BOOL usesBackgroundSession; 
@property (nonatomic,readonly) BOOL sendRequestAnonymously; 
@property (nonatomic,retain) NSString * automatedDeviceGroup;                                          //@synthesize automatedDeviceGroup=_automatedDeviceGroup - In the implementation block
@property (nonatomic,readonly) CKDClientContext * context; 
@property (nonatomic,readonly) long long databaseScope; 
@property (nonatomic,readonly) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,readonly) CKDProtobufStreamWriter * streamWriter;                                 //@synthesize streamWriter=_streamWriter - In the implementation block
@property (nonatomic,copy) id requestProgressBlock;                                                    //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                                   //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) CKDResponseBodyParser * responseBodyParser;                               //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (nonatomic,readonly) NSString * httpMethod; 
@property (nonatomic,readonly) NSDictionary * additionalHeaderValues; 
@property (nonatomic,retain) NSDictionary * clientProvidedAdditionalHeaderValues;                      //@synthesize clientProvidedAdditionalHeaderValues=_clientProvidedAdditionalHeaderValues - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestBody; 
@property (nonatomic,readonly) BOOL expectsResponseBody; 
@property (nonatomic,readonly) NSInputStream * requestBodyStream; 
@property (nonatomic,readonly) NSArray * requestOperations;                                            //@synthesize requestOperations=_requestOperations - In the implementation block
@property (nonatomic,readonly) NSArray * requestOperationClasses; 
@property (nonatomic,readonly) int isolationLevel; 
@property (nonatomic,readonly) int operationType; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) long long serverType; 
@property (nonatomic,readonly) long long partitionType; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL shouldCompressBody; 
@property (nonatomic,readonly) NSString * acceptContentType; 
@property (nonatomic,readonly) NSString * requestContentType; 
@property (nonatomic,readonly) NSString * protobufOperationName; 
@property (nonatomic,readonly) BOOL requestGETPreAuth; 
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,retain) NSDictionary * fakeResponseOperationResultByItemID;                       //@synthesize fakeResponseOperationResultByItemID=_fakeResponseOperationResultByItemID - In the implementation block
@property (readonly) BOOL isFinished; 
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
@property (nonatomic,readonly) long long responseStatusCode;                                           //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) NSURL * lastRedirectURL; 
@property (nonatomic,readonly) NSString * requestUUID;                                                 //@synthesize requestUUID=_requestUUID - In the implementation block
@property (assign) BOOL needsAuthRetry;                                                                //@synthesize needsAuthRetry=_needsAuthRetry - In the implementation block
@property (assign) BOOL isWaitingOnAuthRenew;                                                          //@synthesize isWaitingOnAuthRenew=_isWaitingOnAuthRenew - In the implementation block
@property (assign) BOOL isHandlingAuthRetry;                                                           //@synthesize isHandlingAuthRetry=_isHandlingAuthRetry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long qualityOfService; 
@property (nonatomic,readonly) NSString * flowControlKey; 
-(long long)serverType;
-(BOOL)allowsPowerNapScheduling;
-(unsigned long long)networkServiceType;
-(NSURLSession *)urlSession;
-(BOOL)allowsCellularAccess;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)requestOptions;
-(id)deviceIdentifier;
-(NSString *)httpMethod;
-(void)finishWithError:(id)arg1 ;
-(void)setRequestProperties:(NSDictionary *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSObject*<OS_voucher>)voucher;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(double)timeoutIntervalForRequest;
-(long long)qualityOfService;
-(long long)databaseScope;
-(BOOL)usesBackgroundSession;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(CKTimeLogger *)timeLogger;
-(void)setAccountInfoProvider:(id<CKDAccountInfoProvider>)arg1 ;
-(void)setFakeResponseOperationResultByItemID:(NSDictionary *)arg1 ;
-(void)performRequest;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(NSString *)authPromptReason;
-(BOOL)automaticallyRetryNetworkFailures;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(double)timeoutIntervalForResource;
-(NSString *)operationGroupID;
-(NSString *)operationGroupName;
-(NSString *)flowControlKey;
-(id)ckShortDescription;
-(void)setClientProvidedAdditionalHeaderValues:(NSDictionary *)arg1 ;
-(void)setMetricsDelegate:(id<CKDURLRequestMetricsDelegate>)arg1 ;
-(void)setAuthRetryDelegate:(id<CKDURLRequestAuthRetryDelegate>)arg1 ;
-(NSString *)requestUUID;
-(NSString *)automatedDeviceGroup;
-(void)setAutomatedDeviceGroup:(NSString *)arg1 ;
-(id)requestOperationCountsByOperationType;
-(NSDictionary *)responseHeaders;
-(BOOL)requiresTokenRegistration;
-(BOOL)allowsAnonymousAccount;
-(void)_tearDownStreamWriter;
-(NSURLSessionDataTask *)urlSessionTask;
-(NSObject*<OS_dispatch_queue>)lifecycleQueue;
-(id)generateRequestOperations;
-(NSArray *)requestOperations;
-(id<CKDAccountInfoProvider>)accountInfoProvider;
-(BOOL)includeContainerInfo;
-(BOOL)sendRequestAnonymously;
-(int)isolationLevel;
-(NSNumber *)operationGroupQuantity;
-(BOOL)requestGETPreAuth;
-(id)createAssetAuthorizeGetRequestOptionsHeaderInfoWithKey:(id)arg1 value:(id)arg2 ;
-(BOOL)requiresSignature;
-(void)_addRequestHeadersToTransmittedSignature:(id)arg1 ;
-(id)operationRequestWithType:(int)arg1 ;
-(void)_registerRequestOperationTypesForOperations:(id)arg1 ;
-(CKDProtobufStreamWriter *)streamWriter;
-(NSMutableDictionary *)countsByRequestOperationType;
-(void)setCountsByRequestOperationType:(NSMutableDictionary *)arg1 ;
-(id<CKDURLRequestAuthRetryDelegate>)authRetryDelegate;
-(BOOL)usesiCloudAuthToken;
-(BOOL)usesCloudKitAuthToken;
-(void)setIsWaitingOnAuthRenew:(BOOL)arg1 ;
-(NSString *)cloudKitAuthToken;
-(NSString *)iCloudAuthToken;
-(BOOL)didRetryAuth;
-(void)setDidRetryAuth:(BOOL)arg1 ;
-(void)setIsHandlingAuthRetry:(BOOL)arg1 ;
-(void)tearDownResourcesAndReleaseTheZoneLocks;
-(void)performOnLifecycleQueueIfNotFinished:(/*^block*/id)arg1 ;
-(void)_renewAuthTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleAuthFailure;
-(long long)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2 ;
-(NSMutableSet *)responseObjectUUIDs;
-(CKDProtocolTranslator *)translator;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(long long)_handleServerJSONResult:(id)arg1 ;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(long long)_handlePlistResult:(id)arg1 ;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(Class)expectedResponseClass;
-(BOOL)parsingStandaloneMessage;
-(/*^block*/id)_protobufObjectParsedBlock;
-(CKDTrafficLogger *)trafficLogger;
-(/*^block*/id)_jsonObjectParsedBlock;
-(/*^block*/id)_xmlObjectParsedBlock;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(void)requestDidParse509CertObject:(id)arg1 ;
-(void)_finishOnLifecycleQueueWithError:(id)arg1 ;
-(NSArray *)requestOperationClasses;
-(long long)partitionType;
-(NSString *)protobufOperationName;
-(BOOL)shouldCompressBody;
-(void)setDidReceiveResponseBodyData:(BOOL)arg1 ;
-(void)_setupPublicDatabaseURL;
-(void)performASyncOnLifecycleQueueIfNotFinished:(/*^block*/id)arg1 ;
-(BOOL)requiresAppPartitionURL;
-(void)_setupPrivateDatabaseURL;
-(BOOL)requiresUserPartitionURL;
-(void)_setupConfiguration;
-(BOOL)requiresConfiguration;
-(void)_setupMescal;
-(void)_fetchContainerScopedUserID;
-(BOOL)allowsAuthedAccount;
-(void)setTranslator:(CKDProtocolTranslator *)arg1 ;
-(void)_fetchDeviceID;
-(BOOL)requiresDeviceID;
-(void)_acquireZoneGates;
-(void)_performRequest;
-(id)zoneIDsToLock;
-(void)_prepareAuthTokens;
-(void)_prepareCloudKitAuthToken;
-(void)prepareRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudKitAuthToken:(NSString *)arg1 ;
-(void)_authTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setICloudAuthToken:(NSString *)arg1 ;
-(void)_registerPushTokens;
-(BOOL)validate:(id*)arg1 ;
-(NSDictionary *)requestProperties;
-(BOOL)hasRequestBody;
-(NSString *)requestContentType;
-(NSString *)acceptContentType;
-(NSString *)operationIDForProtobuf;
-(NSDictionary *)additionalHeaderValues;
-(NSDictionary *)clientProvidedAdditionalHeaderValues;
-(NSMutableDictionary *)overriddenHeaders;
-(Class)requestMessageClass;
-(void)_loadRequest:(id)arg1 ;
-(void)tearDownResources;
-(void)setResponseBodyParser:(CKDResponseBodyParser *)arg1 ;
-(void)setUrlSessionTask:(NSURLSessionDataTask *)arg1 ;
-(id)_CFNetworkTaskIdentifierString;
-(void)setDateRequestWentOut:(NSDate *)arg1 ;
-(BOOL)_onLifecycleQueue;
-(id)_wrapErrorIfNecessary:(id)arg1 ;
-(NSString *)serverProvidedAutoBugCaptureReason;
-(void)_triggerAutoBugCaptureWithErrorPayload:(id)arg1 ;
-(CKDTapToRadarRequest *)serverProvidedTapToRadarRequest;
-(NSString *)serverProvidedAutoSysdiagnoseCollectionReason;
-(BOOL)markAsFinished;
-(void)reportStatusWithError:(id)arg1 ;
-(NSDate *)dateRequestWentOut;
-(id<CKDURLRequestMetricsDelegate>)metricsDelegate;
-(NSDictionary *)timingData;
-(void)setRequestProgressBlock:(id)arg1 ;
-(void)setResponseProgressBlock:(id)arg1 ;
-(void)setC2RequestOptions:(C2RequestOptions *)arg1 ;
-(BOOL)allowAutomaticRedirects;
-(NSInputStream *)requestBodyStream;
-(NSMutableArray *)redirectHistory;
-(void)setRedirectHistory:(NSMutableArray *)arg1 ;
-(id)responseProgressBlock;
-(CKDResponseBodyParser *)responseBodyParser;
-(id)defaultParserForContentType:(id)arg1 ;
-(id)requestProgressBlock;
-(void)setTimingData:(NSDictionary *)arg1 ;
-(void)requestDidComplete;
-(void)setServerProvidedAutoBugCaptureReason:(NSString *)arg1 ;
-(void)setServerProvidedTapToRadarRequest:(CKDTapToRadarRequest *)arg1 ;
-(void)setServerProvidedAutoSysdiagnoseCollectionReason:(NSString *)arg1 ;
-(BOOL)isHandlingAuthRetry;
-(BOOL)needsAuthRetry;
-(void)setNeedsAuthRetry:(BOOL)arg1 ;
-(long long)responseStatusCode;
-(id)_errorFromHTTPResponse:(id)arg1 ;
-(BOOL)didReceiveResponseBodyData;
-(BOOL)expectsResponseBody;
-(unsigned long long)numDownloadedElements;
-(void)updateSignatureWithTransmittedBytes:(id)arg1 ;
-(BOOL)isWaitingOnAuthRenew;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
-(void)generateSignature:(/*^block*/id)arg1 ;
-(BOOL)shouldLogResponseBody;
-(BOOL)expectsSingleObject;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(void)_handleBadPasswordResponse;
-(NSURL *)lastRedirectURL;
-(void)setAllowAutomaticRedirects:(BOOL)arg1 ;
-(NSDictionary *)fakeResponseOperationResultByItemID;
-(void)setLifecycleQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(C2RequestOptions *)c2RequestOptions;
-(void)setResponseObjectUUIDs:(NSMutableSet *)arg1 ;
-(void)setTrafficLogger:(CKDTrafficLogger *)arg1 ;
-(void)setNumDownloadedElements:(unsigned long long)arg1 ;
-(BOOL)haveCachedServerType;
-(void)setHaveCachedServerType:(BOOL)arg1 ;
-(BOOL)haveCachedPartitionType;
-(void)setHaveCachedPartitionType:(BOOL)arg1 ;
-(long long)cachedServerType;
-(void)setCachedServerType:(long long)arg1 ;
-(long long)cachedPartitionType;
-(void)setCachedPartitionType:(long long)arg1 ;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(void)setOverriddenHeaders:(NSMutableDictionary *)arg1 ;
-(NSString *)deviceID;
-(NSString *)operationID;
-(void)setDeviceID:(NSString *)arg1 ;
-(int)operationType;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(CKDClientContext *)context;
-(NSString *)sectionID;
-(void)setMetrics:(CKDOperationMetrics *)arg1 ;
-(void)cancel;
-(CKDOperationMetrics *)metrics;
-(BOOL)isCancelled;
-(void)setOperation:(CKDOperation *)arg1 ;
-(CKDOperation *)operation;
-(NSString *)path;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(NSURL *)url;
-(NSURLRequest *)request;
-(NSHTTPURLResponse *)response;
-(id)completionBlock;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
@end

