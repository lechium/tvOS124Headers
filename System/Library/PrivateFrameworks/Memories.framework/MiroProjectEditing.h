/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet, NSArray;


@protocol MiroProjectEditing <NSObject>
@property (nonatomic,readonly) int projectFrameRate; 
@property (nonatomic,readonly) NSString * memoryLocalizedTitle; 
@property (nonatomic,readonly) NSSet * usedAssetIDs; 
@property (nonatomic,readonly) NSArray * assetsFilteredForSuggestions; 
@required
-(id)indexesForClipsOfAssetID:(id)arg1;
-(void)addAssets:(id)arg1 removeAssets:(id)arg2;
-(BOOL)shouldTrimClip:(id)arg1 startTime:(float)arg2 endTime:(float)arg3;
-(BOOL)trimClip:(id)arg1 startTime:(float)arg2 endTime:(float)arg3;
-(BOOL)shouldRemoveClip:(id)arg1;
-(void)removeClip:(id)arg1;
-(void)moveClipAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
-(int)projectFrameRate;
-(NSString *)memoryLocalizedTitle;
-(NSSet *)usedAssetIDs;
-(NSArray *)assetsFilteredForSuggestions;

@end
