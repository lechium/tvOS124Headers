/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSDictionary * receiptProperties;              //@synthesize properties=_properties - In the implementation block
-(void)_handleReply:(id)arg1 ;
-(BOOL)_wantsExpired;
-(BOOL)_wantsRevoked;
-(BOOL)_wantsVPP;
-(id)initWithReceiptProperties:(id)arg1 ;
-(NSDictionary *)receiptProperties;
-(void)_start;
@end
