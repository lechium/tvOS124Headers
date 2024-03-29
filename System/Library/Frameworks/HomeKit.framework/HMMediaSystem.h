/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMControllable.h>
#import <libobjc.A.dylib/HMMediaObject.h>
#import <libobjc.A.dylib/HMApplicationData.h>
#import <libobjc.A.dylib/HMAccessorySettingsContainer.h>

@protocol HMMediaSystemDelegate;
@class HMMediaSession, HMAccessorySettings, HMApplicationData, HMHome, HMFUnfairLock, NSString, NSUUID, HMSymptomsHandler, _HMContext, HMMutableArray, NSArray, HMAccessoryCategory;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMControllable, HMMediaObject, HMApplicationData, HMAccessorySettingsContainer> {

	HMFUnfairLock* _lock;
	BOOL _compatible;
	NSString* _name;
	NSString* _configuredName;
	NSUUID* _uniqueIdentifier;
	HMAccessorySettings* _settings;
	id<HMMediaSystemDelegate> _delegate;
	HMApplicationData* _applicationData;
	HMHome* _home;
	HMSymptomsHandler* _symptomsHandler;
	_HMContext* _context;
	NSUUID* _uuid;
	HMMutableArray* _componentsArray;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMutableArray * componentsArray;                                //@synthesize componentsArray=_componentsArray - In the implementation block
@property (nonatomic,retain) HMApplicationData * applicationData;                             //@synthesize applicationData=_applicationData - In the implementation block
@property (__weak) id<HMMediaSystemDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * configuredName;                                     //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isCompatible,nonatomic,readonly) BOOL compatible;                           //@synthesize compatible=_compatible - In the implementation block
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) HMAccessoryCategory * category; 
@property (nonatomic,readonly) HMSymptomsHandler * symptomsHandler;                           //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (getter=isControllable,readonly) BOOL controllable; 
@property (copy,readonly) HMMediaSession * mediaSession; 
@property (readonly) HMAccessorySettings * settings;                                          //@synthesize settings=_settings - In the implementation block
@property (__weak,readonly) HMHome * containerHome; 
+(id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2 ;
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(BOOL)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8 ;
-(void)_handleRootSettingsUpdated:(id)arg1 ;
-(void)_handleSystemUpdatedNotification:(id)arg1 ;
-(void)_handleAppDataUpdatedNotification:(id)arg1 ;
-(HMMutableArray *)componentsArray;
-(void)_updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyDelegateOfUpdatedSettings:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(BOOL)arg3 ;
-(void)notifyDelegateOfUpdatedApplicationData:(id)arg1 ;
-(void)notifyDelegateOfUpdatedComponents:(id)arg1 ;
-(void)notifyDelegateOfUpdatedName:(id)arg1 ;
-(void)notifyDelegateOfUpdatedConfiguredName:(id)arg1 ;
-(void)notifyDelegateOfUpdatedMediaSession:(id)arg1 ;
-(HMHome *)containerHome;
-(void)_updateAccessoryReference;
-(BOOL)isCompatible;
-(void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2 ;
-(void)setComponentsArray:(HMMutableArray *)arg1 ;
-(BOOL)isControllable;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMSymptomsHandler *)symptomsHandler;
-(void)_registerNotificationHandlers;
-(HMMediaSession *)mediaSession;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(HMApplicationData *)applicationData;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uuid;
-(void)setDelegate:(id<HMMediaSystemDelegate>)arg1 ;
-(id<HMMediaSystemDelegate>)delegate;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(HMAccessorySettings *)settings;
-(void)_invalidate;
-(void)setSettings:(HMAccessorySettings *)arg1 ;
-(HMAccessoryCategory *)category;
-(NSArray *)components;
-(NSUUID *)uniqueIdentifier;
@end

