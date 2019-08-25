/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface FBOcclusionsStack : NSObject {

	NSCountedSet* _levels;
	NSMutableDictionary* _levelToCompositeOcclusions;
	NSMutableDictionary* _keyToEntry;
	NSMutableArray* _orderedEntries;
	NSMutableSet* _dirtyKeys;

}
-(BOOL)isDirty;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3 ;
-(void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3 ;
-(void)enumerateKeysByLevelWithBlock:(/*^block*/id)arg1 ;
-(id)dirtyKeys;
-(id)occlusionsAppliedToKey:(id)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(void)removeKey:(id)arg1 ;
@end

