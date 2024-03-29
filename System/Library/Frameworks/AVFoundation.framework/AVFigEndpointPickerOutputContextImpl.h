/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextImpl.h>

@protocol OS_dispatch_queue;
@class AVOutputContext, NSObject, AVWeakReference, NSString, AVOutputDevice, NSArray, AVOutputContextCommunicationChannel;

@interface AVFigEndpointPickerOutputContextImpl : NSObject <AVOutputContextImpl> {

	AVOutputContext* _parentContext;
	NSObject*<OS_dispatch_queue> _pickerQueue;
	OpaqueFigEndpointPickerRef _endpointPicker;
	unsigned long long _featureForCurrentPicker;
	CFStringRef _contextUUID;
	BOOL _isSystemPicker;
	AVWeakReference* _weakReference;

}

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
+(OpaqueFigEndpointPickerRef)copySystemVideoPicker;
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
-(void)_removeFigEndpointPickerNotifications;
-(void)_addFigEndpointPickerNotifications;
-(void)_handlePickerServerConnectionDiedNotification;
-(AVOutputContext *)parentOutputContext;
-(id)initWithContextUUID:(id)arg1 ;
-(id)initWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2 ;
-(id)endpointPickerUUID;
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

