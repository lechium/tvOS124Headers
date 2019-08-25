/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <AccessibilityPlatformTranslation/AXPTranslator.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject, AXUIElement;

@interface AXPTranslator_iOS : AXPTranslator {

	NSMutableDictionary* _translationCache;
	NSMutableDictionary* _backTranslationCache;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	NSObject*<OS_dispatch_semaphore> _appAXReadySemaphore;
	BOOL _accessibilityEnabled;
	AXObserverRef _axEventObserver;
	AXUIElement* _systemAppElement;
	AXUIElement* _systemWideElement;

}

@property (nonatomic,retain) AXUIElement * systemWideElement;              //@synthesize systemWideElement=_systemWideElement - In the implementation block
@property (nonatomic,retain) AXObserverRef axEventObserver;                //@synthesize axEventObserver=_axEventObserver - In the implementation block
@property (nonatomic,retain) AXUIElement * systemAppElement;               //@synthesize systemAppElement=_systemAppElement - In the implementation block
+(id)_iosParameterFromPlatformParameter:(id)arg1 ;
+(id)sharedInstance;
-(AXUIElement *)systemWideElement;
-(BOOL)accessibilityEnabled;
-(void)setSystemWideElement:(AXUIElement *)arg1 ;
-(AXObserverRef)axEventObserver;
-(void)setAxEventObserver:(AXObserverRef)arg1 ;
-(void)_sendPressFingerEvent:(BOOL)arg1 location:(CGPoint)arg2 force:(double)arg3 contextId:(unsigned)arg4 ;
-(void)_postEvent:(id)arg1 ;
-(id)_processAccessibilityAttributeValue:(long long)arg1 ;
-(id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2 ;
-(BOOL)_processPerformAction:(int)arg1 value:(id)arg2 ;
-(void)enableAccessibility;
-(void)_initializeAccessibility;
-(const AXUIElementRef)createPlatformElementFromTranslationObject:(id)arg1 ;
-(long long)attributeFromRequest:(unsigned long long)arg1 ;
-(id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4 ;
-(id)axElementFromTranslatorRequest:(id)arg1 ;
-(BOOL)_processDecrementAction:(id)arg1 ;
-(BOOL)_processIncrementAction:(id)arg1 ;
-(BOOL)_processPerformCustomAction:(id)arg1 ;
-(BOOL)_processPressAction:(id)arg1 ;
-(BOOL)_processScrollToVisibleAction:(id)arg1 ;
-(BOOL)_processShowContextMenuAction:(id)arg1 ;
-(BOOL)_processEscapeAction:(id)arg1 ;
-(id)_processCustomRotorData:(id)arg1 ;
-(id)_processOutgoingCustomRotorSearchResult:(id)arg1 ;
-(id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long*)arg4 ;
-(id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long*)arg5 ;
-(id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long*)arg4 ;
-(id)_processAttributedLabelAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long*)arg4 ;
-(id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_preprocessRequest:(long long)arg1 parameter:(id)arg2 ;
-(id)translationObjectFromPlatformElement:(AXUIElementRef)arg1 ;
-(AXUIElement *)systemAppElement;
-(id)backTranslationCache;
-(id)translationCache;
-(void)simulatePressAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 withDelay:(float)arg3 withForce:(double)arg4 ;
-(void)initializeAXRuntimeForSystemAppServer;
-(void)setAccessibilityEnabled:(BOOL)arg1 ;
-(void)_signalAppAXReady;
-(id)processMultipleAttributeRequest:(id)arg1 ;
-(id)processActionRequest:(id)arg1 ;
-(id)processCanSetAttribute:(id)arg1 ;
-(id)processSetAttribute:(id)arg1 ;
-(id)processAttributeRequest:(id)arg1 ;
-(id)processApplicationObject:(id)arg1 ;
-(id)processFrontMostApp:(id)arg1 ;
-(id)processHitTest:(id)arg1 ;
-(void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3 ;
-(id)platformElementFromTranslation:(id)arg1 ;
-(void)setSystemAppElement:(AXUIElement *)arg1 ;
-(id)init;
@end

