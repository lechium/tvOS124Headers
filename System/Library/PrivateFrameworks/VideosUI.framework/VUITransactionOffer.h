/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString, VUIActionItunesExtras;

@interface VUITransactionOffer : NSObject {

	NSDictionary* _transactionOfferDict;
	NSArray* _videosPlayables;
	NSDictionary* _offer;

}

@property (nonatomic,readonly) BOOL playWhenDone; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * videosPlayables; 
@property (nonatomic,copy,readonly) NSDictionary * offer;                              //@synthesize offer=_offer - In the implementation block
@property (nonatomic,copy,readonly) VUIActionItunesExtras * extrasAction; 
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)buyParams;
-(NSArray *)videosPlayables;
-(NSDictionary *)offer;
-(BOOL)playWhenDone;
-(VUIActionItunesExtras *)extrasAction;
@end

