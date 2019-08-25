/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextField.h>
#import <UIKitCore/_UISearchBarTextFieldOrMailReplacement.h>

@class NSMutableDictionary, NSValue, _UISearchBarSearchFieldBackgroundView, NSString;

@interface UISearchBarTextField : UITextField <_UISearchBarTextFieldOrMailReplacement> {

	NSMutableDictionary* _customClearButtons;
	NSMutableDictionary* _iconOffsets;
	NSValue* _searchTextOffsetValue;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundTop;
	_UISearchBarSearchFieldBackgroundView* _effectBackgroundBottom;
	BOOL _deferringFirstResponder;
	BOOL _animatePlaceholderOnResignFirstResponder;
	struct {
		unsigned delegateWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged : 1;
	}  _searchBarTextFieldFlags;
	BOOL __preventSelectionViewActivation;
	long long __textInputSource;

}

@property (setter=_setSearchTextOffetValue:,nonatomic,retain) NSValue * _searchTextOffsetValue; 
@property (assign,setter=_setPreventSelectionViewActivation:,nonatomic) BOOL _preventSelectionViewActivation;              //@synthesize _preventSelectionViewActivation=__preventSelectionViewActivation - In the implementation block
@property (assign,nonatomic) long long _textInputSource;                                                                   //@synthesize _textInputSource=__textInputSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(BOOL)canBecomeFocused;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(id)textInputTraits;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg1 ;
-(void)_setBackgroundViewsAlpha:(double)arg1 ;
-(void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setSearchTextOffetValue:(id)arg1 ;
-(NSValue *)_searchTextOffsetValue;
-(void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2 ;
-(id)_offsetValueForIcon:(long long)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(void)updateForBackdropStyle:(unsigned long long)arg1 ;
-(void)_removeEffectsBackgroundViews;
-(void)_setPreventSelectionViewActivation:(BOOL)arg1 ;
-(void)_activateSelectionView;
-(BOOL)canResignFirstResponder;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)_textInputSource;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg1 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(id)_clearButtonImageForState:(unsigned long long)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustedTextOrEditingRect:(CGRect)arg1 forBounds:(CGRect)arg2 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_searchIconViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_bookmarkViewRectForBounds:(CGRect)arg1 ;
-(CGRect)_adjustmentsForSearchIconViewRectForBounds:(CGRect)arg1 ;
-(BOOL)_shouldCenterPlaceholder;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(BOOL)_becomeFirstResponderWhenPossible;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(CGRect)_suffixFrame;
-(id)_placeholderColor;
-(void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3 ;
-(void)_applyHighlightedAnimated:(BOOL)arg1 ;
-(id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(BOOL)_preventSelectionViewActivation;
-(void)_becomeFirstResponder;
-(void)insertTextSuggestion:(id)arg1 ;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(long long)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(long long)_blurEffectStyle;
-(BOOL)_textShouldFillFieldEditorHeight;
-(void)set_textInputSource:(long long)arg1 ;
@end

