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
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@class HMFUnfairLock, NSUUID, NSString, HMHome, HMApplicationData, _HMContext, HMMutableArray, NSArray;

@interface HMServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	NSString* _name;
	HMHome* _home;
	HMApplicationData* _applicationData;
	_HMContext* _context;
	HMMutableArray* _currentServices;

}

@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentServices;                                //@synthesize currentServices=_currentServices - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 home:(id)arg2 ;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findService:(id)arg1 ;
-(HMMutableArray *)currentServices;
-(void)_addService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleServiceAddedNotification:(id)arg1 ;
-(void)_handleServiceRemovedNotification:(id)arg1 ;
-(void)_handleServiceGroupRenamedNotification:(id)arg1 ;
-(void)_removeServices:(id)arg1 ;
-(void)setCurrentServices:(HMMutableArray *)arg1 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)_registerNotificationHandlers;
-(NSArray *)services;
-(HMApplicationData *)applicationData;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
@end

