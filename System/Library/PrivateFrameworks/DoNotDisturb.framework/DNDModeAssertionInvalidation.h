/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDModeAssertion;

@interface DNDModeAssertionInvalidation : NSObject <NSCopying, NSSecureCoding> {

	DNDModeAssertion* _assertion;
	unsigned long long _reason;

}

@property (nonatomic,copy,readonly) DNDModeAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                      //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(DNDModeAssertion *)assertion;
-(id)initWithAssertion:(id)arg1 reason:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)reason;
@end

