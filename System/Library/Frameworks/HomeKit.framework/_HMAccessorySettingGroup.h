/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMerging.h>

@protocol _HMAccesorySettingGroupDelegate;
@class HMFUnfairLock, NSMutableSet, NSUUID, NSString, _HMContext, HMAccessorySettings, NSArray;

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging> {

	HMFUnfairLock* _lock;
	NSMutableSet* _settings;
	NSMutableSet* _groups;
	id<_HMAccesorySettingGroupDelegate> _delegate;
	NSUUID* _identifier;
	NSString* _name;
	_HMContext* _context;
	HMAccessorySettings* _accessorySettings;

}

@property (nonatomic,retain) HMAccessorySettings * accessorySettings;                         //@synthesize accessorySettings=_accessorySettings - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) id<_HMAccesorySettingGroupDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(id)supportedSettingsClasses;
+(id)supportedGroupsClasses;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)configureWithAccessorySettings:(id)arg1 context:(id)arg2 ;
-(void)setAccessorySettings:(HMAccessorySettings *)arg1 ;
-(void)_handleAddedSetting:(id)arg1 ;
-(void)_handleRemovedSetting:(id)arg1 ;
-(void)_handleAddedGroup:(id)arg1 ;
-(void)_handleRemovedGroup:(id)arg1 ;
-(void)notifyDelegateOfAddedSetting:(id)arg1 ;
-(void)notifyDelegateOfRemovedSetting:(id)arg1 ;
-(void)notifyDelegateOfAddedGroup:(id)arg1 ;
-(void)notifyDelegateOfRemovedGroup:(id)arg1 ;
-(BOOL)mergeSettings:(id)arg1 ;
-(BOOL)mergeGroups:(id)arg1 ;
-(void)addSetting:(id)arg1 toGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeSetting:(id)arg1 fromGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addGroup:(id)arg1 toGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeGroup:(id)arg1 fromGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMAccessorySettings *)accessorySettings;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(id)clientQueue;
-(void)_registerNotificationHandlers;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)messageDestination;
-(BOOL)mergeObject:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(id)settingWithIdentifier:(id)arg1 ;
-(void)removeSetting:(id)arg1 ;
-(void)addGroup:(id)arg1 ;
-(id)groupWithIdentifier:(id)arg1 ;
-(void)removeGroup:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)setDelegate:(id<_HMAccesorySettingGroupDelegate>)arg1 ;
-(id<_HMAccesorySettingGroupDelegate>)delegate;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(NSArray *)settings;
-(NSArray *)groups;
-(id)initWithName:(id)arg1 ;
-(id)shortDescription;
@end

