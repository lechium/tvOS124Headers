//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SVSStarkConfirmationSnippetViewDelegate.h"
#import "SVSStarkItemController.h"

@class AFAnalyticsTurnBasedInstrumentationContext, NSArray, NSString, NSTimer, NSUUID, SVSStarkConfirmationSnippetView;

@interface SVSStarkConfirmationSnippetController : UIViewController <SVSStarkItemController, SVSStarkConfirmationSnippetViewDelegate>
{
    _Bool _isReading;	// 8 = 0x8
    _Bool _isIdle;	// 9 = 0x9
    SVSStarkConfirmationSnippetView *_snippetView;	// 16 = 0x10
    long long _interactionStyle;	// 24 = 0x18
    NSUUID *_conversationItemIdentifier;	// 32 = 0x20
    id <SVSStarkConfirmationSnippetControllerDelegate> _delegate;	// 40 = 0x28
    NSArray *_confirmationButtons;	// 48 = 0x30
    AFAnalyticsTurnBasedInstrumentationContext *_currentTurnContext;	// 56 = 0x38
    NSTimer *_idleTimer;	// 64 = 0x40
}

@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_isIdle) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(nonatomic, getter=_isReading) _Bool isReading; // @synthesize isReading=_isReading;
@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *currentTurnContext; // @synthesize currentTurnContext=_currentTurnContext;
@property(readonly, nonatomic) NSArray *confirmationButtons; // @synthesize confirmationButtons=_confirmationButtons;
@property(nonatomic) __weak id <SVSStarkConfirmationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
@property(retain, nonatomic) SVSStarkConfirmationSnippetView *snippetView; // @synthesize snippetView=_snippetView;
- (void).cxx_destruct;	// IMP=0x000000010004129c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100041108
- (_Bool)isShowingGatekeeperHeader;	// IMP=0x00000001000410c0
- (_Bool)_isReadAgainItem:(id)arg1;	// IMP=0x000000010004105c
- (void)_sendGenericAceCommands:(id)arg1 andDismissSnippet:(_Bool)arg2;	// IMP=0x0000000100040f18
- (void)loadView;	// IMP=0x0000000100040ecc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100040e70
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100040e20
- (void)_createNewIdleTimer;	// IMP=0x0000000100040da0
- (void)_resetIdleTimer;	// IMP=0x0000000100040d6c
- (void)_clearIdleTimer;	// IMP=0x0000000100040d30
- (void)_idleTimerFired:(id)arg1;	// IMP=0x0000000100040d14
- (void)updateAfterSpeechQueueEmpties;	// IMP=0x0000000100040cd4
- (_Bool)isActive;	// IMP=0x0000000100040cb4
- (void)_setupConfirmationOptionButtons:(id)arg1;	// IMP=0x0000000100040484
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 interactionStyle:(long long)arg3 currentTurnContext:(id)arg4;	// IMP=0x000000010004002c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
