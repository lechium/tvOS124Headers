/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUISnippetView.h>
#import <SiriTVUI/SiriTVUITemplatedContainerViewDelegate.h>
#import <SiriTVUI/SiriTVUIGroupView.h>

@protocol SiriTVUITemplatedViewDelegate;
@class SiriTVUITemplatedContainerView, UIView, NSString, NSArray;

@interface SiriTVUITemplatedSnippetView : SiriTVUISnippetView <SiriTVUITemplatedContainerViewDelegate, SiriTVUIGroupView> {

	SiriTVUITemplatedContainerView* _containerView;
	id<SiriTVUITemplatedViewDelegate> _templatedViewDelegate;
	UIView* _annotationView;
	UIView* _defaultFocusedView;

}

@property (assign,nonatomic,__weak) id<SiriTVUITemplatedViewDelegate> templatedViewDelegate;              //@synthesize templatedViewDelegate=_templatedViewDelegate - In the implementation block
@property (nonatomic,retain) UIView * annotationView;                                                     //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic,__weak) UIView * defaultFocusedView;                                          //@synthesize defaultFocusedView=_defaultFocusedView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groupedSubviews; 
-(UIView *)annotationView;
-(void)setAnnotationView:(UIView *)arg1 ;
-(BOOL)shouldFitWithinContentMargins;
-(CGSize)sizeThatFits:(CGSize)arg1 forPartialLayout:(BOOL)arg2 ;
-(void)addGroupedSubview:(id)arg1 ;
-(void)removeGroupedSubview:(id)arg1 ;
-(void)subviewOffsetsDidChange:(BOOL)arg1 ;
-(void)setTemplatedViewDelegate:(id<SiriTVUITemplatedViewDelegate>)arg1 ;
-(void)layoutSubviewsForFullScreenFraction:(double)arg1 ;
-(void)setDefaultFocusedView:(UIView *)arg1 ;
-(void)transitionToTemplateItemViews:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)calculateFittingSizeWithSize:(CGSize)arg1 andByIteratingRelevantSubviews:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_addGroupedSubview:(id)arg1 toContainerView:(id)arg2 ;
-(void)_removeGroupedSubview:(id)arg1 fromContainerView:(id)arg2 ;
-(id<SiriTVUITemplatedViewDelegate>)templatedViewDelegate;
-(void)_layoutContainerView:(id)arg1 forFullScreenFraction:(double)arg2 ;
-(UIView *)defaultFocusedView;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(NSArray *)groupedSubviews;
@end

