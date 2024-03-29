/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioIOControllerControl.h>
#import <libobjc.A.dylib/VCAudioIOSource.h>
#import <libobjc.A.dylib/VCAudioIOSink.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, VCAudioRelay, NSString;

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl, VCAudioIOSource, VCAudioIOSink> {

	unsigned _relayType;
	unsigned _relayIOType;
	unsigned _state;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _allClients;
	NSMutableArray* _startingIOClients;
	NSMutableArray* _sourceClients;
	NSMutableArray* _sinkClients;
	AudioEventQueue_tRef _sourceEventQueue;
	AudioEventQueue_tRef _sinkEventQueue;
	opaqueVCAudioBufferListRef _sourceBuffer;
	VCAudioRelay* _relay;
	AudioStreamBasicDescription _format;
	unsigned _samplesPerFrame;
	VCAudioIOControllerIOState _sinkData;
	VCAudioIOControllerIOState _sourceData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeStateStrings;
+(id)sharedInstanceRemoteFacing;
+(id)sharedInstanceClientFacing;
+(id)sharedInstanceSafeViewRemoteFacing;
+(id)sharedInstanceSafeViewClientFacing;
-(void)resetAudioTimestamps;
-(void)flushEventQueue:(AudioEventQueue_tRef)arg1 ;
-(void)_cleanupDeadClients;
-(void)stopClient:(id)arg1 ;
-(void)processEventQueue:(AudioEventQueue_tRef)arg1 clientList:(id)arg2 ;
-(void)startClient:(id)arg1 ;
-(void)updateClient:(id)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)pullAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(id)initWithRelayType:(unsigned)arg1 relayIOType:(unsigned)arg2 ;
-(void)removeClient:(id)arg1 clientArray:(id)arg2 eventQueue:(AudioEventQueue_tRef)arg3 ;
-(void)loadRelay;
-(BOOL)updateStateWithClient:(id)arg1 ;
-(void)addStartingClient:(id)arg1 controllerFormat:(AudioStreamBasicDescription*)arg2 ;
-(id)newRelayIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)startRelayIO:(id)arg1 ;
-(void)unloadRelay;
-(void)addClient:(id)arg1 clientArray:(id)arg2 eventQueue:(AudioEventQueue_tRef)arg3 ;
-(void)computeFormat:(AudioStreamBasicDescription*)arg1 newClient:(id)arg2 ;
-(BOOL)stateIdleWithNegotiatedFormat:(AudioStreamBasicDescription*)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(BOOL)statePrepareWithNegotiatedFormat:(AudioStreamBasicDescription*)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(BOOL)stateStartingWithNegotiatedFormat:(AudioStreamBasicDescription*)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(BOOL)stateRunningWithNegotiatedFormat:(AudioStreamBasicDescription*)arg1 client:(id)arg2 newState:(unsigned*)arg3 ;
-(void)dealloc;
-(BOOL)addClient:(id)arg1 ;
-(BOOL)removeClient:(id)arg1 ;
@end

