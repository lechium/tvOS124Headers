/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentRewrapResponseBase : PKPaymentWebServiceResponse {

	NSData* _rewrappedPaymentData;

}

@property (nonatomic,copy) NSData * rewrappedPaymentData;              //@synthesize rewrappedPaymentData=_rewrappedPaymentData - In the implementation block
-(NSData *)rewrappedPaymentData;
-(void)setRewrappedPaymentData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
@end
