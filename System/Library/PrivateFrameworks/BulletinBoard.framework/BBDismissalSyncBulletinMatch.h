/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BBDismissalItem;

@interface BBDismissalSyncBulletinMatch : NSObject {

	NSString* _sectionID;
	BBDismissalItem* _dismissalItem;
	NSString* _dismissalID;
	unsigned long long _feeds;

}

@property (nonatomic,copy) NSString * sectionID;                           //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) BBDismissalItem * dismissalItem;              //@synthesize dismissalItem=_dismissalItem - In the implementation block
@property (nonatomic,copy) NSString * dismissalID;                         //@synthesize dismissalID=_dismissalID - In the implementation block
@property (assign,nonatomic) unsigned long long feeds;                     //@synthesize feeds=_feeds - In the implementation block
-(unsigned long long)feeds;
-(id)initWithDismissalID:(id)arg1 andItem:(id)arg2 ;
-(id)initWithDismissalDictionaryItem:(id)arg1 ;
-(BBDismissalItem *)dismissalItem;
-(void)setDismissalItem:(BBDismissalItem *)arg1 ;
-(NSString *)dismissalID;
-(void)setFeeds:(unsigned long long)arg1 ;
-(void)setDismissalID:(NSString *)arg1 ;
-(id)description;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
@end

