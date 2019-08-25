/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject <NSSecureCoding, NSCopying> {

	PKOSVersionRequirement* _minimum;
	PKOSVersionRequirement* _maximum;

}

@property (nonatomic,readonly) PKOSVersionRequirement * minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) PKOSVersionRequirement * maximum;              //@synthesize maximum=_maximum - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2 ;
-(id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2 ;
-(PKOSVersionRequirement *)minimum;
-(PKOSVersionRequirement *)maximum;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end
