/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion, NSMutableArray;

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {

	_UIStatusBarDisplayItemPlacement* _placement;
	_UIStatusBarRegion* _region;
	NSMutableArray* _relations;

}

@property (nonatomic,retain) NSMutableArray * relations;                                          //@synthesize relations=_relations - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * placement;                      //@synthesize placement=_placement - In the implementation block
@property (nonatomic,__weak,readonly) _UIStatusBarRegion * region;                                //@synthesize region=_region - In the implementation block
@property (getter=areRelationsFulfilled,nonatomic,readonly) BOOL relationsFulfilled; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long priority; 
+(id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2 ;
-(id)description;
-(BOOL)isEnabled;
-(long long)priority;
-(_UIStatusBarRegion *)region;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(BOOL)areRelationsFulfilled;
-(NSMutableArray *)relations;
-(void)setRelations:(NSMutableArray *)arg1 ;
@end
