/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusMovementPerformerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusMovementPerformer : NSObject {

	id<_UIFocusMovementPerformerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFocusMovementPerformerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_UIFocusMovementPerformerDelegate>)arg1 ;
-(id<_UIFocusMovementPerformerDelegate>)delegate;
-(BOOL)performFocusMovement:(id)arg1 ;
-(id)_bestCandidateForFocusMovement:(id)arg1 ;
-(CGRect)_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2 ;
-(id)_findFocusCandidateWithoutLoadingScrollableContent:(id)arg1 forRequest:(id)arg2 minimumSearchArea:(CGRect)arg3 ;
-(id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg1 ;
-(void)_loadScrollableContentForFocusMovement:(id)arg1 ;
-(id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg1 ;
-(id)_bestCandidateForLinearFocusMovement:(id)arg1 ;
-(id)_bestCandidateForNonLinearFocusMovement:(id)arg1 ;
-(id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2 ;
@end

