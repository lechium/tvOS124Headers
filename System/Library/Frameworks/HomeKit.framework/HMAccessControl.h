/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, HMUser;

@interface HMAccessControl : NSObject <NSSecureCoding> {

	HMFUnfairLock* _lock;
	HMUser* _user;
	unsigned long long _cachedHash;

}

@property (nonatomic,readonly) unsigned long long cachedHash;              //@synthesize cachedHash=_cachedHash - In the implementation block
@property (__weak) HMUser * user;                                          //@synthesize user=_user - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMUser *)user;
-(void)setUser:(HMUser *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(unsigned long long)cachedHash;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

