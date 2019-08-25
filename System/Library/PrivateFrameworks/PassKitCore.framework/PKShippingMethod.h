/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPaymentSummaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _detail;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * detail;                  //@synthesize detail=_detail - In the implementation block
+(id)shippingMethodWithProtobuf:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)version;
-(NSString *)detail;
-(id)protobuf;
-(BOOL)isEqualToShippingMethod:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)formattedString;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

