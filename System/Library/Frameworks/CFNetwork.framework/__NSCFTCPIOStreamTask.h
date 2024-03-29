/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionTask.h>

@class NSData, NSMutableArray, CFNetworkTimer, __NSCFURLLocalStreamTaskWorkWrite, __NSCFURLLocalStreamTaskWorkRead;

@interface __NSCFTCPIOStreamTask : __NSCFURLSessionTask {

	/*^block*/id _disavow;
	shared_ptr<TCPIO_EstablishBase>* _establish;
	shared_ptr<TCPIOConnectionObjCPP>* _ios;
	unsigned char _captureStreamsUponCompletion;
	unsigned char _secure;
	NSData* __initialDataPayload;
	shared_ptr<HTTPProtocol>* _httpProtocol;
	NSMutableArray* _pendingWork;
	NSMutableArray* _completedSuspendedWork;
	BOOL _doingWorkOnThisQueue;
	int _connectionState;
	BOOL _goneSecure;
	BOOL _streamsCaptured;
	SCD_Struct_NS24 _readError;
	BOOL _readInProgress;
	BOOL _readClosed;
	SCD_Struct_NS24 _writeError;
	BOOL _writeEOF;
	BOOL _writeInProgress;
	BOOL _writeClosed;
	BOOL _receivedServerTrustChallenge;
	CFNetworkTimer* _writeTimer;
	CFNetworkTimer* _readTimer;
	__NSCFURLLocalStreamTaskWorkWrite* _currentWriteTask;
	__NSCFURLLocalStreamTaskWorkRead* _currentReadTask;

}

@property (copy) NSData * _initialDataPayload;                                                  //@synthesize _initialDataPayload=__initialDataPayload - In the implementation block
@property (nonatomic,retain) __NSCFURLLocalStreamTaskWorkWrite * currentWriteTask;              //@synthesize currentWriteTask=_currentWriteTask - In the implementation block
@property (nonatomic,retain) __NSCFURLLocalStreamTaskWorkRead * currentReadTask;                //@synthesize currentReadTask=_currentReadTask - In the implementation block
-(void)_onqueue_checkForCompletion;
-(void)_onqueue_cancel;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_suspend;
-(void)_onqueue_resume;
-(void)_task_onqueue_didFinish;
-(id)initWithTask:(id)arg1 Connection:(shared_ptr<TCPIOConnection>*)arg2 disavow:(/*^block*/id)arg3 ;
-(void)_reportTimingDataToAWD:(id)arg1 ;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_timeoutOccured;
-(id)_onqueue_errorOrCancelError;
-(void)_onqueue_ioTick;
-(void)setCurrentReadTask:(__NSCFURLLocalStreamTaskWorkRead *)arg1 ;
-(void)setCurrentWriteTask:(__NSCFURLLocalStreamTaskWorkWrite *)arg1 ;
-(void)_onqueue_captureStreams;
-(void)_onqueue_closeWrite;
-(void)_onqueue_closeRead;
-(void)_onqueue_startSecureConnection;
-(void)_onqueue_stopSecureConnection;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 shouldWaitForTls:(BOOL)arg3 ;
-(BOOL)shouldDoWorkConsideringTlsState;
-(void)_onqueue_processWriteWork:(id)arg1 ;
-(void)_onqueue_processReadWork:(id)arg1 ;
-(__NSCFURLLocalStreamTaskWorkWrite *)currentWriteTask;
-(__NSCFURLLocalStreamTaskWorkRead *)currentReadTask;
-(shared_ptr<TCPIOConnectionObjCPP>*)ios;
-(BOOL)_onqueue_usingCONNECTProxy;
-(void)_onqueue_callbackCompletedWork;
-(void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithHost:(id)arg1 port:(long long)arg2 session:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)closeWrite;
-(void)closeRead;
-(PerformanceTimingRef)_performanceTimingRef;
-(void)copyStreamProperty:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startSecureConnection;
-(void)stopSecureConnection;
-(void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needServerTrust:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needClientCert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_setTCPIOConnection:(shared_ptr<TCPIOConnection>*)arg1 ;
-(BOOL)_onqueue_isSecure;
-(void)_onqueue_tlsCompletion;
-(void)_onqueue_tlsDisabled;
-(void)_onqueue_cleanUpConnectionEstablishmentState;
-(void)_onqueue_connectionEstablishedWithError:(SCD_Struct_NS24)arg1 callbackReferent:(id)arg2 ;
-(NSData *)_initialDataPayload;
-(void)set_initialDataPayload:(NSData *)arg1 ;
-(void)captureStreams;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
@end

