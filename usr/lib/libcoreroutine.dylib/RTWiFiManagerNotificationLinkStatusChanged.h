/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationLinkStatusChanged : RTNotification {

	unsigned long long _linkStatus;
	NSArray* _accessPoints;

}

@property (nonatomic,readonly) unsigned long long linkStatus;              //@synthesize linkStatus=_linkStatus - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                     //@synthesize accessPoints=_accessPoints - In the implementation block
-(NSArray *)accessPoints;
-(id)initWithLinkStatus:(unsigned long long)arg1 accessPoints:(id)arg2 ;
-(unsigned long long)linkStatus;
@end

