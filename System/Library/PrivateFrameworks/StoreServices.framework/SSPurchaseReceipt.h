/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject {

	ISPurchaseReceipt* _purchaseReceipt;
	BOOL _isValid;

}

@property (readonly) BOOL isValid;                         //@synthesize isValid=_isValid - In the implementation block
@property (readonly) BOOL isVPPLicensed; 
@property (readonly) BOOL isRevoked; 
@property (readonly) NSDate * expirationDate; 
+(id)receiptPathForProxy:(id)arg1 ;
+(void)getReceiptPathWithCompletionBlock:(/*^block*/id)arg1 ;
+(int)vppStateFlagsWithProxy:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isVPPLicensed;
-(BOOL)receiptExpired;
-(id)initWithContainerPath:(id)arg1 ;
-(BOOL)isRevoked;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)isValid;
@end

