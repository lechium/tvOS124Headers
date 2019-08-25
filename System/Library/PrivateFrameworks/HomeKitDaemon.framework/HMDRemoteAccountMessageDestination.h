/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDRemoteAccountHandleMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination {

	HMDAccount* _account;

}

@property (nonatomic,readonly) HMDAccount * account;              //@synthesize account=_account - In the implementation block
+(id)shortDescription;
-(HMDAccount *)account;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(BOOL)arg3 ;
-(id)remoteDestinationString;
-(id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)initWithTarget:(id)arg1 ;
-(id)shortDescription;
@end
