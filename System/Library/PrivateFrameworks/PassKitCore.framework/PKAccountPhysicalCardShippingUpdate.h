/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, NSDate, NSDateComponents, NSURL;

@interface PKAccountPhysicalCardShippingUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _physicalCardIdentifier;
	long long _shippingStatus;
	NSString* _localizedDeliveryExceptionReason;
	NSString* _trackingNumber;
	NSString* _shippingCompany;
	NSDate* _timestamp;
	NSDateComponents* _estimatedDeliveryDate;

}

@property (nonatomic,copy) NSString * physicalCardIdentifier;                               //@synthesize physicalCardIdentifier=_physicalCardIdentifier - In the implementation block
@property (assign,nonatomic) long long shippingStatus;                                      //@synthesize shippingStatus=_shippingStatus - In the implementation block
@property (nonatomic,copy) NSString * localizedDeliveryExceptionReason;                     //@synthesize localizedDeliveryExceptionReason=_localizedDeliveryExceptionReason - In the implementation block
@property (nonatomic,copy) NSString * trackingNumber;                                       //@synthesize trackingNumber=_trackingNumber - In the implementation block
@property (nonatomic,copy) NSString * shippingCompany;                                      //@synthesize shippingCompany=_shippingCompany - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDateComponents * estimatedDeliveryDate;                      //@synthesize estimatedDeliveryDate=_estimatedDeliveryDate - In the implementation block
@property (nonatomic,readonly) NSURL * shipmentTrackingURL; 
@property (nonatomic,copy,readonly) NSString * formattedEstimatedDeliveryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recordNamePrefix;
+(id)recordType;
+(BOOL)supportsSecureCoding;
-(void)encodeWithRecord:(id)arg1 ;
-(NSString *)physicalCardIdentifier;
-(void)setPhysicalCardIdentifier:(NSString *)arg1 ;
-(NSURL *)shipmentTrackingURL;
-(NSString *)trackingNumber;
-(void)setTrackingNumber:(NSString *)arg1 ;
-(NSString *)shippingCompany;
-(void)setShippingCompany:(NSString *)arg1 ;
-(BOOL)isEqualToPhysicalCardShippingUpdate:(id)arg1 ;
-(NSString *)formattedEstimatedDeliveryDate;
-(long long)shippingStatus;
-(void)setShippingStatus:(long long)arg1 ;
-(NSString *)localizedDeliveryExceptionReason;
-(void)setLocalizedDeliveryExceptionReason:(NSString *)arg1 ;
-(NSDateComponents *)estimatedDeliveryDate;
-(void)setEstimatedDeliveryDate:(NSDateComponents *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

