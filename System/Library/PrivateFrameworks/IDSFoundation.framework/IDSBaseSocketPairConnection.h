/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class IMWeakReference, NSObject, NSMutableArray;

@interface IDSBaseSocketPairConnection : NSObject {

	IMWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _outgoingDataArray;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_source> _writeSource;
	int _connectedSocket;
	double _lastDateCheck;
	long long _bytesReceived;
	double _prevBPS;
	BOOL _writeSourceIsResumed;

}

@property (nonatomic,readonly) int socket;              //@synthesize connectedSocket=_connectedSocket - In the implementation block
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 start:(BOOL)arg4 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
-(void)_setupWriteSource;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(BOOL)sendData:(id)arg1 ;
-(int)socket;
-(void)dealloc;
-(void)setDestination:(id)arg1 ;
-(void)start;
-(void)endSession;
@end

