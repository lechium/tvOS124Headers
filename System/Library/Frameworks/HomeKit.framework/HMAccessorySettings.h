/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol HMAccessorySettingsContainer, HMControllable, HMAccessorySettingsDelegate;
@class HMFUnfairLock, HMAccessorySettingGroup, _HMContext, HMAccessory, NSString, NSUUID;

@interface HMAccessorySettings : NSObject <HMFLogging, HMObjectMerge> {

	HMFUnfairLock* _lock;
	id<HMAccessorySettingsContainer> _settingsContainer;
	id<HMControllable> _settingsControl;
	id<HMAccessorySettingsDelegate> _delegate;
	HMAccessorySettingGroup* _rootGroup;
	_HMContext* _context;

}

@property (nonatomic,readonly) _HMContext * context;                                //@synthesize context=_context - In the implementation block
@property (__weak) id<HMControllable> settingsControl;                              //@synthesize settingsControl=_settingsControl - In the implementation block
@property (__weak) id<HMAccessorySettingsContainer> settingsContainer;              //@synthesize settingsContainer=_settingsContainer - In the implementation block
@property (getter=isControllable,readonly) BOOL controllable; 
@property (__weak) id<HMAccessorySettingsDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) HMAccessory * accessory; 
@property (readonly) HMAccessorySettingGroup * rootGroup;                           //@synthesize rootGroup=_rootGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(id)localizationKeyForKeyPath:(id)arg1 ;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id<HMControllable>)settingsControl;
-(void)setSettingsControl:(id<HMControllable>)arg1 ;
-(id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3 ;
-(void)setSettingsContainer:(id<HMAccessorySettingsContainer>)arg1 ;
-(void)_updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)__notifyDelegateSettingsDidUpdate;
-(void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(/*^block*/id)arg1 ;
-(void)_configureWithContext:(id)arg1 ;
-(BOOL)isControllable;
-(id<HMAccessorySettingsContainer>)settingsContainer;
-(HMAccessory *)accessory;
-(HMAccessorySettingGroup *)rootGroup;
-(void)setDelegate:(id<HMAccessorySettingsDelegate>)arg1 ;
-(id<HMAccessorySettingsDelegate>)delegate;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
@end

