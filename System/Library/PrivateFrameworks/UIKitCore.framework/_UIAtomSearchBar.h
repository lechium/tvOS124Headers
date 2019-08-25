/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISearchBar.h>
#import <UIKitCore/_UIAtomTextViewDelegateInternal.h>

@class _UISearchAtomTextView, UIFont, NSProgress, NSArray, NSString;

@interface _UIAtomSearchBar : UISearchBar <_UIAtomTextViewDelegateInternal> {

	_UISearchAtomTextView* _atomTextView;
	UIFont* _font;
	struct {
		unsigned delegateScopeButtonTitlesForRepresentedObject : 1;
		unsigned delegateSelectedScopeButtonIndexForRepresentedObject : 1;
		unsigned delegateSelectedScopeButtonIndexDidChangeForRepresentedObject : 1;
		unsigned delegateSearchButtonTapped : 1;
		unsigned delegateSupportedPasteboardTypes : 1;
		unsigned delegateRepresentedObjectsFromPasteboard : 1;
		unsigned delegateStoreRepresentedObjectsOnPasteboard : 1;
		unsigned showsScopeBar : 1;
		unsigned autoSelected : 1;
	}  _flags;
	BOOL _showsProgress;
	NSProgress* _progress;

}

@property (nonatomic,readonly) _UISearchAtomTextView * atomTextView; 
@property (assign,nonatomic,__weak) id<_UIAtomSearchBarDelegate> delegate; 
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,retain) NSProgress * progress;                                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL showsProgress;                                        //@synthesize showsProgress=_showsProgress - In the implementation block
@property (nonatomic,copy) NSArray * representedObjects; 
@property (nonatomic,copy,readonly) NSArray * selectedRepresentedObjects; 
@property (nonatomic,copy,readonly) NSString * currentEditingString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(void)dealloc;
-(void)setDelegate:(id<_UIAtomSearchBarDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setPlaceholder:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)_setMaskActive:(BOOL)arg1 ;
-(id)_searchBarTextField;
-(void)_setupSearchField;
-(id)placeholder;
-(id)_searchBarTextFieldOrMailReplacementView;
-(void)_updateMagnifyingGlassView;
-(void)_setBackdropStyle:(unsigned long long)arg1 ;
-(void)reloadInputViews;
-(BOOL)canResignFirstResponder;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSProgress *)progress;
-(_UISearchAtomTextView *)atomTextView;
-(id)_textColor:(BOOL)arg1 ;
-(id)_glyphAndPlaceholderColor:(BOOL)arg1 ;
-(NSArray *)representedObjects;
-(void)setRepresentedObjects:(NSArray *)arg1 ;
-(NSArray *)selectedRepresentedObjects;
-(NSString *)currentEditingString;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(BOOL)arg2 ;
-(void)_atomTextViewBeginEditing;
-(void)_atomTextViewEditingChanged;
-(void)_atomTextViewEndEditing;
-(void)_atomTextViewReturnPressed;
-(void)_setupAtomTextView;
-(id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2 ;
-(void)atomTextViewDidChangeSelection:(id)arg1 ;
-(id)supportedPasteboardTypesForAtomTextView:(id)arg1 ;
-(id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2 ;
-(BOOL)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3 ;
-(BOOL)_atomTextView:(id)arg1 shouldReplaceRepresentedObject:(id)arg2 replacementText:(id)arg3 ;
-(void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 ;
-(BOOL)showsProgress;
-(void)setShowsProgress:(BOOL)arg1 ;
@end

