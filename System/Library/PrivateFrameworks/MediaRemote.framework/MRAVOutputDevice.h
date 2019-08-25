/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary, MRAVOutputDeviceSourceInfo, MRAVEndpoint, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDevice : NSObject {

	BOOL _canAccessRemoteAssets;
	BOOL _canAccessAppleMusic;
	BOOL _canAccessiCloudMusicLibrary;
	BOOL _canPlayEncryptedProgressiveDownloadAssets;
	BOOL _canFetchMediaDataFromSender;
	BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	BOOL _remoteControllable;
	BOOL _groupLeader;
	BOOL _groupContainsGroupLeader;
	BOOL _airPlayReceiverSessionActive;
	BOOL _groupable;
	BOOL _proxyGroupPlayer;
	BOOL _canRelayCommunicationChannel;
	BOOL _supportsBufferedAirPlay;
	BOOL _supportsRapport;
	BOOL _isAddedToHomeKit;
	BOOL _deviceGroupable;
	BOOL _pickedOnPairedDevice;
	BOOL _hasBatteryLevel;
	BOOL _localDevice;
	BOOL _supportsExternalScreen;
	BOOL _requiresAuthorization;
	BOOL _parentGroupContainsDiscoverableLeader;
	BOOL _volumeControlAvailable;
	unsigned _deviceType;
	unsigned _deviceSubtype;
	float _batteryLevel;
	float _volume;
	NSString* _name;
	NSString* _uid;
	NSString* _modelID;
	NSString* _firmwareVersion;
	NSString* _groupID;
	NSString* _logicalDeviceID;
	NSData* _MACAddress;
	NSDictionary* _modelSpecificInfo;
	NSString* _playingPairedDeviceName;
	NSString* _parentGroupIdentifier;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,readonly) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * uid;                                                                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) NSString * modelID;                                                                   //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,readonly) NSString * firmwareVersion;                                                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                                       //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSString * logicalDeviceID;                                                           //@synthesize logicalDeviceID=_logicalDeviceID - In the implementation block
@property (nonatomic,readonly) NSData * MACAddress;                                                                  //@synthesize MACAddress=_MACAddress - In the implementation block
@property (nonatomic,readonly) NSDictionary * modelSpecificInfo;                                                     //@synthesize modelSpecificInfo=_modelSpecificInfo - In the implementation block
@property (nonatomic,readonly) NSString * playingPairedDeviceName;                                                   //@synthesize playingPairedDeviceName=_playingPairedDeviceName - In the implementation block
@property (nonatomic,readonly) BOOL canAccessRemoteAssets;                                                           //@synthesize canAccessRemoteAssets=_canAccessRemoteAssets - In the implementation block
@property (nonatomic,readonly) BOOL canAccessAppleMusic;                                                             //@synthesize canAccessAppleMusic=_canAccessAppleMusic - In the implementation block
@property (nonatomic,readonly) BOOL canAccessiCloudMusicLibrary;                                                     //@synthesize canAccessiCloudMusicLibrary=_canAccessiCloudMusicLibrary - In the implementation block
@property (nonatomic,readonly) BOOL canPlayEncryptedProgressiveDownloadAssets;                                       //@synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets - In the implementation block
@property (nonatomic,readonly) BOOL canFetchMediaDataFromSender;                                                     //@synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender - In the implementation block
@property (nonatomic,readonly) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;                 //@synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets - In the implementation block
@property (getter=isRemoteControllable,nonatomic,readonly) BOOL remoteControllable;                                  //@synthesize remoteControllable=_remoteControllable - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader;                                                //@synthesize groupLeader=_groupLeader - In the implementation block
@property (nonatomic,readonly) BOOL groupContainsGroupLeader;                                                        //@synthesize groupContainsGroupLeader=_groupContainsGroupLeader - In the implementation block
@property (getter=isAirPlayReceiverSessionActive,nonatomic,readonly) BOOL airPlayReceiverSessionActive;              //@synthesize airPlayReceiverSessionActive=_airPlayReceiverSessionActive - In the implementation block
@property (getter=isGroupable,nonatomic,readonly) BOOL groupable;                                                    //@synthesize groupable=_groupable - In the implementation block
@property (getter=isProxyGroupPlayer,nonatomic,readonly) BOOL proxyGroupPlayer;                                      //@synthesize proxyGroupPlayer=_proxyGroupPlayer - In the implementation block
@property (nonatomic,readonly) BOOL canRelayCommunicationChannel;                                                    //@synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel - In the implementation block
@property (nonatomic,readonly) BOOL supportsBufferedAirPlay;                                                         //@synthesize supportsBufferedAirPlay=_supportsBufferedAirPlay - In the implementation block
@property (nonatomic,readonly) BOOL supportsRapport;                                                                 //@synthesize supportsRapport=_supportsRapport - In the implementation block
@property (nonatomic,readonly) BOOL isAddedToHomeKit;                                                                //@synthesize isAddedToHomeKit=_isAddedToHomeKit - In the implementation block
@property (getter=isDeviceGroupable,nonatomic,readonly) BOOL deviceGroupable;                                        //@synthesize deviceGroupable=_deviceGroupable - In the implementation block
@property (getter=isPickedOnPairedDevice,nonatomic,readonly) BOOL pickedOnPairedDevice;                              //@synthesize pickedOnPairedDevice=_pickedOnPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned deviceType;                                                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) unsigned deviceSubtype;                                                               //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
@property (nonatomic,readonly) float batteryLevel;                                                                   //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) BOOL hasBatteryLevel;                                                                 //@synthesize hasBatteryLevel=_hasBatteryLevel - In the implementation block
@property (getter=isLocalDevice,nonatomic,readonly) BOOL localDevice;                                                //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,readonly) BOOL supportsExternalScreen;                                                          //@synthesize supportsExternalScreen=_supportsExternalScreen - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthorization;                                                           //@synthesize requiresAuthorization=_requiresAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL parentGroupContainsDiscoverableLeader;                                           //@synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader - In the implementation block
@property (nonatomic,copy) NSString * parentGroupIdentifier;                                                         //@synthesize parentGroupIdentifier=_parentGroupIdentifier - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) BOOL volumeControlAvailable;                          //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (nonatomic,readonly) unsigned volumeCapabilities; 
@property (nonatomic,readonly) MRAVOutputDeviceSourceInfo * sourceInfo;                                              //@synthesize sourceInfo=_sourceInfo - In the implementation block
@property (assign,nonatomic) float volume;                                                                           //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic,__weak) MRAVEndpoint * endpoint;                                                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) _MRAVOutputDeviceDescriptorProtobuf * descriptor; 
@property (nonatomic,readonly) NSString * capabilitiesDescription; 
@property (nonatomic,readonly) NSString * composedTypeDescription; 
@property (nonatomic,readonly) NSString * roleDescription; 
@property (nonatomic,readonly) NSDictionary * jsonEncodableDictionaryRepresentation; 
+(id)localDeviceLocalizedName;
+(id)localDeviceUID;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)groupContainsGroupLeader;
-(NSString *)logicalDeviceID;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)hasBatteryLevel;
-(BOOL)isLocalDevice;
-(BOOL)isRemoteControllable;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(NSString *)parentGroupIdentifier;
-(BOOL)isAddedToHomeKit;
-(void)setParentGroupIdentifier:(NSString *)arg1 ;
-(NSDictionary *)modelSpecificInfo;
-(BOOL)supportsExternalScreen;
-(MRAVOutputDeviceSourceInfo *)sourceInfo;
-(NSString *)capabilitiesDescription;
-(NSString *)composedTypeDescription;
-(NSString *)roleDescription;
-(NSDictionary *)jsonEncodableDictionaryRepresentation;
-(BOOL)supportsRapport;
-(BOOL)isPickedOnPairedDevice;
-(NSString *)playingPairedDeviceName;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isProxyGroupPlayer;
-(unsigned)volumeCapabilities;
-(BOOL)isGroupLeader;
-(void)setVolume:(float)arg1 ;
-(unsigned)deviceType;
-(NSString *)firmwareVersion;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(NSString *)modelID;
-(float)volume;
-(unsigned)deviceSubtype;
-(void)setEndpoint:(MRAVEndpoint *)arg1 ;
-(NSData *)MACAddress;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(_MRAVOutputDeviceDescriptorProtobuf *)descriptor;
-(float)batteryLevel;
-(NSString *)uid;
-(MRAVEndpoint *)endpoint;
@end

