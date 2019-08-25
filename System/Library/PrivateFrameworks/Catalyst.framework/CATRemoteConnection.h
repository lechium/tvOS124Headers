/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/Catalyst-Structs.h>
#import <libobjc.A.dylib/CATHTTPMessageParserDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_source, CATRemoteConnectionDelegate;
@class CATHTTPMessageParser, NSMutableArray, NSObject, NSError, NSMutableData, NSArray, CATSerialOperationQueue, NSString, CATRemoteConnectionSocketOptions, NSInputStream, NSOutputStream;

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {

	CATHTTPMessageParser* mMessageParser;
	long long mState;
	NSMutableArray* mPendingSendContexts;
	NSObject*<OS_dispatch_source> mConnectionTimeoutTimer;
	NSError* mInterruptionError;
	NSMutableData* mReadBuffer;
	NSArray* mTrustedCertificates;
	long long mPeerTrustState;
	CATSerialOperationQueue* mStreamEventQueue;
	BOOL _usesSSL;
	id<CATRemoteConnectionDelegate> _delegate;
	NSString* _name;
	double _connectionTimeoutInterval;
	CATRemoteConnectionSocketOptions* _socketOptions;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	unsigned long long _bufferSize;

}

@property (nonatomic,retain) NSInputStream * inputStream;                                  //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                                //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) BOOL usesSSL;                                                 //@synthesize usesSSL=_usesSSL - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                                //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic,__weak) id<CATRemoteConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SecTrustRef peerTrust; 
@property (assign,nonatomic) double connectionTimeoutInterval;                             //@synthesize connectionTimeoutInterval=_connectionTimeoutInterval - In the implementation block
@property (nonatomic,copy) CATRemoteConnectionSocketOptions * socketOptions;               //@synthesize socketOptions=_socketOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 bufferSize:(unsigned long long)arg3 ;
+(void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)initWithNetService:(id)arg1 ;
-(void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSOutputStream *)outputStream;
-(CATRemoteConnectionSocketOptions *)socketOptions;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(BOOL)usesSSL;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)messageParser:(id)arg1 didParseRequestData:(id)arg2 ;
-(void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(unsigned long long)arg3 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)enqueueSendContext:(id)arg1 ;
-(BOOL)secureUsingIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 isServer:(BOOL)arg3 ;
-(void)connectionDidInterruptWithError:(id)arg1 ;
-(double)connectionTimeoutInterval;
-(void)connectionTimedOut;
-(void)unscheduleStreams;
-(void)sendDidFail:(id)arg1 withError:(id)arg2 ;
-(void)delegateDidClose;
-(void)delegateWillSecure;
-(void)delegateDidSecure;
-(void)connectionShouldSendData;
-(void)connectionDidReceiveData;
-(BOOL)trySendingDataWithContext:(id)arg1 error:(id*)arg2 ;
-(void)sendDidSucceed:(id)arg1 ;
-(void)delegateDidWriteDataForContextIfNeeded:(id)arg1 ;
-(void)delegateDidSendData:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)delegateDidInterruptWithError:(id)arg1 ;
-(void)delegateDidWriteDataFromStream:(id)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 userInfo:(id)arg4 ;
-(void)delegateDidReceiveData:(id)arg1 ;
-(void)delegateDidReceiveStreamData:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)delegateDidReceiveDataRequestWithURL:(id)arg1 ;
-(void)configureStreamSocketOptions;
-(void)delegateDidOpen;
-(void)tryEvaluatingPeerTrustWithStream:(id)arg1 ;
-(SecTrustRef)peerTrust;
-(void)sendData:(id)arg1 userInfo:(id)arg2 ;
-(void)sendDataWithStream:(id)arg1 length:(unsigned long long)arg2 userInfo:(id)arg3 ;
-(void)secureUsingClientIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)secureUsingServerIdentity:(SecIdentityRef)arg1 trustedCertificates:(id)arg2 ;
-(void)scheduleStreams;
-(void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(BOOL)arg1 ;
-(void)setConnectionTimeoutInterval:(double)arg1 ;
-(void)setSocketOptions:(CATRemoteConnectionSocketOptions *)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(unsigned long long)bufferSize;
-(NSInputStream *)inputStream;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(void)setDelegate:(id<CATRemoteConnectionDelegate>)arg1 ;
-(id<CATRemoteConnectionDelegate>)delegate;
-(void)open;
-(void)close;
@end

