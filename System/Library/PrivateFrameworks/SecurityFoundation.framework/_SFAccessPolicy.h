/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_SF7 _accessibility;
	long long _sharingPolicy;
	NSString* _accessGroup;
	NSArray* _accessControlList;

}

@property (nonatomic,readonly) const CFDictionaryRef secAccessibilityAttributes; 
@property (nonatomic,copy) NSArray * accessControlList;                                       //@synthesize accessControlList=_accessControlList - In the implementation block
@property (assign,nonatomic) SCD_Struct_SF9 accessibility;                                    //@synthesize accessibility=_accessibility - In the implementation block
@property (assign,nonatomic) long long sharingPolicy;                                         //@synthesize sharingPolicy=_sharingPolicy - In the implementation block
@property (nonatomic,copy) NSString * accessGroup;                                            //@synthesize accessGroup=_accessGroup - In the implementation block
+(id)accessPolicyWithSecAccessibility:(CFStringRef)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setAccessControlList:(NSArray *)arg1 ;
-(long long)sharingPolicy;
-(SCD_Struct_SF9)accessibility;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(id)initWithAccessibility:(SCD_Struct_SF9)arg1 sharingPolicy:(long long)arg2 ;
-(const CFDictionaryRef)secAccessibilityAttributes;
-(void)setSharingPolicy:(long long)arg1 ;
-(NSArray *)accessControlList;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAccessibility:(SCD_Struct_SF9)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

