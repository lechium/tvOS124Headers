/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	NSSet* _fees;

}

@property (nonatomic,retain) NSSet * fees;              //@synthesize fees=_fees - In the implementation block
+(id)_feesSetFromJsonString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)itemType;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNames;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(NSSet *)fees;
-(id)initWithFeeItems:(id)arg1 ;
-(BOOL)isEqualToFees:(id)arg1 ;
-(void)setFees:(NSSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
