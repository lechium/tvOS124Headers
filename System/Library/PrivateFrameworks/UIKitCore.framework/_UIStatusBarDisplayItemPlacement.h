/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarIdentifier, NSHashTable, NSSet, NSDictionary;

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized> {

	BOOL _enabled;
	long long _priority;
	_UIStatusBarIdentifier* _identifier;
	NSHashTable* _excludedPlacements;
	NSSet* _excludedRegionIdentifiers;
	NSHashTable* _allRequiredPlacements;
	NSHashTable* _anyRequiredPlacements;
	NSDictionary* _itemInfo;

}

@property (assign,nonatomic) long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) _UIStatusBarIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * excludedPlacements;                 //@synthesize excludedPlacements=_excludedPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSSet * excludedRegionIdentifiers;                //@synthesize excludedRegionIdentifiers=_excludedRegionIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * allRequiredPlacements;              //@synthesize allRequiredPlacements=_allRequiredPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * anyRequiredPlacements;              //@synthesize anyRequiredPlacements=_anyRequiredPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemInfo;                          //@synthesize itemInfo=_itemInfo - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
+(id)placementWithIdentifier:(id)arg1 priority:(long long)arg2 ;
+(id)spacerPlacementWithSize:(CGSize)arg1 priority:(long long)arg2 ;
-(_UIStatusBarIdentifier *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(id)requiringAllPlacements:(id)arg1 ;
-(id)requiringAnyPlacements:(id)arg1 ;
-(id)excludingPlacements:(id)arg1 ;
-(NSHashTable *)excludedPlacements;
-(NSHashTable *)allRequiredPlacements;
-(NSHashTable *)anyRequiredPlacements;
-(id)disabledPlacement;
-(id)excludingAllPlacementsInRegions:(id)arg1 ;
-(id)withItemInfo:(id)arg1 ;
-(NSSet *)excludedRegionIdentifiers;
-(NSDictionary *)itemInfo;
@end

