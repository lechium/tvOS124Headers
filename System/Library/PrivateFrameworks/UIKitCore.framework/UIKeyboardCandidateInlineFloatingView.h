/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate;
@class UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, TIKeyboardCandidateResultSet, NSString;

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	BOOL _reducedWidth;
	int _position;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	UIKeyboardCandidateSortControl* _sortSelectionBar;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSString* _inlineText;
	double _maxX;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	CGRect _inlineRect;
	CGRect _previousCollapsedFrame;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                               //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                                       //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) CGRect inlineRect;                                                                         //@synthesize inlineRect=_inlineRect - In the implementation block
@property (assign,nonatomic) double maxX;                                                                               //@synthesize maxX=_maxX - In the implementation block
@property (getter=isReducedWidth,nonatomic,readonly) BOOL reducedWidth;                                                 //@synthesize reducedWidth=_reducedWidth - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardCandidateListDelegate> candidateListDelegate;                          //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (assign,nonatomic) int position;                                                                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGRect previousCollapsedFrame;                                                             //@synthesize previousCollapsedFrame=_previousCollapsedFrame - In the implementation block
@property (nonatomic,readonly) UIKeyboardCandidateSortControl * sortSelectionBar;                                       //@synthesize sortSelectionBar=_sortSelectionBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)size;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layout;
-(void)didMoveToWindow;
-(id)_inheritedRenderConfig;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(id)candidates;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(NSString *)inlineText;
-(void)setInlineText:(NSString *)arg1 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCandidates;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6 ;
-(BOOL)handleNumberKey:(unsigned long long)arg1 ;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1 ;
-(void)candidatesDidChange;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(BOOL)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(void)padInlineFloatingViewExpand:(id)arg1 ;
-(id)activeCandidateList;
-(BOOL)isReducedWidth;
-(CGRect)inlineRect;
-(void)updateLayerBorderWidth;
-(CGRect)convertFromInputDelegateRect:(CGRect)arg1 ;
-(BOOL)isAcceptableFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(CGRect)adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(CGRect)arg2 ;
-(CGRect)adjustedFrameFromDesiredFrame:(CGRect)arg1 textHeight:(double)arg2 ;
-(double)maxX;
-(void)setInlineRect:(CGRect)arg1 ;
-(void)setMaxX:(double)arg1 ;
-(void)adjustFrameForInlineText:(id)arg1 inlineRect:(CGRect)arg2 maxX:(double)arg3 ;
-(UIKeyboardCandidateSortControl *)sortSelectionBar;
-(void)expand;
-(void)sortSelectionBarAction;
-(CGRect)previousCollapsedFrame;
-(void)setPreviousCollapsedFrame:(CGRect)arg1 ;
@end

