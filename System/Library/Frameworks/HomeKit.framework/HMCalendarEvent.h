/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMTimeEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDateComponents;

@interface HMCalendarEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSDateComponents* _fireDateComponents;

}

@property (nonatomic,retain) NSDateComponents * fireDateComponents;              //@synthesize fireDateComponents=_fireDateComponents - In the implementation block
+(id)createWithDictionary:(id)arg1 home:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)_handleEventUpdatedNotification:(id)arg1 ;
-(id)initWithDict:(id)arg1 fireDateComponents:(id)arg2 ;
-(void)_updateFireDateComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateFireDateComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFireDateComponents:(id)arg1 ;
-(NSDateComponents *)fireDateComponents;
-(void)setFireDateComponents:(NSDateComponents *)arg1 ;
-(id)_serializeForAdd;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

