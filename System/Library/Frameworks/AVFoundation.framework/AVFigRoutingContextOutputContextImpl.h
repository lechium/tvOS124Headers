/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextImpl.h>

@protocol AVFigRoutingContextOutputDeviceTranslator, AVFigRoutingContextCommunicationChannelManager, OS_dispatch_queue;
@class AVOutputContext, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel, AVWeakReference, NSObject, NSDictionary;

@interface AVFigRoutingContextOutputContextImpl : NSObject <AVOutputContextImpl> {

	/*^block*/id _routingContextCreator;
	id<AVFigRoutingContextOutputDeviceTranslator> _deviceTranslator;
	OpaqueFigVolumeControllerStateRef _volumeController;
	/*^block*/id _commChannelManagerCreator;
	OpaqueFigRoutingContextRef _routingContext;
	id<AVFigRoutingContextCommunicationChannelManager> _commChannelManager;
	AVWeakReference* _weakObserver;
	AVOutputContext* _parentContext;
	BOOL _usesRouteConfigUpdatedNotification;
	NSObject*<OS_dispatch_queue> _ivarAccessQueue;
	NSDictionary* _destinationChangesForRouteChangeIDs;

}

@property (nonatomic,readonly) OpaqueFigRoutingContextRef figRoutingContext;                                    //@synthesize routingContext=_routingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputContext * parentOutputContext;                                                       //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) NSString * outputContextType; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,copy,readonly) NSString * associatedAudioDeviceID; 
@property (readonly) BOOL supportsMultipleOutputDevices; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) BOOL providesControlForAllVolumeFeatures; 
@property (readonly) float volume; 
@property (readonly) BOOL canSetVolume; 
@property (nonatomic,readonly) AVOutputContextCommunicationChannel * outgoingCommunicationChannel; 
+(id)platformDependentScreenOrVideoContext;
+(id)auxiliaryOutputContext;
+(id)sharedSystemAudioContext;
+(id)sharedSystemScreenContext;
+(id)iTunesAudioContext;
+(id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2 ;
+(id)outputContextImplForID:(id)arg1 ;
+(void)resetOutputDeviceForAllOutputContexts;
+(BOOL)outputContextExistsWithRemoteOutputDevice;
+(id)routingContextFactory;
+(OpaqueFigRoutingContextRef)copySystemVideoRoutingContext;
+(id)sharedAudioPresentationOutputContext;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)canSetVolume;
-(void)setParentOutputContext:(AVOutputContext *)arg1 ;
-(NSString *)outputContextType;
-(void)outputContextDidChangeApplicationProcessID:(id)arg1 ;
-(NSString *)associatedAudioDeviceID;
-(BOOL)supportsMultipleOutputDevices;
-(void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeOutputDevice:(id)arg1 ;
-(BOOL)providesControlForAllVolumeFeatures;
-(void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)muteAllOutputDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
-(id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)_routeChangeStartedWithID:(id)arg1 ;
-(id)initWithFigRoutingContextCreator:(/*^block*/id)arg1 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 ;
-(id)initWithRoutingContextUUID:(id)arg1 ;
-(id)initWithFigRoutingContext:(OpaqueFigRoutingContextRef)arg1 routingContextReplacementBlock:(/*^block*/id)arg2 outputDeviceTranslator:(id)arg3 volumeController:(OpaqueFigVolumeControllerStateRef)arg4 communicationChannelManagerCreator:(/*^block*/id)arg5 ;
-(id)routingContextUUID;
-(AVOutputContext *)parentOutputContext;
-(void)_routeConfigUpdateStartedWithID:(CFStringRef)arg1 ;
-(void)_routeConfigUpdateEndedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 ;
-(const CFDictionaryRef)_createSelectRouteOptionsForSetOutputDeviceOptions:(id)arg1 ;
-(void)_sendCommand:(CFStringRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_routeChangeEndedWithID:(id)arg1 reason:(CFStringRef)arg2 ;
-(void)_currentRouteChanged;
-(void)_groupConfigurationChanged;
-(void)_routeConfigUpdatedWithID:(CFStringRef)arg1 reason:(CFStringRef)arg2 initiator:(const CFStringRef)arg3 ;
-(void)_systemPickerVideoRouteChanged;
-(void)_canUseForRoutingContextDidChangeForRoutingContextWIthID:(CFStringRef)arg1 ;
-(void)_masterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)_canSetMasterVolumeDidChangeForRoutingContextWithID:(CFStringRef)arg1 ;
-(void)_remoteControlChannelAvailabilityChanged;
-(void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(void)_serverConnectionDied;
-(OpaqueFigRoutingContextRef)figRoutingContext;
-(NSArray *)outputDevices;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(void)setVolume:(float)arg1 ;
-(AVOutputDevice *)outputDevice;
-(float)volume;
-(NSString *)ID;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

