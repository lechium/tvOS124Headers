/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIdentity;
	NSString* _commonName;
	NSData* _data;

}

@property (nonatomic,copy,readonly) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL isIdentity;                         //@synthesize isIdentity=_isIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)commonName;
-(BOOL)isIdentity;
-(id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
@end

