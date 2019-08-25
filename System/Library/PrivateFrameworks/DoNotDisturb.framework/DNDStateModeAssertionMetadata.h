/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDateInterval;

@interface DNDStateModeAssertionMetadata : NSObject <NSCopying, NSSecureCoding> {

	BOOL _userRequested;
	NSString* _modeIdentifier;
	unsigned long long _lifetimeType;
	NSDateInterval* _activeDateInterval;

}

@property (nonatomic,copy,readonly) NSString * modeIdentifier;                         //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (getter=isUserRequested,nonatomic,readonly) BOOL userRequested;              //@synthesize userRequested=_userRequested - In the implementation block
@property (nonatomic,readonly) unsigned long long lifetimeType;                        //@synthesize lifetimeType=_lifetimeType - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * activeDateInterval;               //@synthesize activeDateInterval=_activeDateInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isUserRequested;
-(NSDateInterval *)activeDateInterval;
-(NSString *)modeIdentifier;
-(unsigned long long)lifetimeType;
-(id)initWithModeIdentifier:(id)arg1 userRequested:(BOOL)arg2 lifetimeType:(unsigned long long)arg3 activeDateInterval:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

