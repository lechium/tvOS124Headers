/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMomentsMessenger.h>

@protocol OS_dispatch_queue;
@class VCMomentsHistory, NSObject, VideoAttributes, NSMutableSet, NSString;

@interface VCMoments : NSObject <VCMomentsMessenger> {

	id _delegate;
	id _transportDelegate;
	unsigned _streamToken;
	VCMomentsHistory* _momentsHistory;
	unsigned _capabilities;
	unsigned char _mode;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	int _currentActiveRequestsCount;
	BOOL _isClientRegistered;
	VideoAttributes* _remoteScreenAttributes;
	NSMutableSet* _requests;
	BOOL _lastRequest;

}

@property (assign,nonatomic) unsigned capabilities;                                 //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) BOOL isClientRegistered;                             //@synthesize isClientRegistered=_isClientRegistered - In the implementation block
@property (nonatomic,retain) VideoAttributes * remoteScreenAttributes;              //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceHasSufficientFreeSpace;
+(unsigned long long)deviceFreeDiskSpace;
-(void)setFrameRate:(float)arg1 ;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(void)addLocalAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addRemoteAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addLocalVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(void)updateRemoteScreenAttributes:(id)arg1 ;
-(void)cleanupActiveRequests;
-(VideoAttributes *)remoteScreenAttributes;
-(void)setTransportDelegate:(id)arg1 ;
-(void)processRemotePhotoRequest:(id)arg1 ;
-(void)processRemoteVideoRequest:(id)arg1 ;
-(void)processRemoteLivePhotoRequest:(id)arg1 ;
-(void)updateVCMomentsMode;
-(id)transportDelegate;
-(void)processRequest:(id)arg1 ;
-(id)momentsDelegate;
-(BOOL)isHistorySupported;
-(void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2 ;
-(unsigned long long)directorySize:(id)arg1 ;
-(void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 fileSize:(long long)arg3 ;
-(BOOL)validateNumberOfRequestsWithError:(id*)arg1 ;
-(void)notifyFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 fileSize:(long long)arg3 ;
-(void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)setMomentsDelegate:(id)arg1 ;
-(BOOL)processClientRequest:(id)arg1 error:(id*)arg2 ;
-(void)registerClient;
-(void)deregisterClient;
-(void)getInitialRemoteScreenAttributes:(id)arg1 ;
-(BOOL)isClientRegistered;
-(unsigned)capabilities;
-(id)initWithStreamToken:(unsigned)arg1 delegate:(id)arg2 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(void)dealloc;
@end

