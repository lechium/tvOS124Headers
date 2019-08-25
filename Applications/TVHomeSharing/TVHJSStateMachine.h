//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHJSObject.h"

#import "TVHJSStateMachine.h"

@class NSMutableArray, TVSStateMachine;

@interface TVHJSStateMachine : TVHJSObject <TVHJSStateMachine>
{
    NSMutableArray *_eventHandlerIdentifiers;	// 8 = 0x8
    TVSStateMachine *_wrappedStateMachine;	// 16 = 0x10
}

+ (id)_sanitizedString:(id)arg1;	// IMP=0x0000000100019ba8
+ (id)_defaultHandlerIdentifierWithEvent:(id)arg1;	// IMP=0x0000000100019b00
+ (id)_handlerIdentifierWithEvent:(id)arg1 state:(id)arg2;	// IMP=0x0000000100019a08
@property(retain, nonatomic) TVSStateMachine *wrappedStateMachine; // @synthesize wrappedStateMachine=_wrappedStateMachine;
@property(retain, nonatomic) NSMutableArray *eventHandlerIdentifiers; // @synthesize eventHandlerIdentifiers=_eventHandlerIdentifiers;
- (void).cxx_destruct;	// IMP=0x0000000100019d88
- (id)_invokeEventHandlerWithIdentifier:(id)arg1 state:(id)arg2 eventInfo:(id)arg3;	// IMP=0x0000000100019bc8
- (void)postEvent:(id)arg1:(id)arg2;	// IMP=0x000000010001997c
- (void)deactivate;	// IMP=0x00000001000197e8
- (void)activate;	// IMP=0x00000001000197a4
- (void)executeCallbackAfterCurrentStateTransition:(id)arg1;	// IMP=0x0000000100019674
- (void)ignoreEventInState:(id)arg1:(id)arg2;	// IMP=0x0000000100019518
- (void)registerStateTransitionFromState:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00000001000193bc
- (void)registerDefaultHandlerForEvent:(id)arg1:(id)arg2;	// IMP=0x0000000100019074
- (void)registerHandlerForEventAndStates:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000100018f04
- (void)registerHandlerForEventAndState:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000100018b34
- (id)initWithName:(id)arg1:(id)arg2;	// IMP=0x0000000100018988
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000100018900

@end

