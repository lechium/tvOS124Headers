/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _endDate;
	unsigned long long _occurrenceCount;

}

@property (nonatomic,readonly) BOOL usesEndDate; 
@property (nonatomic,readonly) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long occurrenceCount;              //@synthesize occurrenceCount=_occurrenceCount - In the implementation block
+(id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1 ;
+(id)recurrenceEndWithEndDate:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSDate *)endDate;
-(id)initWithEndDate:(id)arg1 ;
-(id)initWithOccurrenceCount:(unsigned long long)arg1 ;
-(BOOL)usesEndDate;
-(unsigned long long)occurrenceCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

