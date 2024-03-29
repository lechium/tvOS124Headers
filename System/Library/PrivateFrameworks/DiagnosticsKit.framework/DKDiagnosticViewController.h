/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>
#import <libobjc.A.dylib/DKDiagnostic.h>

@class DKMutableDiagnosticResult, DKDiagnosticContext, NSLock, _UILegibilityLabel, CAGradientLayer, NSString;

@interface DKDiagnosticViewController : UIViewController <DKDiagnostic_Internal, CAAnimationDelegate, NSExtensionRequestHandling, DKDiagnostic> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	BOOL _shouldShowPressHomeLabel;
	DKMutableDiagnosticResult* _result;
	DKDiagnosticContext* _context;
	NSLock* _finishedLock;
	_UILegibilityLabel* _pressHomeLabel;
	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) DKDiagnosticContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * pressHomeLabel;              //@synthesize pressHomeLabel=_pressHomeLabel - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                  //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPressHomeLabel;                    //@synthesize shouldShowPressHomeLabel=_shouldShowPressHomeLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) DKMutableDiagnosticResult * result;               //@synthesize result=_result - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                  //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (assign,getter=isSetup,nonatomic) BOOL setup;                        //@synthesize setup=_setup - In the implementation block
-(void)setResult:(DKMutableDiagnosticResult *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isSetup;
-(void)setSetup:(BOOL)arg1 ;
-(NSLock *)finishedLock;
-(BOOL)shouldShowPressHomeLabel;
-(void)setShouldShowPressHomeLabel:(BOOL)arg1 ;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(void)displayPressHomeLabel;
-(void)setPressHomeLabel:(_UILegibilityLabel *)arg1 ;
-(_UILegibilityLabel *)pressHomeLabel;
-(void)createGradientLayer;
-(void)resetGradientAndLabelBefore:(BOOL)arg1 ;
-(id)init;
-(void)setContext:(DKDiagnosticContext *)arg1 ;
-(DKDiagnosticContext *)context;
-(void)viewDidLoad;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(DKMutableDiagnosticResult *)result;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(BOOL)isFinished;
@end

