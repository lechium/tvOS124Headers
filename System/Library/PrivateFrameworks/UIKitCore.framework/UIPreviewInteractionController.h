/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewInteractionControllerDelegate, UIViewControllerPreviewing_Internal;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIInteractionProgress, UIGestureRecognizer, NSArray;

@interface UIPreviewInteractionController : NSObject {

	UIInteractionProgress* interactionProgressForPresentation;
	UIGestureRecognizer* presentationGestureRecognizer;
	UIGestureRecognizer* beginPreviewGestureRecognizer;
	id<UIPreviewInteractionControllerDelegate> _delegate;
	NSArray* _gestureRecognizers;
	id<UIViewControllerPreviewing_Internal> _previewingContext;

}

@property (assign,nonatomic,__weak) id<UIViewControllerPreviewing_Internal> previewingContext;              //@synthesize previewingContext=_previewingContext - In the implementation block
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
@property (nonatomic,readonly) UIGestureRecognizer * presentationGestureRecognizer; 
@property (nonatomic,readonly) UIGestureRecognizer * beginPreviewGestureRecognizer; 
@property (assign,nonatomic,__weak) id<UIPreviewInteractionControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers;                                                //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
-(void)setDelegate:(id<UIPreviewInteractionControllerDelegate>)arg1 ;
-(id<UIPreviewInteractionControllerDelegate>)delegate;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(NSArray *)gestureRecognizers;
-(UIGestureRecognizer *)beginPreviewGestureRecognizer;
-(UIGestureRecognizer *)presentationGestureRecognizer;
-(id)initWithView:(id)arg1 ;
-(BOOL)startInteractivePreviewAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)commitInteractivePreview;
-(void)cancelInteractivePreview;
-(void)_finalizeInteractivePreview;
-(void)_previewPresentationControllerDidScheduleDismiss;
-(id<UIViewControllerPreviewing_Internal>)previewingContext;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing_Internal>)arg1 ;
@end

