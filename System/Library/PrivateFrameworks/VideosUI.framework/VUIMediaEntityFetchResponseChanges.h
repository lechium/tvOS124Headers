/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject {

	VUICollectionChangeSet* _mediaEntitiesChangeSet;
	VUICollectionChangeSet* _groupingChangeSet;

}

@property (nonatomic,retain) VUICollectionChangeSet * mediaEntitiesChangeSet;              //@synthesize mediaEntitiesChangeSet=_mediaEntitiesChangeSet - In the implementation block
@property (nonatomic,retain) VUICollectionChangeSet * groupingChangeSet;                   //@synthesize groupingChangeSet=_groupingChangeSet - In the implementation block
-(id)init;
-(id)description;
-(id)initWithMediaEntitiesChangeSet:(id)arg1 ;
-(void)setGroupingChangeSet:(VUICollectionChangeSet *)arg1 ;
-(VUICollectionChangeSet *)mediaEntitiesChangeSet;
-(VUICollectionChangeSet *)groupingChangeSet;
-(void)setMediaEntitiesChangeSet:(VUICollectionChangeSet *)arg1 ;
@end
