/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSSet, NSMutableArray, NSMutableDictionary;

@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout {

	CGSize _contentSize;
	BOOL _expanded;
	BOOL _needsPaddingForIndexScrubber;
	BOOL _supportsNumberKeySelection;
	BOOL _padInlineFloatingCanExpand;
	BOOL _hasExtensionCandidates;
	BOOL _hasSecondaryCandidates;
	BOOL _forceJustifiedAlignment;
	BOOL _needsLayout;
	int _candidatesVisualStyle;
	NSArray* _candidateGroups;
	unsigned long long _columnsCount;
	SCD_Struct_UI58 _visualStyling;
	double _headerViewHeight;
	NSSet* _emphasizedCandidates;
	NSMutableArray* _cellAttributes;
	NSMutableArray* _dummyAttributes;
	NSMutableDictionary* _supplementaryAttributes;

}

@property (assign,nonatomic) BOOL needsLayout;                                           //@synthesize needsLayout=_needsLayout - In the implementation block
@property (nonatomic,retain) NSMutableArray * cellAttributes;                            //@synthesize cellAttributes=_cellAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * dummyAttributes;                           //@synthesize dummyAttributes=_dummyAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supplementaryAttributes;              //@synthesize supplementaryAttributes=_supplementaryAttributes - In the implementation block
@property (nonatomic,readonly) CGSize rowSize; 
@property (assign,nonatomic) BOOL padInlineFloatingCanExpand;                            //@synthesize padInlineFloatingCanExpand=_padInlineFloatingCanExpand - In the implementation block
@property (nonatomic,retain) NSArray * candidateGroups;                                  //@synthesize candidateGroups=_candidateGroups - In the implementation block
@property (assign,nonatomic) unsigned long long columnsCount;                            //@synthesize columnsCount=_columnsCount - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI58 visualStyling;                              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                  //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                              //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL needsPaddingForIndexScrubber;                          //@synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber - In the implementation block
@property (assign,nonatomic) double headerViewHeight;                                    //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) BOOL supportsNumberKeySelection;                            //@synthesize supportsNumberKeySelection=_supportsNumberKeySelection - In the implementation block
@property (nonatomic,readonly) double groupBarWidth; 
@property (assign,nonatomic) BOOL hasExtensionCandidates;                                //@synthesize hasExtensionCandidates=_hasExtensionCandidates - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryCandidates;                                //@synthesize hasSecondaryCandidates=_hasSecondaryCandidates - In the implementation block
@property (nonatomic,retain) NSSet * emphasizedCandidates;                               //@synthesize emphasizedCandidates=_emphasizedCandidates - In the implementation block
@property (assign,nonatomic) BOOL forceJustifiedAlignment;                               //@synthesize forceJustifiedAlignment=_forceJustifiedAlignment - In the implementation block
+(id)layout;
+(Class)layoutAttributesClass;
+(void)deemphasizeLastItemIfNeeded:(id)arg1 ;
-(id)init;
-(BOOL)needsLayout;
-(unsigned long long)numberOfSections;
-(void)invalidateLayout;
-(unsigned long long)numberOfItemsInSection:(long long)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(CGSize)rowSize;
-(int)candidatesVisualStyle;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(SCD_Struct_UI58)visualStyling;
-(void)setVisualStyling:(SCD_Struct_UI58)arg1 ;
-(BOOL)needsPaddingForIndexScrubber;
-(void)setNeedsPaddingForIndexScrubber:(BOOL)arg1 ;
-(BOOL)hasSecondaryCandidates;
-(void)setEmphasizedCandidates:(NSSet *)arg1 ;
-(NSArray *)candidateGroups;
-(id)layoutAttributesForCandidateIndexPath:(id)arg1 ;
-(BOOL)supportsNumberKeySelection;
-(void)setSupportsNumberKeySelection:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setColumnsCount:(unsigned long long)arg1 ;
-(void)setCandidateGroups:(NSArray *)arg1 ;
-(void)setHeaderViewHeight:(double)arg1 ;
-(void)setHasSecondaryCandidates:(BOOL)arg1 ;
-(double)groupBarWidth;
-(BOOL)expanded;
-(NSSet *)emphasizedCandidates;
-(id)nextCandidateIndexPathFromIndexPath:(id)arg1 ;
-(BOOL)padInlineFloatingCanExpand;
-(id)previousCandidateIndexPathFromIndexPath:(id)arg1 ;
-(void)setForceJustifiedAlignment:(BOOL)arg1 ;
-(void)setHasExtensionCandidates:(BOOL)arg1 ;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(NSMutableArray *)cellAttributes;
-(NSMutableArray *)dummyAttributes;
-(NSMutableDictionary *)supplementaryAttributes;
-(void)getGroupBarWidth:(double*)arg1 headerAttributes:(id*)arg2 ;
-(BOOL)shouldShowGroupHeaderForGroup:(id)arg1 ;
-(id)attributesWithFrame:(CGRect)arg1 ;
-(unsigned long long)columnsCount;
-(double)headerViewHeight;
-(void)finishLayoutForRowWithAttributes:(id)arg1 minimumCellWidth:(double)arg2 remainingWidth:(double)arg3 rowOrigin:(CGPoint)arg4 isFirstRow:(BOOL)arg5 isLastRow:(BOOL)arg6 zIndex:(long long)arg7 ;
-(void)setPadInlineFloatingCanExpand:(BOOL)arg1 ;
-(BOOL)hasExtensionCandidates;
-(BOOL)forceJustifiedAlignment;
-(unsigned long long)numberOfCandidateSections;
-(void)setCellAttributes:(NSMutableArray *)arg1 ;
-(void)setDummyAttributes:(NSMutableArray *)arg1 ;
-(void)setSupplementaryAttributes:(NSMutableDictionary *)arg1 ;
@end

