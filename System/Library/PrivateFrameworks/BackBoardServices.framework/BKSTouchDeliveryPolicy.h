/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (nonatomic,retain) NSObject*<OS_xpc_object> assertionEndpoint; 
+(id)policyByCombiningPolicies:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned)arg1 withHostContextId:(unsigned)arg2 ;
+(id)policyCancelingTouchesDeliveredToContextId:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)reducePolicyToObjectWithBlock:(/*^block*/id)arg1 ;
-(id)policyByMappingContainedPoliciesWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_xpc_object>)assertionEndpoint;
-(id)policyIncludingPolicy:(id)arg1 ;
-(id)policyExcludingPolicy:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setAssertionEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
@end
