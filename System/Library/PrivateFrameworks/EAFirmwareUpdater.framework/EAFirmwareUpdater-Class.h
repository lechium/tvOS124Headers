/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EAFirmwareUpdater/EAFirmwareUpdater-Structs.h>
#import <MobileAssetUpdater/MobileAssetUpdater.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/iAUPServerDelegate.h>

@protocol OS_dispatch_queue;
@class EAAccessory, NSString, EASession, NSDictionary, NSNumber, NSDate, NSURL, NSArray, NSMutableData, iAUPServer, NSObject, NSTimer;

@interface EAFirmwareUpdater : MobileAssetUpdater <NSStreamDelegate, iAUPServerDelegate> {

	EAAccessory* _accessory;
	NSString* _protocolString;
	EASession* _session;
	NSString* _bootloaderProtocol;
	NSString* _appProtocol;
	NSString* _multiassetAppProtocol;
	NSString* _deviceClass;
	NSDictionary* _deviceOptions;
	unsigned long long _firmwareVersionMajor;
	unsigned long long _firmwareVersionMinor;
	unsigned long long _firmwareVersionRelease;
	NSString* _currentFirmwareVersionOnAcc;
	NSString* _firmwareVersionAvailable;
	NSString* _transportType;
	NSNumber* _cumulativeProgressPercent;
	NSNumber* _resumedFromPercentNum;
	NSNumber* _resumeCount;
	NSNumber* _cumulativeTimeTaken;
	NSNumber* _currentSessionTimeTaken;
	NSNumber* _cumulativeBytesDownloaded;
	NSNumber* _totalBytesForCompleteUpdate;
	NSNumber* _cumulativeCloakTime;
	NSNumber* _currentSessionCloakTime;
	NSDate* _updateStartTime;
	NSString* _firmwareBundleFilename;
	NSURL* _firmwareBundleURL;
	/*^block*/id _applyCompletion;
	/*^block*/id _progressHandler;
	/*^block*/id _updateHandler;
	/*^block*/id _personalizationRequestHandler;
	NSArray* _buildIdentities;
	NSDictionary* _manifestIDs;
	NSArray* _manifestList;
	unsigned _manifestIndex;
	NSMutableData* _outputData;
	opaque_pthread_mutex_t _flushOutputLock;
	iAUPServer* _iAUPServer;
	NSObject*<OS_dispatch_queue> _eaNotificationDispatchQueue;
	BOOL _firmwareUpdateComplete;
	int _isExpectingReconnect;
	NSTimer* _reconnectTimer;
	BOOL _forceSilentUpdate;
	BOOL _skipDFUMode;
	BOOL _isMultiAssetSession;
	BOOL _byteEscape;
	BOOL _skipReconnect;
	NSString* _multiAssetAppProtocol;
	NSString* _updateBundleFilename;
	NSURL* _updateBundleURL;
	NSNumber* _cumulativeCloak;
	NSString* _serialNumber;

}

@property (nonatomic,retain) EAAccessory * accessory;                             //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSString * protocolString;                           //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,retain) EASession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSString * bootloaderProtocol;                       //@synthesize bootloaderProtocol=_bootloaderProtocol - In the implementation block
@property (nonatomic,retain) NSString * appProtocol;                              //@synthesize appProtocol=_appProtocol - In the implementation block
@property (nonatomic,retain) NSString * multiAssetAppProtocol;                    //@synthesize multiAssetAppProtocol=_multiAssetAppProtocol - In the implementation block
@property (nonatomic,retain) NSString * firmwareBundleFilename;                   //@synthesize updateBundleFilename=_updateBundleFilename - In the implementation block
@property (nonatomic,retain) NSURL * firmwareBundleURL;                           //@synthesize updateBundleURL=_updateBundleURL - In the implementation block
@property (nonatomic,copy) id applyCompletion;                                    //@synthesize applyCompletion=_applyCompletion - In the implementation block
@property (assign,nonatomic) BOOL forceSilentUpdate;                              //@synthesize forceSilentUpdate=_forceSilentUpdate - In the implementation block
@property (assign,nonatomic) BOOL skipDFUMode;                                    //@synthesize skipDFUMode=_skipDFUMode - In the implementation block
@property (assign,nonatomic) BOOL isMultiAssetSession;                            //@synthesize isMultiAssetSession=_isMultiAssetSession - In the implementation block
@property (nonatomic,retain) NSString * currentFirmwareVersionOnAcc;              //@synthesize currentFirmwareVersionOnAcc=_currentFirmwareVersionOnAcc - In the implementation block
@property (nonatomic,retain) NSString * firmwareVersionAvailable;                 //@synthesize firmwareVersionAvailable=_firmwareVersionAvailable - In the implementation block
@property (nonatomic,retain) NSString * transportType;                            //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSNumber * resumedFromPercentNum;                    //@synthesize resumedFromPercentNum=_resumedFromPercentNum - In the implementation block
@property (nonatomic,retain) NSNumber * resumeCount;                              //@synthesize resumeCount=_resumeCount - In the implementation block
@property (nonatomic,retain) NSNumber * cumulativeProgressPercent;                //@synthesize cumulativeProgressPercent=_cumulativeProgressPercent - In the implementation block
@property (nonatomic,retain) NSNumber * cumulativeTimeTaken;                      //@synthesize cumulativeTimeTaken=_cumulativeTimeTaken - In the implementation block
@property (nonatomic,retain) NSNumber * cumulativeCloak;                          //@synthesize cumulativeCloak=_cumulativeCloak - In the implementation block
@property (nonatomic,retain) NSNumber * currentSessionTimeTaken;                  //@synthesize currentSessionTimeTaken=_currentSessionTimeTaken - In the implementation block
@property (nonatomic,copy) NSDictionary * manifestIDs;                            //@synthesize manifestIDs=_manifestIDs - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                             //@synthesize serialNumber=_serialNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootloaderProtocolStringWithEAID:(id)arg1 ;
+(id)appProtocolStringWithEAID:(id)arg1 ;
+(id)multiAssetAppProtocolStringWithEAID:(id)arg1 ;
+(id)findAccessoryWithProtocolString:(id)arg1 serialNum:(id)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSString *)transportType;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setSession:(EASession *)arg1 ;
-(EASession *)session;
-(id)writeData:(id)arg1 ;
-(NSString *)protocolString;
-(void)setProtocolString:(NSString *)arg1 ;
-(void)updateProgress:(double)arg1 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(id)openSession;
-(void)setBootloaderProtocol:(NSString *)arg1 ;
-(void)setAppProtocol:(NSString *)arg1 ;
-(void)setMultiAssetAppProtocol:(NSString *)arg1 ;
-(BOOL)findAccessory;
-(NSString *)appProtocol;
-(NSString *)bootloaderProtocol;
-(NSString *)multiAssetAppProtocol;
-(void)stopReconnectTimer;
-(void)reconnectTimerDidFire:(id)arg1 ;
-(BOOL)isMultiAssetSession;
-(id)supportedProtocolForAccessory:(id)arg1 ;
-(void)setCurrentFirmwareVersionOnAcc:(NSString *)arg1 ;
-(void)setFirmwareBundleFilename:(NSString *)arg1 ;
-(NSString *)firmwareBundleFilename;
-(void)setForceSilentUpdate:(BOOL)arg1 ;
-(BOOL)forceSilentUpdate;
-(void)setFirmwareBundleURL:(NSURL *)arg1 ;
-(NSURL *)firmwareBundleURL;
-(void)updateComplete:(id)arg1 error:(id)arg2 ;
-(void)handleSessionError:(unsigned)arg1 message:(id)arg2 ;
-(BOOL)stitchManifestInSuperBinary:(id)arg1 withManifest:(id)arg2 withId:(unsigned)arg3 ;
-(void)_accessoryDidConnect:(id)arg1 ;
-(BOOL)skipDFUMode;
-(void)startReconnectTimer:(int)arg1 ;
-(id)flushOutput;
-(id)createEndOfUpdateEventDict:(id)arg1 error:(id)arg2 ;
-(id)applyCompletion;
-(void)handleInputData;
-(void)logStatusString:(id)arg1 ;
-(void)handleFirmwareUpdateStatus:(id)arg1 ;
-(void)firmwareUpdateComplete:(id)arg1 error:(id)arg2 ;
-(void)processPersonalizationInfoFromAccessory:(id)arg1 ;
-(BOOL)updateRequiresPersonalization;
-(unsigned char)getPersonalizationID;
-(id)getDeviceClassName;
-(id)initWithDeviceClass:(id)arg1 assetType:(id)arg2 skipDFU:(BOOL)arg3 byteEscape:(BOOL)arg4 skipReconnect:(BOOL)arg5 options:(id)arg6 serialNum:(id)arg7 ;
-(void)setManifestIDs:(NSDictionary *)arg1 ;
-(void)setFirmwareBundle:(id)arg1 withManifest:(id)arg2 ;
-(id)overrideQueryPredicateFromDict:(id)arg1 ;
-(id)queryPredicate;
-(id)assetWithMaxVersion:(id)arg1 ;
-(id)validateAssetAttributes:(id)arg1 ;
-(id)validateAsset;
-(BOOL)isRestartRequired;
-(void)personalizationResponse:(id)arg1 error:(id)arg2 ;
-(id)applyFirmware:(/*^block*/id)arg1 progress:(/*^block*/id)arg2 update:(/*^block*/id)arg3 personalization:(/*^block*/id)arg4 ;
-(void)setApplyCompletion:(id)arg1 ;
-(void)setSkipDFUMode:(BOOL)arg1 ;
-(void)setIsMultiAssetSession:(BOOL)arg1 ;
-(NSString *)currentFirmwareVersionOnAcc;
-(NSString *)firmwareVersionAvailable;
-(void)setFirmwareVersionAvailable:(NSString *)arg1 ;
-(NSNumber *)resumedFromPercentNum;
-(void)setResumedFromPercentNum:(NSNumber *)arg1 ;
-(NSNumber *)resumeCount;
-(void)setResumeCount:(NSNumber *)arg1 ;
-(NSNumber *)cumulativeProgressPercent;
-(void)setCumulativeProgressPercent:(NSNumber *)arg1 ;
-(NSNumber *)cumulativeTimeTaken;
-(void)setCumulativeTimeTaken:(NSNumber *)arg1 ;
-(NSNumber *)cumulativeCloak;
-(void)setCumulativeCloak:(NSNumber *)arg1 ;
-(NSNumber *)currentSessionTimeTaken;
-(void)setCurrentSessionTimeTaken:(NSNumber *)arg1 ;
-(NSDictionary *)manifestIDs;
-(EAAccessory *)accessory;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setAccessory:(EAAccessory *)arg1 ;
-(void)closeSession;
-(void)dealloc;
@end

