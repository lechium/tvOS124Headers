/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HFSetupPairingController.h>

@protocol HMSetupRemoteService;
@class HMSetupAccessoryDescription, HFSetupAccessoryResult, HMHome, NSString, HFDiscoveredAccessory, HMAccessorySetupCompletedInfo, NSSet, NSHashTable, NAFuture, NSDate;

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController> {

	BOOL _accessoryRequiresCode;
	HFSetupAccessoryResult* _setupResult;
	HMAccessorySetupCompletedInfo* _completedInfo;
	HFDiscoveredAccessory* _discoveredAccessoryToPair;
	id<HMSetupRemoteService> _setupRemoteService;
	HMSetupAccessoryDescription* _setupAccessoryDescription;
	unsigned long long _phase;
	NSString* _statusTitle;
	NSString* _statusDescription;
	HMHome* _home;
	NSSet* _pairedAccessories;
	NSHashTable* _pairingObservers;
	NAFuture* _pairingFuture;
	NSDate* _phaseStartDate;

}

@property (assign,nonatomic) unsigned long long phase;                                               //@synthesize phase=_phase - In the implementation block
@property (nonatomic,retain) NSString * statusTitle;                                                 //@synthesize statusTitle=_statusTitle - In the implementation block
@property (nonatomic,retain) NSString * statusDescription;                                           //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSSet * pairedAccessories;                                              //@synthesize pairedAccessories=_pairedAccessories - In the implementation block
@property (nonatomic,retain) NSHashTable * pairingObservers;                                         //@synthesize pairingObservers=_pairingObservers - In the implementation block
@property (nonatomic,retain) NAFuture * pairingFuture;                                               //@synthesize pairingFuture=_pairingFuture - In the implementation block
@property (nonatomic,retain) NSDate * phaseStartDate;                                                //@synthesize phaseStartDate=_phaseStartDate - In the implementation block
@property (assign,nonatomic) BOOL accessoryRequiresCode;                                             //@synthesize accessoryRequiresCode=_accessoryRequiresCode - In the implementation block
@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessoryToPair;                    //@synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair - In the implementation block
@property (assign,nonatomic,__weak) id<HMSetupRemoteService> setupRemoteService;                     //@synthesize setupRemoteService=_setupRemoteService - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription;              //@synthesize setupAccessoryDescription=_setupAccessoryDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFSetupAccessoryResult * setupResult;                                   //@synthesize setupResult=_setupResult - In the implementation block
@property (nonatomic,readonly) HMAccessorySetupCompletedInfo * completedInfo;                        //@synthesize completedInfo=_completedInfo - In the implementation block
+(BOOL)supportsSetupPayloadRetry;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(void)setStatusTitle:(NSString *)arg1 ;
-(NSString *)statusTitle;
-(void)setStatusDescription:(NSString *)arg1 ;
-(NSString *)statusDescription;
-(HFDiscoveredAccessory *)discoveredAccessoryToPair;
-(void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2 ;
-(void)setPhaseStartDate:(NSDate *)arg1 ;
-(void)_updateStatusTextAndNotifyDelegate:(BOOL)arg1 ;
-(NSHashTable *)pairingObservers;
-(void)_tryPairing;
-(void)setPairingObservers:(NSHashTable *)arg1 ;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(id<HMSetupRemoteService>)setupRemoteService;
-(void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2 ;
-(NAFuture *)pairingFuture;
-(void)_finishPairingWithDiscoveredAccessory:(id)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(HFSetupAccessoryResult *)setupResult;
-(BOOL)accessoryRequiresCode;
-(NSDate *)phaseStartDate;
-(void)setPairedAccessories:(NSSet *)arg1 ;
-(void)setSetupResult:(HFSetupAccessoryResult *)arg1 ;
-(void)addPairingObserver:(id)arg1 ;
-(void)removePairingObserver:(id)arg1 ;
-(void)startWithHome:(id)arg1 ;
-(HMAccessorySetupCompletedInfo *)completedInfo;
-(id)initWithDiscoveredAccessory:(id)arg1 setupRemoteService:(id)arg2 setupAccessoryDescription:(id)arg3 ;
-(void)setSetupRemoteService:(id<HMSetupRemoteService>)arg1 ;
-(void)setPairingFuture:(NAFuture *)arg1 ;
-(void)setAccessoryRequiresCode:(BOOL)arg1 ;
-(NSSet *)pairedAccessories;
-(id)cancel;
-(unsigned long long)phase;
-(void)setPhase:(unsigned long long)arg1 ;
@end

