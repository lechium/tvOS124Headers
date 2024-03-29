/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface RTEventMicroLocation : RTEvent <NSSecureCoding> {

	NSArray* _microLocations;

}

@property (nonatomic,readonly) NSArray * microLocations;              //@synthesize microLocations=_microLocations - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)microLocations;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4 microLocations:(id)arg5 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 source:(long long)arg3 identifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

