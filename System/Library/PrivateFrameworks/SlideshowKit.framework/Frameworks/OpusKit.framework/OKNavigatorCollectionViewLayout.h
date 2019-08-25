/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OKNavigatorCollectionViewController, NSIndexPath, UIPanGestureRecognizer, NSString;

@interface OKNavigatorCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate> {

	OKNavigatorCollectionViewController* _collectionViewController;
	unsigned long long _transitionStyle;
	NSIndexPath* _sourceItemIndexPath;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGRect _oldBounds;

}

@property (assign,nonatomic) OKNavigatorCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) unsigned long long transitionStyle;                                          //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (nonatomic,retain) NSIndexPath * sourceItemIndexPath;                                           //@synthesize sourceItemIndexPath=_sourceItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSourceItemIndexPath:(NSIndexPath *)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(NSIndexPath *)sourceItemIndexPath;
-(id)itemClosestToCenter;
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setTransitionStyle:(unsigned long long)arg1 ;
-(unsigned long long)transitionStyle;
-(OKNavigatorCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(OKNavigatorCollectionViewController *)arg1 ;
@end

