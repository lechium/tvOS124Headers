/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
+(id)sharedPowerLogger;
-(id)linkTypeDescription:(long long)arg1 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
@end

