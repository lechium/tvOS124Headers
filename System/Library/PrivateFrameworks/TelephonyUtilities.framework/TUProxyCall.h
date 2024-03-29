/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUCall.h>
#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TUCallServicesProxyCallActions, TURemoteVideoClient;
@class NSString, TUHandle, TUCallProvider, NSDictionary, NSData, NSUUID, TUCallDisplayContext, NSSet, NSMutableDictionary;

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding> {

	BOOL _hostedOnCurrentDevice;
	BOOL _outgoing;
	BOOL _voicemail;
	BOOL _isVideo;
	BOOL _thirdPartyVideo;
	BOOL _isSendingAudio;
	BOOL _isSendingVideo;
	BOOL _mediaStalled;
	BOOL _videoDegraded;
	BOOL _videoPaused;
	BOOL _videoMirrored;
	BOOL _blocked;
	BOOL _emergency;
	BOOL _sos;
	BOOL _usingBaseband;
	BOOL _supportsTTYWithVoice;
	BOOL _needsManualInCallSounds;
	BOOL _uplinkMuted;
	BOOL _downlinkMuted;
	BOOL _requiresRemoteVideo;
	BOOL _prefersExclusiveAccessToCellularNetwork;
	BOOL _remoteUplinkMuted;
	BOOL _shouldSuppressInCallUI;
	BOOL _wantsStagingArea;
	int _callStatus;
	int _ttyType;
	int _callRelaySupport;
	float _localMeterLevel;
	float _remoteMeterLevel;
	NSString* _callUUID;
	TUHandle* _handle;
	TUCallProvider* _backingProvider;
	TUCallProvider* _displayProvider;
	NSString* _callerNameFromNetwork;
	long long _cameraType;
	long long _remoteCameraOrientation;
	NSString* _audioCategory;
	NSString* _audioMode;
	NSDictionary* _endedReasonUserInfo;
	NSString* _endedReasonString;
	NSString* _endedErrorString;
	NSData* _localFrequency;
	NSData* _remoteFrequency;
	long long _videoStreamToken;
	long long _inputAudioPowerSpectrumToken;
	long long _outputAudioPowerSpectrumToken;
	long long _remoteScreenOrientation;
	NSUUID* _callGroupUUID;
	NSDictionary* _providerContext;
	TUCallDisplayContext* _displayContext;
	NSSet* _remoteParticipantHandles;
	NSUUID* _localSenderIdentityUUID;
	NSUUID* _localSenderIdentityAccountUUID;
	id<TUCallServicesProxyCallActions> _proxyCallActionsDelegate;
	id<TURemoteVideoClient> _localVideo;
	id<TURemoteVideoClient> _remoteVideo;
	NSMutableDictionary* _remoteVideoModeToLayer;
	NSMutableDictionary* _localVideoModeToLayer;
	CGSize _remoteAspectRatio;
	CGSize _remoteScreenPortraitAspectRatio;
	CGSize _remoteScreenLandscapeAspectRatio;
	CGRect _remoteVideoContentRect;

}

@property (nonatomic,retain) id<TURemoteVideoClient> localVideo;                                              //@synthesize localVideo=_localVideo - In the implementation block
@property (nonatomic,retain) id<TURemoteVideoClient> remoteVideo;                                             //@synthesize remoteVideo=_remoteVideo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteVideoModeToLayer;                                    //@synthesize remoteVideoModeToLayer=_remoteVideoModeToLayer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localVideoModeToLayer;                                     //@synthesize localVideoModeToLayer=_localVideoModeToLayer - In the implementation block
@property (assign,nonatomic) CGSize remoteScreenPortraitAspectRatio;                                          //@synthesize remoteScreenPortraitAspectRatio=_remoteScreenPortraitAspectRatio - In the implementation block
@property (assign,nonatomic) CGSize remoteScreenLandscapeAspectRatio;                                         //@synthesize remoteScreenLandscapeAspectRatio=_remoteScreenLandscapeAspectRatio - In the implementation block
@property (assign,nonatomic) long long remoteScreenOrientation;                                               //@synthesize remoteScreenOrientation=_remoteScreenOrientation - In the implementation block
@property (assign,nonatomic) CGSize remoteAspectRatio;                                                        //@synthesize remoteAspectRatio=_remoteAspectRatio - In the implementation block
@property (assign,nonatomic) CGRect remoteVideoContentRect;                                                   //@synthesize remoteVideoContentRect=_remoteVideoContentRect - In the implementation block
@property (assign,nonatomic) long long cameraType;                                                            //@synthesize cameraType=_cameraType - In the implementation block
@property (assign,nonatomic) long long remoteCameraOrientation;                                               //@synthesize remoteCameraOrientation=_remoteCameraOrientation - In the implementation block
@property (assign,nonatomic,__weak) id<TUCallServicesProxyCallActions> proxyCallActionsDelegate;              //@synthesize proxyCallActionsDelegate=_proxyCallActionsDelegate - In the implementation block
@property (nonatomic,retain) TUHandle * handle;                                                               //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * callUUID;                                                               //@synthesize callUUID=_callUUID - In the implementation block
@property (assign,nonatomic) int callStatus;                                                                  //@synthesize callStatus=_callStatus - In the implementation block
@property (assign,getter=isHostedOnCurrentDevice,nonatomic) BOOL hostedOnCurrentDevice;                       //@synthesize hostedOnCurrentDevice=_hostedOnCurrentDevice - In the implementation block
@property (nonatomic,retain) TUCallProvider * backingProvider;                                                //@synthesize backingProvider=_backingProvider - In the implementation block
@property (nonatomic,retain) TUCallProvider * displayProvider;                                                //@synthesize displayProvider=_displayProvider - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                                                 //@synthesize outgoing=_outgoing - In the implementation block
@property (assign,getter=isVoicemail,nonatomic) BOOL voicemail;                                               //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,copy) NSString * callerNameFromNetwork;                                                  //@synthesize callerNameFromNetwork=_callerNameFromNetwork - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                                                    //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                                   //@synthesize blocked=_blocked - In the implementation block
@property (assign,getter=isEmergency,nonatomic) BOOL emergency;                                               //@synthesize emergency=_emergency - In the implementation block
@property (assign,setter=setSOS:,getter=isSOS,nonatomic) BOOL sos;                                            //@synthesize sos=_sos - In the implementation block
@property (assign,getter=isUsingBaseband,nonatomic) BOOL usingBaseband;                                       //@synthesize usingBaseband=_usingBaseband - In the implementation block
@property (assign,nonatomic) int ttyType;                                                                     //@synthesize ttyType=_ttyType - In the implementation block
@property (assign,nonatomic) BOOL supportsTTYWithVoice;                                                       //@synthesize supportsTTYWithVoice=_supportsTTYWithVoice - In the implementation block
@property (nonatomic,copy) NSString * audioCategory;                                                          //@synthesize audioCategory=_audioCategory - In the implementation block
@property (nonatomic,copy) NSString * audioMode;                                                              //@synthesize audioMode=_audioMode - In the implementation block
@property (assign,nonatomic) BOOL needsManualInCallSounds;                                                    //@synthesize needsManualInCallSounds=_needsManualInCallSounds - In the implementation block
@property (nonatomic,copy) NSDictionary * endedReasonUserInfo;                                                //@synthesize endedReasonUserInfo=_endedReasonUserInfo - In the implementation block
@property (nonatomic,copy) NSString * endedErrorString;                                                       //@synthesize endedErrorString=_endedErrorString - In the implementation block
@property (nonatomic,copy) NSString * endedReasonString;                                                      //@synthesize endedReasonString=_endedReasonString - In the implementation block
@property (nonatomic,retain) NSData * localFrequency;                                                         //@synthesize localFrequency=_localFrequency - In the implementation block
@property (nonatomic,retain) NSData * remoteFrequency;                                                        //@synthesize remoteFrequency=_remoteFrequency - In the implementation block
@property (assign,nonatomic) float remoteMeterLevel;                                                          //@synthesize remoteMeterLevel=_remoteMeterLevel - In the implementation block
@property (assign,nonatomic) float localMeterLevel;                                                           //@synthesize localMeterLevel=_localMeterLevel - In the implementation block
@property (nonatomic,copy) NSUUID * callGroupUUID;                                                            //@synthesize callGroupUUID=_callGroupUUID - In the implementation block
@property (assign,nonatomic) int callRelaySupport;                                                            //@synthesize callRelaySupport=_callRelaySupport - In the implementation block
@property (assign,getter=isMediaStalled,nonatomic) BOOL mediaStalled;                                         //@synthesize mediaStalled=_mediaStalled - In the implementation block
@property (assign,getter=isVideoDegraded,nonatomic) BOOL videoDegraded;                                       //@synthesize videoDegraded=_videoDegraded - In the implementation block
@property (assign,getter=isVideoPaused,nonatomic) BOOL videoPaused;                                           //@synthesize videoPaused=_videoPaused - In the implementation block
@property (assign,getter=isVideoMirrored,nonatomic) BOOL videoMirrored;                                       //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) BOOL isSendingAudio;                                                             //@synthesize isSendingAudio=_isSendingAudio - In the implementation block
@property (assign,getter=isThirdPartyVideo,nonatomic) BOOL thirdPartyVideo;                                   //@synthesize thirdPartyVideo=_thirdPartyVideo - In the implementation block
@property (assign,nonatomic) long long videoStreamToken;                                                      //@synthesize videoStreamToken=_videoStreamToken - In the implementation block
@property (assign,nonatomic) long long inputAudioPowerSpectrumToken;                                          //@synthesize inputAudioPowerSpectrumToken=_inputAudioPowerSpectrumToken - In the implementation block
@property (assign,nonatomic) long long outputAudioPowerSpectrumToken;                                         //@synthesize outputAudioPowerSpectrumToken=_outputAudioPowerSpectrumToken - In the implementation block
@property (nonatomic,retain) NSDictionary * providerContext;                                                  //@synthesize providerContext=_providerContext - In the implementation block
@property (nonatomic,copy) TUCallDisplayContext * displayContext;                                             //@synthesize displayContext=_displayContext - In the implementation block
@property (nonatomic,copy) NSSet * remoteParticipantHandles;                                                  //@synthesize remoteParticipantHandles=_remoteParticipantHandles - In the implementation block
@property (assign,nonatomic) BOOL prefersExclusiveAccessToCellularNetwork;                                    //@synthesize prefersExclusiveAccessToCellularNetwork=_prefersExclusiveAccessToCellularNetwork - In the implementation block
@property (assign,getter=isRemoteUplinkMuted,nonatomic) BOOL remoteUplinkMuted;                               //@synthesize remoteUplinkMuted=_remoteUplinkMuted - In the implementation block
@property (nonatomic,copy) NSUUID * localSenderIdentityUUID;                                                  //@synthesize localSenderIdentityUUID=_localSenderIdentityUUID - In the implementation block
@property (nonatomic,copy) NSUUID * localSenderIdentityAccountUUID;                                           //@synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInCallUI;                                                     //@synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI - In the implementation block
@property (assign,nonatomic) BOOL wantsStagingArea;                                                           //@synthesize wantsStagingArea=_wantsStagingArea - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyCallWithCall:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(TUCallDisplayContext *)displayContext;
-(void)setDisplayContext:(TUCallDisplayContext *)arg1 ;
-(void)setCallStatus:(int)arg1 ;
-(int)callStatus;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(BOOL)isVideoMirrored;
-(long long)cameraType;
-(void)setBlocked:(BOOL)arg1 ;
-(TUHandle *)handle;
-(int)ttyType;
-(void)setTtyType:(int)arg1 ;
-(void)setOutgoing:(BOOL)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setHandle:(TUHandle *)arg1 ;
-(long long)videoStreamToken;
-(NSDictionary *)providerContext;
-(long long)remoteCameraOrientation;
-(void)setRemoteCameraOrientation:(long long)arg1 ;
-(BOOL)isHostedOnCurrentDevice;
-(NSUUID *)callGroupUUID;
-(NSString *)callUUID;
-(BOOL)isUplinkMuted;
-(BOOL)isDownlinkMuted;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(void)setDownlinkMuted:(BOOL)arg1 ;
-(NSString *)callerNameFromNetwork;
-(BOOL)isVoicemail;
-(BOOL)isEmergency;
-(BOOL)shouldSuppressInCallUI;
-(BOOL)wantsStagingArea;
-(void)setWantsStagingArea:(BOOL)arg1 ;
-(void)setWantsHoldMusic:(BOOL)arg1 ;
-(void)updateWithCall:(id)arg1 ;
-(void)setProxyCallActionsDelegate:(id<TUCallServicesProxyCallActions>)arg1 ;
-(void)setCallDisconnectedDueToComponentCrash;
-(void)setBackingProvider:(TUCallProvider *)arg1 ;
-(void)setRemoteParticipantHandles:(NSSet *)arg1 ;
-(NSUUID *)localSenderIdentityUUID;
-(void)setLocalSenderIdentityUUID:(NSUUID *)arg1 ;
-(NSUUID *)localSenderIdentityAccountUUID;
-(void)setLocalSenderIdentityAccountUUID:(NSUUID *)arg1 ;
-(void)setVoicemail:(BOOL)arg1 ;
-(void)setHostedOnCurrentDevice:(BOOL)arg1 ;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(void)setEmergency:(BOOL)arg1 ;
-(void)setSOS:(BOOL)arg1 ;
-(BOOL)isSendingVideo;
-(void)setRemoteFrequency:(NSData *)arg1 ;
-(void)setLocalFrequency:(NSData *)arg1 ;
-(void)setRemoteMeterLevel:(float)arg1 ;
-(void)setLocalMeterLevel:(float)arg1 ;
-(BOOL)needsManualInCallSounds;
-(BOOL)isUsingBaseband;
-(BOOL)isSendingAudio;
-(BOOL)isThirdPartyVideo;
-(NSString *)audioCategory;
-(BOOL)supportsTTYWithVoice;
-(CGSize)remoteAspectRatio;
-(CGRect)remoteVideoContentRect;
-(long long)remoteScreenOrientation;
-(CGSize)remoteScreenAspectRatio;
-(BOOL)prefersExclusiveAccessToCellularNetwork;
-(BOOL)isRemoteUplinkMuted;
-(NSSet *)remoteParticipantHandles;
-(id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(BOOL)arg2 ;
-(TUCallProvider *)backingProvider;
-(TUCallProvider *)displayProvider;
-(NSDictionary *)endedReasonUserInfo;
-(NSString *)endedErrorString;
-(NSString *)endedReasonString;
-(int)callRelaySupport;
-(NSData *)localFrequency;
-(NSData *)remoteFrequency;
-(float)localMeterLevel;
-(float)remoteMeterLevel;
-(void)_updateVideoCallAttributes:(id)arg1 ;
-(void)_updateVideoStreamToken:(long long)arg1 ;
-(void)disconnectWithReason:(int)arg1 ;
-(id<TUCallServicesProxyCallActions>)proxyCallActionsDelegate;
-(void)answerWithRequest:(id)arg1 ;
-(void)setDisconnectedReason:(int)arg1 ;
-(void)updateProxyCallWithDaemon;
-(void)setShouldSuppressRingtone:(BOOL)arg1 ;
-(void)setTransitionStatus:(int)arg1 ;
-(int)avcRemoteVideoModeForMode:(long long)arg1 ;
-(NSMutableDictionary *)remoteVideoModeToLayer;
-(void)setRemoteVideoModeToLayer:(NSMutableDictionary *)arg1 ;
-(id<TURemoteVideoClient>)remoteVideo;
-(void)_synchronizeRemoteVideo;
-(NSMutableDictionary *)localVideoModeToLayer;
-(void)setLocalVideoModeToLayer:(NSMutableDictionary *)arg1 ;
-(id<TURemoteVideoClient>)localVideo;
-(void)_synchronizeLocalVideo;
-(void)setLocalVideo:(id<TURemoteVideoClient>)arg1 ;
-(void)setRemoteVideo:(id<TURemoteVideoClient>)arg1 ;
-(void)_createLocalVideoIfNecessary;
-(BOOL)requiresRemoteVideo;
-(void)_createRemoteVideoIfNecessary;
-(void)setMediaStalled:(BOOL)arg1 ;
-(CGSize)localAspectRatioForOrientation:(long long)arg1 ;
-(CGSize)remoteScreenPortraitAspectRatio;
-(CGSize)remoteScreenLandscapeAspectRatio;
-(long long)_orientationForVideoAttributesOrientation:(int)arg1 ;
-(void)setRemoteScreenOrientation:(long long)arg1 ;
-(void)setRemoteScreenPortraitAspectRatio:(CGSize)arg1 ;
-(void)setRemoteScreenLandscapeAspectRatio:(CGSize)arg1 ;
-(void)setRemoteAspectRatio:(CGSize)arg1 ;
-(void)setRemoteVideoContentRect:(CGRect)arg1 ;
-(long long)_cameraTypeForVideoAttributeCamera:(int)arg1 ;
-(void)setCameraType:(long long)arg1 ;
-(void)setCallerNameFromNetwork:(NSString *)arg1 ;
-(void)playDTMFToneForKey:(unsigned char)arg1 ;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(void)sendHardPauseDigits;
-(void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2 ;
-(void)setRequiresRemoteVideo:(BOOL)arg1 ;
-(void)setRemoteVideoPresentationSize:(CGSize)arg1 ;
-(void)setRemoteVideoPresentationState:(int)arg1 ;
-(void)setCallUUID:(NSString *)arg1 ;
-(void)setDisplayProvider:(TUCallProvider *)arg1 ;
-(void)setThirdPartyVideo:(BOOL)arg1 ;
-(void)setIsSendingAudio:(BOOL)arg1 ;
-(void)setUsingBaseband:(BOOL)arg1 ;
-(void)setSupportsTTYWithVoice:(BOOL)arg1 ;
-(void)setAudioCategory:(NSString *)arg1 ;
-(void)setAudioMode:(NSString *)arg1 ;
-(void)setNeedsManualInCallSounds:(BOOL)arg1 ;
-(void)setEndedReasonUserInfo:(NSDictionary *)arg1 ;
-(void)setEndedReasonString:(NSString *)arg1 ;
-(void)setEndedErrorString:(NSString *)arg1 ;
-(void)setCallRelaySupport:(int)arg1 ;
-(void)setVideoStreamToken:(long long)arg1 ;
-(void)setInputAudioPowerSpectrumToken:(long long)arg1 ;
-(void)setOutputAudioPowerSpectrumToken:(long long)arg1 ;
-(void)setCallGroupUUID:(NSUUID *)arg1 ;
-(void)setProviderContext:(NSDictionary *)arg1 ;
-(void)setPrefersExclusiveAccessToCellularNetwork:(BOOL)arg1 ;
-(void)setRemoteUplinkMuted:(BOOL)arg1 ;
-(void)setShouldSuppressInCallUI:(BOOL)arg1 ;
-(BOOL)isSOS;
-(BOOL)isOutgoing;
-(BOOL)isVideoPaused;
-(long long)inputAudioPowerSpectrumToken;
-(long long)outputAudioPowerSpectrumToken;
-(void)setVideoPaused:(BOOL)arg1 ;
-(void)setVideoDegraded:(BOOL)arg1 ;
-(BOOL)isVideoDegraded;
-(BOOL)isMediaStalled;
-(BOOL)isBlocked;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2 ;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(NSString *)audioMode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isVideo;
@end

