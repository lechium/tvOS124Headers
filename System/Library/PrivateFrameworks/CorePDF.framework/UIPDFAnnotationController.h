/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NSObjectUIPDFAnnotationControllerDelegate;
@class UIPDFPageView, UIPDFMarkupAnnotation, CALayer, UIColor, UIPDFAnnotation, NSString;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {

	UIPDFPageView* _pageView;
	os_unfair_lock_s _lock;
	CGPoint _startPoint;
	BOOL _moving;
	UIPDFMarkupAnnotation* _currentAnnotation;
	SCD_Struct_CP17 _initialRange;
	BOOL _tracking;
	CALayer* _drawingSurface;
	id<NSObject><UIPDFAnnotationControllerDelegate> _delegate;
	CGSize _cachedMarginNoteSize;
	BOOL makeUnderlineAnnotation;
	BOOL _allowEditing;
	UIColor* _currentColor;

}

@property (nonatomic,readonly) UIPDFPageView * pageView;                                            //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) UIPDFAnnotation * currentAnnotation;                                   //@synthesize currentAnnotation=_currentAnnotation - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                     //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) UIColor * currentColor;                                                //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) BOOL makeUnderlineAnnotation; 
@property (assign,nonatomic) CALayer * drawingSurface;                                              //@synthesize drawingSurface=_drawingSurface - In the implementation block
@property (assign,nonatomic) id<NSObject><UIPDFAnnotationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL tracking;                                                       //@synthesize tracking=_tracking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAnnotation:(CGPDFDictionaryRef)arg1 type:(const char*)arg2 ;
+(BOOL)pageHasAnnotations:(id)arg1 ;
+(CGImageRef)newMaskImage:(CGPDFPageRef)arg1 size:(CGSize)arg2 ;
-(id)marginNoteImage:(id)arg1 ;
-(id)initWithPageView:(id)arg1 ;
-(void)setDrawingSurface:(CALayer *)arg1 ;
-(void)layoutAnnotationViews:(id)arg1 ;
-(void)drawAnnotations:(CGContextRef)arg1 ;
-(BOOL)willDoSomethingWithTap:(CGPoint)arg1 ;
-(UIPDFAnnotation *)currentAnnotation;
-(BOOL)willTrackAtPoint:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 ;
-(void)tracking:(CGPoint)arg1 ;
-(BOOL)madeInstantAnnotation;
-(void)endTrackingAtPoint:(CGPoint)arg1 ;
-(void)doubleTapRecognized:(id)arg1 ;
-(BOOL)isLinkAnnotationAt:(CGPoint)arg1 ;
-(BOOL)annotationBriefPressRecognized:(id)arg1 ;
-(BOOL)annotationLongPressRecognized:(id)arg1 ;
-(BOOL)annotationSingleTapRecognized:(id)arg1 ;
-(void)addLinkAnnotationViews;
-(BOOL)willHandleTouchGestureAtPoint:(CGPoint)arg1 ;
-(BOOL)linkAnnotationShouldBegin:(id)arg1 ;
-(void)setMakeUnderlineAnnotation:(BOOL)arg1 ;
-(void)_addLinkAnnotationViewFor:(id)arg1 ;
-(void)setSurfacePosition:(id)arg1 ;
-(void)annotationTapRecognized:(id)arg1 ;
-(void)linkPressRecognized:(id)arg1 ;
-(void)_addRecognizers:(id)arg1 ;
-(void)addDrawingSurface:(id)arg1 view:(id)arg2 ;
-(void)_addAnnotationViewFor:(id)arg1 ;
-(CGSize)marginNoteImageSize;
-(void)resetBeingPressedForRecognizer:(id)arg1 withDelegate:(id)arg2 withAnnotation:(id)arg3 ;
-(BOOL)isSelection:(CGPDFSelectionRef)arg1 equalTo:(CGPDFSelectionRef)arg2 ;
-(BOOL)intersects:(CGPDFSelectionRef)arg1 with:(CGPDFSelectionRef)arg2 ;
-(void)_initialRange:(CGPoint)arg1 ;
-(BOOL)trackMoved:(CGPoint)arg1 ;
-(BOOL)makeUnderlineAnnotation;
-(UIColor *)currentColor;
-(void)mergeSelectionOfAnnotation:(id)arg1 ;
-(id)_linkAnnotationViewAt:(CGPoint)arg1 ;
-(id)linkAnnotationAt:(CGPoint)arg1 ;
-(id)annotationAt:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toSurfaceLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toSurfaceLayer:(id)arg2 ;
-(void)hostViewDidScroll;
-(void)didEndTrackingAtPoint:(CGPoint)arg1 ;
-(id)annotatePageSelection;
-(void)copyAttributesOf:(id)arg1 to:(id)arg2 ;
-(CGImageRef)newHighlightMaskImageFor:(CGRect)arg1 ;
-(CGImageRef)underlineImageFor:(CGRect)arg1 ;
-(void)setCurrentAnnotation:(UIPDFAnnotation *)arg1 ;
-(CALayer *)drawingSurface;
-(BOOL)allowEditing;
-(void)setAllowEditing:(BOOL)arg1 ;
-(void)setCurrentColor:(UIColor *)arg1 ;
-(BOOL)tracking;
-(void)addAnnotation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<NSObject><UIPDFAnnotationControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id<NSObject><UIPDFAnnotationControllerDelegate>)delegate;
-(void)setView:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)lock;
-(void)unlock;
-(UIPDFPageView *)pageView;
@end

