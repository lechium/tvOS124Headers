/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding> {

	BOOL _repeats;

}

@property (nonatomic,readonly) BOOL repeats;              //@synthesize repeats=_repeats - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(id)_initWithRepeats:(BOOL)arg1 ;
-(id)nextTriggerDate;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(BOOL)repeats;
@end

