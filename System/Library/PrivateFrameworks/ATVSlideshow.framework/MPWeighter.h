/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableIndexSet;

@interface MPWeighter : NSObject {

	long long _totalWeight;
	NSMutableArray* _weights;
	NSMutableArray* _items;
	NSMutableArray* _constraints;
	NSMutableArray* _usageCount;
	NSMutableIndexSet* _ignoreIndices;
	BOOL _evenlyPickByID;
	BOOL _ignoreBreaks;

}
-(id)allItems;
-(void)clearAllItems;
-(void)addItem:(id)arg1 withWeight:(long long)arg2 andContraints:(id)arg3 ;
-(long long)getRandomIndex;
-(void)addIndexToIgnore:(long long)arg1 ;
-(void)ignoreIndices:(id)arg1 ;
-(id)imageCounts;
-(void)setEvenlyPickByID:(BOOL)arg1 ;
-(void)ignoreIndex:(long long)arg1 ;
-(id)constraintsForItem:(id)arg1 ;
-(void)clearIgnoreIndices;
-(long long)getRandomIndexMeetingContraints:(id)arg1 ;
-(long long)getRandomIndexWithNoBreaksForImageCount:(long long)arg1 ;
-(id)allConstraints;
-(id)ignoredIndices;
-(long long)getRandomIndexInSubset:(id)arg1 ;
-(long long)numberOfItemsWithImageCount:(long long)arg1 ;
-(BOOL)itemAtIndex:(long long)arg1 meetsContraints:(id)arg2 ;
-(id)indicesMeetingConstraints:(id)arg1 ;
-(void)increaseUsageCountOfObjectAtIndex:(long long)arg1 ;
-(id)indicesEqualingConstraints:(id)arg1 ;
-(void)setIgnoreBreaks:(BOOL)arg1 ;
-(id)getRandomItemMeetingNumberOfFaceLandscapes:(long long)arg1 facePortraits:(long long)arg2 imageLandscapes:(long long)arg3 imagePortraits:(long long)arg4 vBreaks:(long long)arg5 hBreaks:(long long)arg6 movies:(long long)arg7 fitsInExtraWide:(long long)arg8 aspectRatios:(id)arg9 previousTags:(id)arg10 ;
-(long long)getRandomIndexMeetingContraints:(id)arg1 oneMatch:(BOOL)arg2 ;
-(id)allUsageCounts;
-(BOOL)itemAtIndex:(long long)arg1 meetsContraints:(id)arg2 oneMatch:(BOOL)arg3 ;
-(long long)getRandomIndexInSubset:(id)arg1 withPreviousTags:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)count;
@end

