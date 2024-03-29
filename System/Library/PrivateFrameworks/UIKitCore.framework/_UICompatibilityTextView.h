/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UITextLinkInteraction.h>
#import <libobjc.A.dylib/WebEditingDelegate.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <UIKit/UIPreviewItemDelegate.h>
#import <UIKit/UITextInput.h>

@class UIView, NSString, UIFont, UIColor, NSAttributedString, NSDictionary, UITextInputPasswordRules, UITextRange, UITextPosition;

@interface _UICompatibilityTextView : UIScrollView <UITextLinkInteraction, WebEditingDelegate, WebPolicyDelegate, UIPreviewItemDelegate, UITextInput> {

	id _private;
	BOOL m_editing;
	UIView* m_inputView;

}

@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (assign,nonatomic) id<UITextViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (retain) UIView * inputView; 
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) BOOL clearsOnInsertion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
+(void)initialize;
+(BOOL)_isCompatibilityTextView;
+(id)excludedElementsForHTML;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeFromSuperview;
-(NSString *)text;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)didMoveToSuperview;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)lineHeight;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(id)textInputTraits;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(UIView *)inputAccessoryView;
-(BOOL)_ownsInputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)deleteBackward;
-(BOOL)canResignFirstResponder;
-(BOOL)isEditing;
-(long long)textAlignment;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(CGPoint)offset;
-(void)setEditable:(BOOL)arg1 ;
-(void)setMarginTop:(int)arg1 ;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)isEditable;
-(id)undoManager;
-(void)insertText:(id)arg1 ;
-(BOOL)hasText;
-(id)webView;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)replace:(id)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(UIView *)textInputView;
-(UITextRange *)markedTextRange;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)styleString;
-(id<UITextInputDelegate>)inputDelegate;
-(UITextRange *)selectedTextRange;
-(id)textInRange:(id)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(id)selectedText;
-(CGRect)firstRectForRange:(id)arg1 ;
-(CGRect)visibleTextRect;
-(UIView *)inputView;
-(void)setInputView:(UIView *)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1 ;
-(id)insertDictationResultPlaceholder;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(id)metadataDictionariesForDictationResults;
-(id)interactionAssistant;
-(id)selectionView;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)keyboardDidShow:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)selectAll;
-(void)setBottomBufferHeight:(double)arg1 ;
-(id)automaticallySelectedOverlay;
-(CGRect)visibleRect;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1 ;
-(void)updateSelection;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(id)_keyboardResponder;
-(NSRange)selectedRange;
-(void)pasteAndMatchStyle:(id)arg1 ;
-(id)_proxyTextInput;
-(BOOL)_restoreFirstResponder;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)cancelInteractionWithLink;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)disableClearsOnInsertion;
-(void)setSelectedRange:(NSRange)arg1 ;
-(BOOL)_interactionShouldBeginFromPreviewItemController:(id)arg1 forPosition:(CGPoint)arg2 ;
-(id)_dataForPreviewItemController:(id)arg1 atPosition:(CGPoint)arg2 type:(long long*)arg3 ;
-(id)_presentationRectsForPreviewItemController:(id)arg1 ;
-(id)_presentationSnapshotForPreviewItemController:(id)arg1 ;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(Class)_printFormatterClass;
-(void)setTypingAttributes:(NSDictionary *)arg1 ;
-(void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2 ;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(void)setLineHeight:(double)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(unsigned long long)dataDetectorTypes;
-(CGSize)tileSizeForSize:(CGSize)arg1 ;
-(void)updateWebViewObjects;
-(void)webViewDidChange:(id)arg1 ;
-(void)updateContentEditableAttribute:(BOOL)arg1 ;
-(void)_dealloc;
-(void)delayedUpdateForKeyboardDidShow;
-(void)performBecomeEditableTasks;
-(BOOL)shouldAutoscrollAboveBottom;
-(void)updateAutoscrollAboveBottom;
-(void)setSelectionToEnd;
-(void)setClearsOnInsertion:(BOOL)arg1 ;
-(NSDictionary *)typingAttributes;
-(CGImageRef)newSnapshotWithRect:(CGRect)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(BOOL)shouldScrollEnclosingScrollView;
-(void)scrollRectToVisibleInContainingScrollView;
-(void)ensureSelection;
-(BOOL)_freezeTextContainerSize;
-(void)_updateForNewSize:(CGSize)arg1 withOldSize:(CGSize)arg2 ;
-(BOOL)shouldStartDataDetectors;
-(void)startDataDetectorsWithWebLock;
-(void)_transferAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4 ;
-(void)_transferTextViewPropertiesFromText:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(void)recalculateStyle;
-(void)cancelDataDetectorsWithWebLock;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned long long)_allowedLinkTypes;
-(BOOL)isPreviewing;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 font:(id)arg2 ;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)_setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(BOOL)clearsOnInsertion;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(void)setSelectionToStart;
-(CGRect)rectForSelection:(NSRange)arg1 ;
-(id)contentAsHTMLString;
-(int)marginTop;
-(void)setShouldAutoscrollAboveBottom:(BOOL)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(double)bottomBufferHeight;
-(void)setShowScrollerIndicators:(BOOL)arg1 ;
-(BOOL)showScrollerIndicators;
-(void)displayScrollerIndicators;
-(void)setAllowsRubberBanding:(BOOL)arg1 ;
-(void)setScrollingEnabled:(BOOL)arg1 ;
-(BOOL)scrollingEnabled;
-(void)setAllowsFourWayRubberBanding:(BOOL)arg1 ;
-(void)setScrollerIndicatorSubrect:(CGRect)arg1 ;
-(void)scrollToMakeCaretVisible:(BOOL)arg1 ;
-(void)_setFreezeTextContainerSize:(BOOL)arg1 ;
@end

