/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebAccessibilityObjectWrapperBase.h>

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase {

	int m_isAccessibilityElement;
	unsigned long long m_accessibilityTraitsFromAncestor;

}
-(id)initWithAccessibilityObject:(AccessibilityObject*)arg1 ;
-(void)postFocusChangeNotification;
-(void)postSelectedTextChangeNotification;
-(void)postLayoutChangeNotification;
-(void)postLiveRegionChangeNotification;
-(void)postLiveRegionCreatedNotification;
-(void)postChildrenChangedNotification;
-(void)postLoadCompleteNotification;
-(void)postInvalidStatusChangedNotification;
-(void)postValueChangedNotification;
-(void)postExpandedChangedNotification;
-(id)attachmentView;
-(BOOL)_prepareAccessibilityCall;
-(BOOL)accessibilityCanFuzzyHitTest;
-(WebAccessibilityObjectWrapper*)accessibilityPostProcessHitTest:(CGPoint)arg1 ;
-(unsigned long long)_axLinkTrait;
-(unsigned long long)_axVisitedTrait;
-(unsigned long long)_axHeaderTrait;
-(unsigned long long)_axContainedByListTrait;
-(unsigned long long)_axContainedByTableTrait;
-(BOOL)_accessibilityIsLandmarkRole:(int)arg1 ;
-(unsigned long long)_axContainedByLandmarkTrait;
-(unsigned long long)_axContainedByFieldsetTrait;
-(unsigned long long)_axTextEntryTrait;
-(unsigned long long)_axHasTextCursorTrait;
-(unsigned long long)_axTextOperationsAvailableTrait;
-(unsigned long long)_axSecureTextFieldTrait;
-(unsigned long long)_axSearchFieldTrait;
-(unsigned long long)_axTextAreaTrait;
-(unsigned long long)_axWebContentTrait;
-(unsigned long long)_accessibilityTextEntryTraits;
-(unsigned long long)_axImageTrait;
-(unsigned long long)_axTabButtonTrait;
-(unsigned long long)_axButtonTrait;
-(unsigned long long)_axToggleTrait;
-(unsigned long long)_axPopupButtonTrait;
-(unsigned long long)_axRadioButtonTrait;
-(unsigned long long)_axStaticTextTrait;
-(unsigned long long)_axAdjustableTrait;
-(unsigned long long)_axMenuItemTrait;
-(unsigned long long)_axUpdatesFrequentlyTrait;
-(unsigned long long)_axSelectedTrait;
-(unsigned long long)_axNotEnabledTrait;
-(unsigned long long)_accessibilityTraitsFromAncestors;
-(BOOL)containsUnnaturallySegmentedChildren;
-(BOOL)accessibilityIsWebInteractiveVideo;
-(BOOL)isSVGGroupElement;
-(BOOL)determineIsAccessibilityElement;
-(id)interactiveVideoDescription;
-(BOOL)stringValueShouldBeUsedInLabel;
-(AccessibilityTableCell*)tableCellParent;
-(AccessibilityTable*)tableParent;
-(BOOL)accessibilityIsShowingValidationMessage;
-(CGPoint)convertPointToScreenSpace:(FloatPoint*)arg1 ;
-(void)postScrollStatusChangeNotification;
-(CGPoint)_accessibilityScrollPosition;
-(id)_accessibilityWebDocumentView;
-(CGRect)convertRectToScreenSpace:(IntRect*)arg1 ;
-(id)_accessibilityNextElementsWithCount:(unsigned)arg1 ;
-(id)_accessibilityPreviousElementsWithCount:(unsigned)arg1 ;
-(void)accessibilityModifySelection:(int)arg1 increase:(BOOL)arg2 ;
-(RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >*)rangeForTextMarkers:(id)arg1 ;
-(BOOL)_addAccessibilityObject:(AccessibilityObject*)arg1 toTextMarkerArray:(id)arg2 ;
-(id)textMarkersForRange:(RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >*)arg1 ;
-(id)textMarkerRange;
-(long long)positionForTextMarker:(id)arg1 ;
-(id)arrayOfTextForTextMarkers:(id)arg1 attributed:(BOOL)arg2 ;
-(id)textMarkerForPosition:(long long)arg1 ;
-(id)_stringFromStartMarker:(id)arg1 toEndMarker:(id)arg2 attributed:(BOOL)arg3 ;
-(id)_stringForRange:(NSRange)arg1 attributed:(BOOL)arg2 ;
-(id)textMarkerRangeForSelection;
-(id)stringForTextMarkers:(id)arg1 ;
-(id)nextMarkerForCharacterOffset:(CharacterOffset*)arg1 ;
-(id)previousMarkerForCharacterOffset:(CharacterOffset*)arg1 ;
-(RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >*)rangeFromMarkers:(id)arg1 withText:(id)arg2 ;
-(id)rectsForSelectionRects:(const Vector<WebCore::SelectionRect, 0, WTF::CrashOnOverflow, 16>*)arg1 ;
-(AccessibilityObject*)detailParentForSummaryObject:(AccessibilityObject*)arg1 ;
-(AccessibilityObject*)treeItemParentForObject:(AccessibilityObject*)arg1 ;
-(void)enableAttributeCaching;
-(void)disableAttributeCaching;
-(CGPathRef)_accessibilityPath;
-(BOOL)accessibilityHasPopup;
-(BOOL)accessibilityIsDialog;
-(WebAccessibilityObjectWrapper*)_accessibilityTreeAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityListAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityArticleAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityLandmarkAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityTableAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityFieldsetAncestor;
-(WebAccessibilityObjectWrapper*)_accessibilityFrameAncestor;
-(BOOL)accessibilityIsMediaPlaying;
-(BOOL)accessibilityIsMediaMuted;
-(void)accessibilityToggleMuteForMedia;
-(void)accessibilityVideoEnterFullscreen;
-(BOOL)fileUploadButtonReturnsValueInTitle;
-(BOOL)_accessibilityHasTouchEventListener;
-(BOOL)_accessibilityValueIsAutofilled;
-(id)accessibilityRoleDescription;
-(id)accessibilityColorStringValue;
-(BOOL)accessibilityCanSetValue;
-(id)accessibilityTextualContext;
-(void)_accessibilityActivate;
-(CGSize)_accessibilityScrollSize;
-(CGRect)_accessibilityScrollVisibleRect;
-(AccessibilityObject*)detailParentForObject:(AccessibilityObject*)arg1 ;
-(id)accessibilityFindMatchingObjects:(id)arg1 ;
-(void)accessibilityIncreaseSelection:(int)arg1 ;
-(void)accessibilityDecreaseSelection:(int)arg1 ;
-(void)accessibilityMoveSelectionToMarker:(id)arg1 ;
-(NSRange)elementTextRange;
-(WebAccessibilityObjectWrapper*)accessibilityObjectForTextMarker:(id)arg1 ;
-(id)attributedStringForRange:(NSRange)arg1 ;
-(id)attributedStringForElement;
-(id)elementsForRange:(NSRange)arg1 ;
-(id)selectionRangeString;
-(id)selectedTextMarker;
-(id)lineEndMarkerForMarker:(id)arg1 ;
-(id)lineStartMarkerForMarker:(id)arg1 ;
-(id)nextMarkerForMarker:(id)arg1 ;
-(id)previousMarkerForMarker:(id)arg1 ;
-(CGRect)frameForTextMarkers:(id)arg1 ;
-(id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2 ;
-(id)textRectsFromMarkers:(id)arg1 withText:(id)arg2 ;
-(id)textMarkerForPoint:(CGPoint)arg1 ;
-(long long)lengthForTextMarkers:(id)arg1 ;
-(id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(BOOL)arg2 ;
-(id)textMarkerRangeForMarkers:(id)arg1 ;
-(BOOL)accessibilityARIAIsBusy;
-(id)accessibilityARIALiveRegionStatus;
-(id)accessibilityARIARelevantStatus;
-(BOOL)accessibilityARIALiveRegionIsAtomic;
-(BOOL)accessibilitySupportsARIAPressed;
-(BOOL)accessibilityIsPressed;
-(BOOL)accessibilitySupportsARIAExpanded;
-(BOOL)accessibilityIsExpanded;
-(id)accessibilityARIACurrentStatus;
-(id)accessibilityMathRootIndexObject;
-(id)accessibilityMathRadicandObject;
-(id)accessibilityMathNumeratorObject;
-(id)accessibilityMathDenominatorObject;
-(id)accessibilityMathBaseObject;
-(id)accessibilityMathSubscriptObject;
-(id)accessibilityMathSuperscriptObject;
-(id)accessibilityMathUnderObject;
-(id)accessibilityMathOverObject;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(id)accessibilityMathPostscripts;
-(id)accessibilityMathPrescripts;
-(id)accessibilityMathFencedOpenString;
-(id)accessibilityMathFencedCloseString;
-(BOOL)accessibilityIsMathTopObject;
-(long long)accessibilityMathLineThickness;
-(id)accessibilityMathType;
-(CGPoint)accessibilityClickPoint;
-(RefPtr<WebCore::Range, WTF::DumbPtrTraits<WebCore::Range> >*)_convertToDOMRange:(NSRange)arg1 ;
-(NSRange)_convertToNSRange:(Range*)arg1 ;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(id)accessibilityFocusedUIElement;
-(CGRect)accessibilityVisibleContentRect;
-(id)accessibilitySpeechHint;
-(CGRect)accessibilityElementRect;
-(unsigned long long)accessibilityBlockquoteLevel;
-(id)accessibilityLinkRelationshipType;
-(id)accessibilityInvalidStatus;
-(id)accessibilityExpandedTextValue;
-(id)accessibilitySortDirection;
-(unsigned long long)accessibilityARIAColumnIndex;
-(unsigned long long)accessibilityARIARowIndex;
-(unsigned long long)accessibilityARIARowCount;
-(unsigned long long)accessibilityARIAColumnCount;
-(BOOL)accessibilityRequired;
-(BOOL)accessibilityIsComboBox;
-(id)accessibilityDatetimeValue;
-(id)accessibilityURL;
-(id)accessibilityLinkedElement;
-(id)accessibilityTitleElement;
-(BOOL)_accessibilityIsStrongPasswordField;
-(BOOL)accessibilityIsAttachmentElement;
-(unsigned long long)accessibilityColumnCount;
-(NSRange)accessibilityColumnRange;
-(unsigned long long)accessibilityRowCount;
-(CGPoint)_accessibilityConvertPointToViewSpace:(CGPoint)arg1 ;
-(BOOL)isAttachment;
-(NSRange)_accessibilitySelectedTextRange;
-(NSRange)accessibilityRowRange;
-(id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(BOOL)_accessibilityScrollToVisible;
-(id)accessibilityPlaceholderValue;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)accessibilityFlowToElements;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityContainer;
-(id)accessibilityLanguage;
-(id)accessibilityHeaderElements;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityIdentifier;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)description;
-(void)detach;
-(id)stringForRange:(NSRange)arg1 ;
@end

