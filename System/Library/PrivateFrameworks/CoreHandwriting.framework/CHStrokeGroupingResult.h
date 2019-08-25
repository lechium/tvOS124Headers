/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying> {

	NSArray* _strokeGroupsSortedTopBottomLeftRight;
	NSArray* _strokeGroupsSortedTopBottomLeftRightRespectingWritingOrientation;
	NSSet* _textStrokeGroups;
	NSSet* _strokeGroups;
	NSSet* _createdStrokeGroups;
	NSSet* _deletedStrokeGroups;

}

@property (nonatomic,copy,readonly) NSSet * strokeGroups;                                              //@synthesize strokeGroups=_strokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * createdStrokeGroups;                                       //@synthesize createdStrokeGroups=_createdStrokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * deletedStrokeGroups;                                       //@synthesize deletedStrokeGroups=_deletedStrokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupsSortedTopBottomLeftRight; 
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupsSortedByWritingOrientation; 
@property (nonatomic,copy,readonly) NSSet * textStrokeGroups; 
-(NSSet *)strokeGroups;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 ;
-(NSArray *)textStrokeGroupsSortedByWritingOrientation;
-(NSSet *)createdStrokeGroups;
-(NSSet *)deletedStrokeGroups;
-(NSSet *)textStrokeGroups;
-(NSArray *)textStrokeGroupsSortedTopBottomLeftRight;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

