//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkConfirmationSnippetController.h"

@class NSTimer, SVSStarkEmergencyCallConfirmationSnippetView;

@interface SVSStarkEmergencyCallConfirmationSnippetController : SVSStarkConfirmationSnippetController
{
    long long _seconds;	// 8 = 0x8
    NSTimer *_countdownTimer;	// 16 = 0x10
    SVSStarkEmergencyCallConfirmationSnippetView *_snippetView;	// 24 = 0x18
}

@property(retain, nonatomic) SVSStarkEmergencyCallConfirmationSnippetView *snippetView; // @synthesize snippetView=_snippetView;
- (void).cxx_destruct;	// IMP=0x000000010007b374
- (void)_setCountdownString;	// IMP=0x000000010007b1bc
- (void)_updateCountdown:(id)arg1;	// IMP=0x000000010007af74
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010007ae48
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 interactionStyle:(long long)arg3 currentTurnContext:(id)arg4;	// IMP=0x000000010007ac78

@end

