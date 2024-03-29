/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {

	BOOL _ignoreCache;
	NSString* _type;

}

@property (nonatomic,copy) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL ignoreCache;              //@synthesize ignoreCache=_ignoreCache - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(BOOL)ignoreCache;
-(void)setIgnoreCache:(BOOL)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)initWithType:(id)arg1 ;
@end

