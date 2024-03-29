/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSTimeZone : NSTimeZone {

	CFStringRef _name;
	CFDataRef _data;
	void* _ucal;
	opaque_pthread_mutex_t _lock;

}
+(id)__new:(CFStringRef)arg1 data:(CFDataRef)arg2 ;
+(id)__new:(CFStringRef)arg1 cache:(BOOL)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)localizedName:(long long)arg1 locale:(id)arg2 ;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(long long)secondsFromGMTForDate:(id)arg1 ;
-(id)data;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
@end

