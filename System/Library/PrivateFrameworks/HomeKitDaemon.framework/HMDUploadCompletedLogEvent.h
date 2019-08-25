/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)uploadCompletedWithError:(id)arg1 ;
+(id)uuid;
-(id)initUploadWithError:(id)arg1 ;
-(NSError *)error;
@end

