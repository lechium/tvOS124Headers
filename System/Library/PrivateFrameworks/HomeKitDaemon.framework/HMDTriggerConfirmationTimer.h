/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFTimer.h>

@class NSUUID;

@interface HMDTriggerConfirmationTimer : HMFTimer {

	NSUUID* _executionSessionID;

}

@property (nonatomic,readonly) NSUUID * executionSessionID;              //@synthesize executionSessionID=_executionSessionID - In the implementation block
-(id)initWithExecutionSessionID:(id)arg1 timeoutInterval:(double)arg2 ;
-(NSUUID *)executionSessionID;
-(id)description;
@end
