/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTStoreNotificationAvailabilityDidChange : RTNotification {

	unsigned long long _availability;

}

@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
-(unsigned long long)availability;
-(id)initWithAvailability:(unsigned long long)arg1 ;
-(id)description;
@end

