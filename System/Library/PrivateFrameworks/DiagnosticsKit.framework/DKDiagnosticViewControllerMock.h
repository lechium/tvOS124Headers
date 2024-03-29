/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/DKDiagnostic_Internal.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/DKDiagnosticMock.h>

@class DKMutableDiagnosticResult, DKDiagnosticContextMock, NSLock, NSString;

@interface DKDiagnosticViewControllerMock : UIViewController <DKDiagnostic_Internal, CAAnimationDelegate, DKDiagnosticMock> {

	BOOL _finished;
	BOOL _cancelled;
	BOOL _setup;
	BOOL _shouldShowPressHomeLabel;
	DKMutableDiagnosticResult* _result;
	DKDiagnosticContextMock* _context;
	NSLock* _finishedLock;
	/*^block*/id _completion;
	Class _inputsClass;

}

@property (nonatomic,retain) DKDiagnosticContextMock * context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSLock * finishedLock;                            //@synthesize finishedLock=_finishedLock - In the implementation block
@property (nonatomic,copy) id completion;                                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) Class inputsClass;                                //@synthesize inputsClass=_inputsClass - In the implementation block
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
-(void)setInputsClass:(Class)arg1 ;
-(void)setSetup:(BOOL)arg1 ;
-(NSLock *)finishedLock;
-(void)beginRequestWithInputsClass:(Class)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)shouldShowPressHomeLabel;
-(void)setShouldShowPressHomeLabel:(BOOL)arg1 ;
-(void)setFinishedLock:(NSLock *)arg1 ;
-(Class)inputsClass;
-(id)init;
-(void)setContext:(DKDiagnosticContextMock *)arg1 ;
-(DKDiagnosticContextMock *)context;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(DKMutableDiagnosticResult *)result;
-(BOOL)isFinished;
@end

