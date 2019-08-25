/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding> {

	long long _productPlatform;
	long long _productClass;
	long long _productVariant;
	HMFSoftwareVersion* _softwareVersion;

}

@property (readonly) long long productPlatform;                                   //@synthesize productPlatform=_productPlatform - In the implementation block
@property (readonly) long long productClass;                                      //@synthesize productClass=_productClass - In the implementation block
@property (readonly) long long productVariant;                                    //@synthesize productVariant=_productVariant - In the implementation block
@property (nonatomic,readonly) HMFSoftwareVersion * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
+(id)decodeSoftwareVersionWithCoder:(id)arg1 ;
+(void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2 ;
+(id)productInfo;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4 ;
-(long long)productPlatform;
-(long long)productClass;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMFSoftwareVersion *)softwareVersion;
-(long long)productVariant;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)shortDescription;
@end

