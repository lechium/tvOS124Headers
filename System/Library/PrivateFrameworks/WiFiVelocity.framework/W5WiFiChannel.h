/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface W5WiFiChannel : NSObject <NSCopying, NSSecureCoding> {

	int _flags;
	long long _channel;

}

@property (nonatomic,readonly) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) int flags;                      //@synthesize flags=_flags - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToChannel:(id)arg1 ;
-(long long)channel;
-(int)flags;
-(id)initWithChannel:(long long)arg1 flags:(int)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

