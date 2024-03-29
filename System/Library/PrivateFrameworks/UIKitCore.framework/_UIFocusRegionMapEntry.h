/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, UIColor;

@interface _UIFocusRegionMapEntry : NSObject <NSCopying> {

	_UIFocusRegionMapEntry* _originalEntry;
	_UIFocusRegionMapEntry* _parentEntry;
	NSMutableSet* _occludingFrames;
	CGRect _frame;
	CGRect _originalRegionFrame;

}

@property (nonatomic,copy,readonly) UIColor * visualRepresentationColor; 
@property (nonatomic,readonly) long long visualRepresentationPatternType; 
@property (assign,nonatomic) CGRect frame;                                             //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect originalRegionFrame;                               //@synthesize originalRegionFrame=_originalRegionFrame - In the implementation block
@property (nonatomic,retain) _UIFocusRegionMapEntry * originalEntry;                   //@synthesize originalEntry=_originalEntry - In the implementation block
@property (nonatomic,retain) _UIFocusRegionMapEntry * parentEntry;                     //@synthesize parentEntry=_parentEntry - In the implementation block
@property (nonatomic,retain) NSMutableSet * occludingFrames;                           //@synthesize occludingFrames=_occludingFrames - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 originalRegionFrame:(CGRect)arg2 ;
-(id)_mapEntriesByOccludingWithFrame:(CGRect)arg1 ;
-(CGRect)originalRegionFrame;
-(id)sliceWithFrame:(CGRect)arg1 ;
-(_UIFocusRegionMapEntry *)originalEntry;
-(NSMutableSet *)occludingFrames;
-(void)_wasOccludedByFrame:(CGRect)arg1 ;
-(void)setParentEntry:(_UIFocusRegionMapEntry *)arg1 ;
-(void)setOccludingFrames:(NSMutableSet *)arg1 ;
-(_UIFocusRegionMapEntry *)parentEntry;
-(id)_uniqueElementFromArray:(id)arg1 forKey:(id)arg2 ;
-(UIColor *)visualRepresentationColor;
-(long long)visualRepresentationPatternType;
-(void)setOriginalRegionFrame:(CGRect)arg1 ;
-(void)setOriginalEntry:(_UIFocusRegionMapEntry *)arg1 ;
@end

