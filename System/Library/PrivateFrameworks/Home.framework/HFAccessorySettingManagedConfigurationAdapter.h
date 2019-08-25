/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAccessorySettingAdapter.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterDisplayArbitrating.h>

@class MCProfileConnection, NSHashTable, NSString;

@interface HFAccessorySettingManagedConfigurationAdapter : HFAccessorySettingAdapter <MCProfileConnectionObserver, HFAccessorySettingAdapterDisplayArbitrating> {

	BOOL _isSettingUp;
	MCProfileConnection* _profileConnectionForSynchronization;
	NSHashTable* _profileObservers;

}

@property (assign,nonatomic) BOOL isSettingUp;                                                         //@synthesize isSettingUp=_isSettingUp - In the implementation block
@property (nonatomic,retain) NSHashTable * profileObservers;                                           //@synthesize profileObservers=_profileObservers - In the implementation block
@property (nonatomic,readonly) MCProfileConnection * profileConnectionForSynchronization;              //@synthesize profileConnectionForSynchronization=_profileConnectionForSynchronization - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)profiles;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(/*^block*/id)arg4 ;
-(id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2 ;
-(BOOL)shouldShowSettingsEntity:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2 ;
-(id)_beginMonitoringSettingsKeyPath:(id)arg1 ;
-(void)_setupDebugHandler;
-(MCProfileConnection *)profileConnectionForSynchronization;
-(id)_synchronizeHomeKitToManagedConfiguration;
-(void)_dispatchWasUpdated;
-(id)profilesSettingFuture;
-(id)removeProfileFromHomeKit:(id)arg1 ;
-(id)_profilesSettingData;
-(NSHashTable *)profileObservers;
-(id)_installedProfileData;
-(BOOL)isSettingUp;
-(id)_removeProfileFromProfileManager:(id)arg1 ;
-(void)_rebootForReason:(id)arg1 ;
-(id)_synchronizeManagedConfigurationToHomeKit;
-(unsigned long long)numberOfProfiles;
-(void)setIsSettingUp:(BOOL)arg1 ;
-(id)removeProfileDataFromHomeKit:(id)arg1 ;
-(void)addProfileObserver:(id)arg1 ;
-(void)removeProfileObserver:(id)arg1 ;
-(void)setProfileObservers:(NSHashTable *)arg1 ;
-(void)dealloc;
@end

