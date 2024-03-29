/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;
@class GEOProtobufSession, NSObject, NSError, PBCodable, NSString, GEOClientMetrics;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate> {

	Class _responseClass;
	id<GEODataSessionTask> _dataTask;
	GEOProtobufSession* _session;
	id<GEOProtobufSessionTaskDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSError* _error;
	PBCodable* _response;
	unsigned long long _taskIdentifier;
	unsigned _requestTypeCode;
	int _requestKind;
	BOOL _completedAsCancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL completedAsCancelled; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) PBCodable * response; 
@property (nonatomic,readonly) int requestKind; 
@property (nonatomic,readonly) Class responseClass;                                           //@synthesize responseClass=_responseClass - In the implementation block
@property (nonatomic,retain) id<GEODataSessionTask> dataTask;                                 //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) GEOProtobufSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<GEOProtobufSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) BOOL completedAsCancelled;                                       //@synthesize completedAsCancelled=_completedAsCancelled - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) PBCodable * response;                                            //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned requestTypeCode;                                      //@synthesize requestTypeCode=_requestTypeCode - In the implementation block
@property (nonatomic,readonly) unsigned long long taskIdentifier;                             //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)outgoingPayloadSize;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setSession:(GEOProtobufSession *)arg1 ;
-(unsigned long long)taskIdentifier;
-(int)requestKind;
-(unsigned long long)incomingPayloadSize;
-(NSString *)remoteAddressAndPort;
-(GEOProtobufSession *)session;
-(void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)setResponse:(PBCodable *)arg1 ;
-(BOOL)completedAsCancelled;
-(id)initWithSession:(id)arg1 taskIdentifier:(unsigned long long)arg2 requestTypeCode:(unsigned)arg3 responseClass:(Class)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 requestKind:(int)arg7 ;
-(void)setDataTask:(id<GEODataSessionTask>)arg1 ;
-(id<GEODataSessionTask>)dataTask;
-(void)completeWithCancelled:(BOOL)arg1 error:(id)arg2 response:(id)arg3 ;
-(void)setCompletedAsCancelled:(BOOL)arg1 ;
-(void)completeWithErrorCode:(long long)arg1 ;
-(void)_decodeResponseFromTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)parseInnerProtobufFromData:(id)arg1 ;
-(id)parseResponseFromResponseData:(id)arg1 ;
-(void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)parsePreambleWithReader:(id)arg1 ;
-(BOOL)parseProtocolVersionWithReader:(id)arg1 ;
-(BOOL)parseResponseTypeWithReader:(id)arg1 ;
-(id)init;
-(NSString *)debugDescription;
-(void)setDelegate:(id<GEOProtobufSessionTaskDelegate>)arg1 ;
-(id<GEOProtobufSessionTaskDelegate>)delegate;
-(void)cancel;
-(void)start;
-(PBCodable *)response;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

