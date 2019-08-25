/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class SSDownloadMetadata, SSPurchaseResponse;

@interface SSImportDownloadToIPodLibraryRequest : SSRequest {

	SSDownloadMetadata* _downloadMetadata;
	SSPurchaseResponse* _purchaseResponse;

}

@property (nonatomic,readonly) SSDownloadMetadata * downloadMetadata;              //@synthesize downloadMetadata=_downloadMetadata - In the implementation block
@property (nonatomic,readonly) SSPurchaseResponse * purchaseResponse;              //@synthesize purchaseResponse=_purchaseResponse - In the implementation block
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSDownloadMetadata *)downloadMetadata;
-(id)initWithPurchase:(id)arg1 ;
-(SSPurchaseResponse *)purchaseResponse;
-(id)initWithDownloadMetadata:(id)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end

