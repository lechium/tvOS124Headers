/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXGroupable.h>

@class AXElementGroup, AXUIElement, NSString, NSArray, NSURL, NSDictionary;

@interface AXElement : NSObject <AXGroupable> {

	BOOL _representsScannerGroup;
	AXUIElement* _uiElement;
	AXElementGroup* _parentGroup;
	NSString* _localizedStringKey;
	NSString* _localizationBundleID;
	NSString* _localizationBundlePath;
	NSString* _localizedStringTableName;
	AXElement* _cachedRemoteParent;
	AXElement* _cachedRemoteParentForContextID;
	CGPathRef _cachedPath;
	CGRect _cachedFrame;
	CGRect _cachedVisibleFrame;

}

@property (nonatomic,retain) AXUIElement * uiElement;                                                            //@synthesize uiElement=_uiElement - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParent;                                                     //@synthesize cachedRemoteParent=_cachedRemoteParent - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParentForContextID;                                         //@synthesize cachedRemoteParentForContextID=_cachedRemoteParentForContextID - In the implementation block
@property (nonatomic,retain) CGPathRef cachedPath;                                                               //@synthesize cachedPath=_cachedPath - In the implementation block
@property (assign,nonatomic) CGRect cachedFrame;                                                                 //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (assign,nonatomic) CGRect cachedVisibleFrame;                                                          //@synthesize cachedVisibleFrame=_cachedVisibleFrame - In the implementation block
@property (nonatomic,readonly) AXUIElementRef elementRef; 
@property (nonatomic,readonly) BOOL isSystemWideElement; 
@property (assign,getter=isPassivelyListeningForEvents,nonatomic) BOOL passivelyListeningForEvents; 
@property (nonatomic,readonly) AXElement * currentApplication; 
@property (nonatomic,readonly) NSArray * currentApplications; 
@property (nonatomic,readonly) NSArray * currentApplicationsIgnoringSiri; 
@property (nonatomic,readonly) AXElement * springBoardApplication; 
@property (nonatomic,readonly) AXElement * systemApplication; 
@property (nonatomic,readonly) AXElement * accessibilityUIServerApplication; 
@property (nonatomic,readonly) BOOL isScreenLocked; 
@property (nonatomic,readonly) long long applicationOrientation; 
@property (nonatomic,readonly) NSArray * visibleElements; 
@property (nonatomic,readonly) AXElement * firstResponder; 
@property (nonatomic,readonly) AXElement * nativeFocusElement; 
@property (nonatomic,readonly) AXElement * nativeFocusPreferredElement; 
@property (nonatomic,readonly) AXElement * firstElementInApplication; 
@property (nonatomic,readonly) AXElement * firstElementInApplicationForFocus; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) NSString * processName; 
@property (nonatomic,readonly) BOOL isSpringBoard; 
@property (nonatomic,readonly) BOOL isSystemApplication; 
@property (nonatomic,readonly) BOOL isAXUIServer; 
@property (nonatomic,readonly) NSArray * explorerElements; 
@property (nonatomic,readonly) NSArray * nativeFocusableElements; 
@property (nonatomic,readonly) NSArray * elementsWithSemanticContext; 
@property (nonatomic,readonly) NSArray * siriContentNativeFocusableElements; 
@property (nonatomic,readonly) NSArray * siriContentElementsWithSemanticContext; 
@property (nonatomic,readonly) AXElement * application; 
@property (nonatomic,readonly) BOOL isAccessibleElement; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * localizedStringKey;                                                    //@synthesize localizedStringKey=_localizedStringKey - In the implementation block
@property (nonatomic,readonly) NSString * localizationBundleID;                                                  //@synthesize localizationBundleID=_localizationBundleID - In the implementation block
@property (nonatomic,readonly) NSString * localizationBundlePath;                                                //@synthesize localizationBundlePath=_localizationBundlePath - In the implementation block
@property (nonatomic,readonly) NSString * localizedStringTableName;                                              //@synthesize localizedStringTableName=_localizedStringTableName - In the implementation block
@property (nonatomic,readonly) NSString * hint; 
@property (assign,nonatomic) NSString * value; 
@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect visibleFrame; 
@property (nonatomic,readonly) CGRect textCursorFrame; 
@property (nonatomic,readonly) CGPoint centerPoint; 
@property (nonatomic,readonly) CGPoint visiblePoint; 
@property (nonatomic,readonly) CGRect focusableFrameForZoom; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) AXElement * touchContainer; 
@property (nonatomic,readonly) unsigned long long containerType; 
@property (nonatomic,readonly) BOOL isKeyboardKey; 
@property (nonatomic,readonly) BOOL isTouchContainer; 
@property (nonatomic,readonly) BOOL hasWebContent; 
@property (nonatomic,readonly) BOOL hasTextEntry; 
@property (nonatomic,readonly) BOOL isMathEquation; 
@property (nonatomic,readonly) unsigned windowContextId; 
@property (nonatomic,readonly) unsigned windowDisplayId; 
@property (nonatomic,readonly) NSArray * variantKeys; 
@property (nonatomic,readonly) BOOL hasVariantKeys; 
@property (nonatomic,readonly) NSArray * textOperations; 
@property (nonatomic,readonly) NSArray * typingCandidates; 
@property (assign,nonatomic) BOOL assistiveTechFocused; 
@property (nonatomic,readonly) NSArray * customActions; 
@property (nonatomic,readonly) NSArray * drags; 
@property (nonatomic,readonly) NSArray * drops; 
@property (nonatomic,readonly) BOOL isAccessibilityOpaqueElementProvider; 
@property (nonatomic,readonly) NSDictionary * semanticContext; 
@property (nonatomic,readonly) AXElement * remoteParent; 
@property (nonatomic,readonly) AXElement * elementParent; 
@property (nonatomic,readonly) unsigned long long scanningBehaviorTraits; 
@property (nonatomic,readonly) int pid; 
@property (nonatomic,readonly) NSRange rowRange; 
@property (nonatomic,readonly) NSString * roleDescription; 
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (getter=isNativeFocused,nonatomic,readonly) BOOL nativeFocus; 
@property (nonatomic,readonly) BOOL canPerformEscape; 
@property (nonatomic,readonly) BOOL canPerformZoom; 
@property (nonatomic,readonly) NSArray * supportedGestures; 
@property (nonatomic,readonly) BOOL isScannerElement; 
@property (nonatomic,readonly) BOOL representsScannerGroup;                                                      //@synthesize representsScannerGroup=_representsScannerGroup - In the implementation block
@property (nonatomic,readonly) long long scannerActivateBehavior; 
@property (nonatomic,retain) AXElement * autoscrollTarget; 
@property (nonatomic,readonly) BOOL isAutoscrolling; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                                       //@synthesize parentGroup=_parentGroup - In the implementation block
+(id)systemWideElement;
+(id)elementWithAXUIElement:(AXUIElementRef)arg1 ;
+(id)elementsWithUIElements:(id)arg1 ;
+(id)primaryApp;
+(void)unregisterNotifications:(id)arg1 ;
+(void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
+(id)elementAtCoordinate:(CGPoint)arg1 withVisualPadding:(BOOL)arg2 ;
+(id)elementWithUIElement:(id)arg1 ;
-(CGPoint)centerPoint;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(BOOL)isMap;
-(unsigned long long)containerType;
-(NSString *)roleDescription;
-(NSArray *)visibleElements;
-(id)previousElementsWithCount:(unsigned long long)arg1 ;
-(id)nextElementsWithCount:(unsigned long long)arg1 ;
-(void)updateCache:(long long)arg1 ;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(AXElement *)systemApplication;
-(NSArray *)currentApplications;
-(AXUIElement *)uiElement;
-(AXUIElementRef)elementRef;
-(void)setCachedVisibleFrame:(CGRect)arg1 ;
-(void)setCachedFrame:(CGRect)arg1 ;
-(id)_elementForAttribute:(long long)arg1 shouldUpdateCache:(BOOL)arg2 shouldFetchAttributes:(BOOL)arg3 ;
-(BOOL)isSystemWideElement;
-(id)_axElementsForAXUIElements:(id)arg1 ;
-(id)elementForAttribute:(long long)arg1 ;
-(CGPathRef)cachedPath;
-(unsigned)windowContextId;
-(CGPathRef)convertPath:(CGPathRef)arg1 fromContextId:(unsigned)arg2 ;
-(void)setCachedPath:(CGPathRef)arg1 ;
-(CGRect)cachedFrame;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)cachedVisibleFrame;
-(id)containerTypes;
-(BOOL)hasAllTraits:(unsigned long long)arg1 ;
-(BOOL)hasAnyTraits:(unsigned long long)arg1 ;
-(AXElement *)touchContainer;
-(AXElement *)remoteParent;
-(NSArray *)customActions;
-(double)distanceToPoint:(CGPoint)arg1 ;
-(AXElement *)cachedRemoteParent;
-(void)setCachedRemoteParent:(AXElement *)arg1 ;
-(AXElement *)cachedRemoteParentForContextID;
-(void)setCachedRemoteParentForContextID:(AXElement *)arg1 ;
-(BOOL)hasWebContent;
-(BOOL)hasTextEntry;
-(BOOL)isKeyboardKey;
-(BOOL)isMathEquation;
-(BOOL)canPerformActivate;
-(BOOL)canPerformSecondaryActivate;
-(BOOL)canPerformEscape;
-(BOOL)canPerformZoom;
-(BOOL)canPerformTrackingDetail;
-(id)_remoteParentForContextID;
-(BOOL)_performActivate;
-(BOOL)scrollToVisible;
-(BOOL)viewHierarchyHasNativeFocus;
-(BOOL)setNativeFocus;
-(id)remoteApplication;
-(BOOL)isSystemApplication;
-(BOOL)systemPressTVSelectButton;
-(CGPoint)visiblePoint;
-(BOOL)performAction:(int)arg1 withValue:(id)arg2 ;
-(BOOL)_zoomInOrOut:(BOOL)arg1 ;
-(void)insertText:(id)arg1 atPosition:(long long)arg2 ;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(unsigned)displayIdForContextId:(unsigned)arg1 ;
-(unsigned)contextIdForPoint:(CGPoint)arg1 ;
-(id)elementForAttribute:(long long)arg1 parameter:(id)arg2 ;
-(id)elementsForAttribute:(long long)arg1 ;
-(BOOL)isPassivelyListeningForEvents;
-(void)setPassivelyListeningForEvents:(BOOL)arg1 ;
-(AXElement *)currentApplication;
-(NSArray *)currentApplicationsIgnoringSiri;
-(AXElement *)springBoardApplication;
-(AXElement *)accessibilityUIServerApplication;
-(void)sendUserEventOccurred;
-(BOOL)systemPressTVPlayPauseButton;
-(BOOL)systemPressTVUpButton;
-(BOOL)systemPressTVDownButton;
-(BOOL)systemPressTVLeftButton;
-(BOOL)systemPressTVRightButton;
-(BOOL)systemPressTVMenuButton;
-(BOOL)systemLongPressTVMenuButton;
-(BOOL)systemPressTVHomeButton;
-(BOOL)systemPressTVSiriButton;
-(void)clearCachedFrame:(BOOL)arg1 cachedVisibleFrame:(BOOL)arg2 ;
-(long long)applicationOrientation;
-(id)firstResponderForFocus;
-(AXElement *)nativeFocusElement;
-(AXElement *)nativeFocusPreferredElement;
-(AXElement *)firstElementInApplication;
-(AXElement *)firstElementInApplicationForFocus;
-(BOOL)isSpringBoard;
-(BOOL)isAXUIServer;
-(NSArray *)explorerElements;
-(NSArray *)nativeFocusableElements;
-(NSArray *)elementsWithSemanticContext;
-(NSArray *)siriContentNativeFocusableElements;
-(NSArray *)siriContentElementsWithSemanticContext;
-(id)elementsMatchingText:(id)arg1 ;
-(id)auditIssuesForOptions:(id)arg1 ;
-(CGRect)textCursorFrame;
-(CGRect)focusableFrameForZoom;
-(BOOL)isTouchContainer;
-(NSArray *)variantKeys;
-(BOOL)hasVariantKeys;
-(NSArray *)typingCandidates;
-(void)setAssistiveTechFocused:(BOOL)arg1 ;
-(BOOL)assistiveTechFocused;
-(NSArray *)drags;
-(NSArray *)drops;
-(NSRange)rowRange;
-(BOOL)hasOnlyTraits:(unsigned long long)arg1 ;
-(double)distanceToElement:(id)arg1 ;
-(BOOL)isNativeFocused;
-(NSDictionary *)semanticContext;
-(AXElement *)elementParent;
-(unsigned long long)scanningBehaviorTraits;
-(BOOL)showContextMenu;
-(BOOL)canScrollInAtLeastOneDirection;
-(BOOL)supportsAction:(int)arg1 ;
-(AXUIElementRef)scrollAncestorForScrollAction:(int)arg1 ;
-(unsigned)windowDisplayId;
-(NSArray *)supportedGestures;
-(BOOL)zoomIn;
-(BOOL)zoomOut;
-(void)insertTextAtCurrentPosition:(id)arg1 ;
-(BOOL)isScannerElement;
-(long long)scannerActivateBehavior;
-(AXElement *)autoscrollTarget;
-(void)setAutoscrollTarget:(AXElement *)arg1 ;
-(void)pauseAutoscrolling;
-(void)increaseAutoscrollSpeed;
-(void)decreaseAutoscrollSpeed;
-(BOOL)pressTVSelectButton;
-(BOOL)pressTVBackButton;
-(BOOL)pressTVMenuButton;
-(BOOL)pressTVPlayPauseButton;
-(BOOL)pressTVUpButton;
-(BOOL)pressTVDownButton;
-(BOOL)pressTVLeftButton;
-(BOOL)pressTVRightButton;
-(BOOL)pressTVPlayButton;
-(BOOL)pressTVPauseButton;
-(BOOL)pressTVStopButton;
-(BOOL)pressTVRewindButton;
-(BOOL)pressTVFastForwardButton;
-(BOOL)pressTVNextTrackButton;
-(BOOL)pressTVPreviousTrackButton;
-(BOOL)pressTVSkipForwardsButton;
-(BOOL)pressTVSkipBackwardsButton;
-(BOOL)pressTVDataOnScreenButton;
-(BOOL)pressTVMicButton;
-(void)setUiElement:(AXUIElement *)arg1 ;
-(NSString *)localizedStringKey;
-(NSString *)localizationBundleID;
-(NSString *)localizationBundlePath;
-(NSString *)localizedStringTableName;
-(BOOL)representsScannerGroup;
-(id)makeLookingGlassRequest:(id)arg1 ;
-(AXElementGroup *)parentGroup;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(BOOL)isAutoscrolling;
-(void)autoscrollInDirection:(unsigned long long)arg1 ;
-(void)scrollToBottom;
-(BOOL)isAccessibleElement;
-(NSString *)hint;
-(BOOL)performAction:(int)arg1 ;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)isScreenLocked;
-(int)pid;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)accessibilityLocalizedStringKey;
-(NSString *)description;
-(BOOL)isVisible;
-(AXElement *)firstResponder;
-(CGRect)frame;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)_updateLabel;
-(CGPathRef)path;
-(NSString *)label;
-(BOOL)longPress;
-(NSURL *)url;
-(BOOL)isGroup;
-(NSString *)bundleId;
-(BOOL)press;
-(NSRange)selectedTextRange;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(unsigned long long)traits;
-(BOOL)isValid;
-(NSString *)language;
-(CGRect)visibleFrame;
-(NSArray *)textOperations;
-(NSArray *)parent;
-(NSArray *)children;
-(AXElement *)application;
-(NSString *)processName;
-(void)scrollToTop;
@end

