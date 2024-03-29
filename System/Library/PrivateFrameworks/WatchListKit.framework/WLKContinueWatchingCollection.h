/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WLKContinueWatchingCollection : NSObject {

	NSString* _collectionID;
	NSString* _title;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(NSString *)collectionID;
-(id)init;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithDictionary:(id)arg1 ;
@end

