/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding> {

	HMFKey* _deviceIRK;

}

@property (copy,readonly) HMFKey * deviceIRK;              //@synthesize deviceIRK=_deviceIRK - In the implementation block
+(id)logCategory;
+(id)identityWithRPIdentity:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)logIdentifier;
-(BOOL)isEqualToRPIndentity:(id)arg1 ;
-(HMFKey *)deviceIRK;
-(id)initWithDeviceIRK:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)shortDescription;
@end

