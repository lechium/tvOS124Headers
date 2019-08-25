/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ICUserIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSString* _deviceIdentifier;
	BOOL _allowsDelegation;
	BOOL _allowsAccountEstablishment;
	long long _type;
	unsigned long long _creationTime;
	NSNumber* _DSID;

}

@property (nonatomic,readonly) unsigned long long creationTime;               //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,readonly) BOOL allowsDelegation;                         //@synthesize allowsDelegation=_allowsDelegation - In the implementation block
@property (nonatomic,readonly) BOOL allowsAccountEstablishment;               //@synthesize allowsAccountEstablishment=_allowsAccountEstablishment - In the implementation block
@property (nonatomic,readonly) long long type;                                //@synthesize type=_type - In the implementation block
+(id)nullIdentity;
+(id)autoupdatingActiveLockerAccount;
+(id)carrierBundleWithDeviceIdentifier:(id)arg1 ;
+(id)activeLockerAccount;
+(id)specificAccountWithDSID:(id)arg1 ;
+(id)autoupdatingActiveAccount;
+(id)activeAccount;
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(unsigned long long)creationTime;
-(id)identityAllowingEstablishment:(BOOL)arg1 ;
-(BOOL)allowsDelegation;
-(BOOL)allowsAccountEstablishment;
-(NSNumber *)DSID;
-(id)identityAllowingDelegation:(BOOL)arg1 ;
-(BOOL)isEqualToIdentity:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
@end
