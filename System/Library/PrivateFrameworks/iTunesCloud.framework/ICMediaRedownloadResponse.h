/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICStoreResponseProtocol.h>

@class NSError, ICStoreDialogResponse, NSDate, ICURLBag, NSDictionary, NSString, NSArray, NSData;

@interface ICMediaRedownloadResponse : NSObject <ICStoreResponseProtocol> {

	NSDate* _requestDate;
	ICURLBag* _urlBag;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) BOOL authorized; 
@property (nonatomic,readonly) BOOL shouldCancelPurchaseBatch; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) unsigned downloadQueueItemCount; 
@property (nonatomic,copy,readonly) NSString * jingleAction; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSError * serverError; 
-(NSData *)subscriptionKeyBagData;
-(BOOL)shouldCancelPurchaseBatch;
-(NSDictionary *)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3 ;
-(BOOL)authorized;
-(unsigned)downloadQueueItemCount;
-(NSString *)jingleAction;
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;
-(NSArray *)items;
-(long long)status;
@end
