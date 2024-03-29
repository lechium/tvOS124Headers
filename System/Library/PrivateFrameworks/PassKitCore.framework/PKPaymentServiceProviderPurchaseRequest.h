/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest {

	NSString* _purchaseIdentifier;

}

@property (nonatomic,copy) NSString * purchaseIdentifier;              //@synthesize purchaseIdentifier=_purchaseIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPurchaseIdentifier:(id)arg1 ;
-(NSString *)purchaseIdentifier;
-(void)setPurchaseIdentifier:(NSString *)arg1 ;
@end

