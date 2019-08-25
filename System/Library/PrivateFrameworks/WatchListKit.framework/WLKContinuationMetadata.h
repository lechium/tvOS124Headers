/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WLKPlayable, WLKBasicContentMetadata, NSURL, NSString, NSNumber, NSArray;

@interface WLKContinuationMetadata : NSObject {

	BOOL _isRental;
	BOOL _isPurchase;
	WLKPlayable* _playable;
	WLKBasicContentMetadata* _movieOrShowContent;
	NSURL* _contentTVAppDeeplinkURL;
	long long _contextEnum;
	NSString* _context;
	NSString* _localizedContext;
	NSString* _deleteID;
	NSNumber* _siriActionsExpirationEpochMillis;
	NSArray* _siriActionsCategories;

}

@property (nonatomic,readonly) WLKPlayable * playable;                                        //@synthesize playable=_playable - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * movieOrShowContent;                  //@synthesize movieOrShowContent=_movieOrShowContent - In the implementation block
@property (nonatomic,readonly) NSURL * contentTVAppDeeplinkURL;                               //@synthesize contentTVAppDeeplinkURL=_contentTVAppDeeplinkURL - In the implementation block
@property (nonatomic,readonly) long long contextEnum;                                         //@synthesize contextEnum=_contextEnum - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedContext;                              //@synthesize localizedContext=_localizedContext - In the implementation block
@property (nonatomic,readonly) BOOL isRental;                                                 //@synthesize isRental=_isRental - In the implementation block
@property (nonatomic,readonly) BOOL isPurchase;                                               //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteID;                                      //@synthesize deleteID=_deleteID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * siriActionsExpirationEpochMillis;              //@synthesize siriActionsExpirationEpochMillis=_siriActionsExpirationEpochMillis - In the implementation block
@property (nonatomic,copy,readonly) NSArray * siriActionsCategories;                          //@synthesize siriActionsCategories=_siriActionsCategories - In the implementation block
+(long long)_contextForString:(id)arg1 ;
-(BOOL)isPurchase;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)isRental;
-(WLKBasicContentMetadata *)movieOrShowContent;
-(NSURL *)contentTVAppDeeplinkURL;
-(long long)contextEnum;
-(NSString *)localizedContext;
-(NSNumber *)siriActionsExpirationEpochMillis;
-(NSArray *)siriActionsCategories;
-(WLKPlayable *)playable;
-(id)init;
-(id)description;
-(NSString *)context;
-(NSString *)deleteID;
@end

