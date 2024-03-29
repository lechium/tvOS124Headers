/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MPAVRouteConnection : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _invalidated;
	NSMutableArray* _pendingConnectionHandlers;
	/*^block*/id _receivedCustomDataHandler;
	/*^block*/id _invalidationHandler;
	void* _externalDevice;

}

@property (nonatomic,readonly) void* externalDevice;                               //@synthesize externalDevice=_externalDevice - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,copy) id receivedCustomDataHandler;                           //@synthesize receivedCustomDataHandler=_receivedCustomDataHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(BOOL)isConnected;
-(id)initWithExternalDevice:(void*)arg1 ;
-(void)_connectionStateDidChange:(unsigned)arg1 error:(id)arg2 ;
-(void)_connectionDidReceiveCustomData:(id)arg1 ;
-(void)connectWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)sendCustomData:(id)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)becomeActiveOriginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resignActiveOriginWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)receivedCustomDataHandler;
-(void)setReceivedCustomDataHandler:(id)arg1 ;
-(void*)externalDevice;
-(void)dealloc;
-(void)reset;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)isInvalidated;
@end

