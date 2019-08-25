/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent {

	NSString* _reason;

}

@property (copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(id)identifier;
-(id)initWithReason:(id)arg1 ;
-(NSString *)reason;
@end
