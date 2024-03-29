/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHKStoreVideoCredits, NSError, NSString, NSOperation;

@interface TVHKStoreVideoCreditsOperation : TVHSAsynchronousOperation {

	unsigned long long _storeID;
	unsigned long long _storefrontID;
	TVHKStoreVideoCredits* _videoCredits;
	NSError* _error;
	NSString* _title;
	unsigned long long _mediaCategoryType;
	NSOperation* _productOperation;

}

@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;              //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (nonatomic,retain) NSOperation * productOperation;                    //@synthesize productOperation=_productOperation - In the implementation block
@property (nonatomic,retain) TVHKStoreVideoCredits * videoCredits;              //@synthesize videoCredits=_videoCredits - In the implementation block
@property (nonatomic,retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                        //@synthesize storeID=_storeID - In the implementation block
@property (assign,nonatomic) unsigned long long storefrontID;                   //@synthesize storefrontID=_storefrontID - In the implementation block
+(id)_contributorsFromStoreCredits:(id)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(unsigned long long)storeID;
-(void)setStoreID:(unsigned long long)arg1 ;
-(void)setStorefrontID:(unsigned long long)arg1 ;
-(unsigned long long)storefrontID;
-(TVHKStoreVideoCredits *)videoCredits;
-(id)initWithItemTitle:(id)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(void)setProductOperation:(NSOperation *)arg1 ;
-(NSOperation *)productOperation;
-(void)setVideoCredits:(TVHKStoreVideoCredits *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)cancel;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
-(unsigned long long)mediaCategoryType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
@end

