/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@interface CTCellularData : NSObject {

	network_usage_policy_client_sRef _cuPolicyClient;
	queue* _cuPolicyClientQueue;
	unsigned long long _restrictedState;
	/*^block*/id _cellularDataRestrictionDidUpdateNotifier;

}

@property (copy) id cellularDataRestrictionDidUpdateNotifier;                   //@synthesize cellularDataRestrictionDidUpdateNotifier=_cellularDataRestrictionDidUpdateNotifier - In the implementation block
@property (nonatomic,readonly) unsigned long long restrictedState;              //@synthesize restrictedState=_restrictedState - In the implementation block
-(void)setCellularDataRestrictionStateFromPolicies:(void*)arg1 ;
-(id)cellularDataRestrictionDidUpdateNotifier;
-(unsigned long long)restrictedState;
-(void)setCellularDataRestrictionDidUpdateNotifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

