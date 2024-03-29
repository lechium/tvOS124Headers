/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>

@class UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, TIKeyboardCandidateResultSet, NSString;

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate> {

	unsigned long long _selectedSortIndex;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	UIKeyboardCandidateSortControl* _scrollViewSortControl;
	SCD_Struct_UI58 _visualStyling;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidateResultSet; 
@property (assign,nonatomic) unsigned long long selectedSortIndex;                                                    //@synthesize selectedSortIndex=_selectedSortIndex - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateSortControl * scrollViewSortControl;                                  //@synthesize scrollViewSortControl=_scrollViewSortControl - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI58 visualStyling;                                                           //@synthesize visualStyling=_visualStyling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)displayLayer:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
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
-(UIKeyboardCandidateGridCollectionViewController *)collectionViewController;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setCollectionViewController:(UIKeyboardCandidateGridCollectionViewController *)arg1 ;
-(unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(id)headerViewForCandidateSet:(id)arg1 ;
-(SCD_Struct_UI58)visualStyling;
-(void)setVisualStyling:(SCD_Struct_UI58)arg1 ;
-(BOOL)isTenKey;
-(void)updateCollectionViewController;
-(void)clearCollectionViewController;
-(UIKeyboardCandidateSortControl *)scrollViewSortControl;
-(void)updateCollectionViewController:(BOOL)arg1 ;
-(void)setSelectedSortIndex:(unsigned long long)arg1 ;
-(void)setScrollViewSortControl:(UIKeyboardCandidateSortControl *)arg1 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned long long)arg2 ;
@end

