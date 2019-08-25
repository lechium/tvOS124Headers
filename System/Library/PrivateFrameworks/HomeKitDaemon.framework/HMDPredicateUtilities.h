/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHome, NSString;

@interface HMDPredicateUtilities : HMFObject <HMFLogging> {

	HMDHome* _home;
	NSString* _logString;

}

@property (nonatomic,__weak,readonly) HMDHome * home;               //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSString * logString;                //@synthesize logString=_logString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDHome *)home;
-(id)sunset;
-(id)sunrise;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 logIdentifier:(id)arg2 ;
-(BOOL)containsPresenceEvents:(id)arg1 ;
-(id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4 ;
-(id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2 ;
-(id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3 ;
-(id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(BOOL*)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6 ;
-(id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(BOOL*)arg3 ;
-(id)rewritePredicateForClient:(id)arg1 ;
-(id)metricFor:(id)arg1 ;
-(NSString *)logString;
-(id)rewriteNowAdjustedForHomeTimeZone:(id)arg1 ;
-(id)rewritePredicate:(id)arg1 forDaemon:(BOOL)arg2 message:(id)arg3 ;
-(void)fillMetric:(id)arg1 forPredicate:(id)arg2 ;
-(id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3 ;
-(id)addDeltaToNow:(id)arg1 ;
-(id)dateTodayMatchingComponents:(id)arg1 ;
@end

