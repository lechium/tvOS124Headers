/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface TUHandle : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _value;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;                                              //@synthesize value=_value - In the implementation block
+(id)handleWithDictionaryRepresentation:(id)arg1 ;
+(id)handleWithPersonHandle:(id)arg1 ;
+(id)handleWithDestinationID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)stringForType:(long long)arg1 ;
-(id)personHandle;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)canonicalHandleForISOCountryCode:(id)arg1 ;
-(BOOL)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2 ;
-(id)initWithDestinationID:(id)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

