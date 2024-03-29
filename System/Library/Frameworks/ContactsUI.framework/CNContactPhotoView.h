/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CNPresenterDelegate, CNContactPhotoViewDelegate;
@class NSArray, CNAvatarView, CNMutableContact, PRLikeness, UIButton, UIImageView, UILongPressGestureRecognizer, NSString;

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNAvatarViewDelegate> {

	BOOL _editing;
	BOOL _modified;
	BOOL _isAnimatingBounce;
	NSArray* _contacts;
	CNAvatarView* _avatarView;
	id<CNPresenterDelegate> _delegate;
	id<CNContactPhotoViewDelegate> _photoViewDelegate;
	CNMutableContact* _pendingEditContact;
	PRLikeness* _originalLikeness;
	PRLikeness* _currentLikeness;
	UIButton* _addPhotoButton;
	UIButton* _editPhotoButton;
	UIImageView* _attributionImageView;
	NSArray* _variableConstraints;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,retain) CNMutableContact * pendingEditContact;                                  //@synthesize pendingEditContact=_pendingEditContact - In the implementation block
@property (nonatomic,retain) PRLikeness * originalLikeness;                                          //@synthesize originalLikeness=_originalLikeness - In the implementation block
@property (nonatomic,retain) PRLikeness * currentLikeness;                                           //@synthesize currentLikeness=_currentLikeness - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIButton * addPhotoButton;                                              //@synthesize addPhotoButton=_addPhotoButton - In the implementation block
@property (nonatomic,retain) UIButton * editPhotoButton;                                             //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,retain) UIImageView * attributionImageView;                                     //@synthesize attributionImageView=_attributionImageView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingBounce;                                                 //@synthesize isAnimatingBounce=_isAnimatingBounce - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                          //@synthesize modified=_modified - In the implementation block
@property (nonatomic,retain) NSArray * variableConstraints;                                          //@synthesize variableConstraints=_variableConstraints - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                     //@synthesize contacts=_contacts - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPhotoViewDelegate> photoViewDelegate;                //@synthesize photoViewDelegate=_photoViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedPasteboardTypes;
+(BOOL)requiresConstraintBasedLayout;
-(NSArray *)contacts;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2 ;
-(BOOL)modified;
-(CNMutableContact *)mutableContact;
-(NSArray *)variableConstraints;
-(id)initWithFrame:(CGRect)arg1 monogrammerStyle:(long long)arg2 ;
-(void)setPhotoViewDelegate:(id<CNContactPhotoViewDelegate>)arg1 ;
-(void)updatePhoto;
-(void)resetPhoto;
-(void)saveEdits;
-(void)updateFontSizes;
-(void)menuWillHide:(id)arg1 ;
-(void)disablePhotoTapGesture;
-(void)_presentPhotoEditingSheet;
-(void)avatarTapped:(id)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(void)setVariableConstraints:(NSArray *)arg1 ;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(CNMutableContact *)pendingEditContact;
-(void)_zoomContactPhoto;
-(void)setHighlightedFrame:(BOOL)arg1 ;
-(id)currentImageData;
-(void)setModified:(BOOL)arg1 ;
-(void)setPendingEditContact:(CNMutableContact *)arg1 ;
-(void)setCurrentLikeness:(PRLikeness *)arg1 ;
-(void)setOriginalLikeness:(PRLikeness *)arg1 ;
-(BOOL)_isUsingCuratedPhoto;
-(UIButton *)addPhotoButton;
-(UIButton *)editPhotoButton;
-(void)updateAttributionBadge;
-(id<CNContactPhotoViewDelegate>)photoViewDelegate;
-(UIImageView *)attributionImageView;
-(void)setAttributionImageView:(UIImageView *)arg1 ;
-(id)_createImagePicker;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)_presentFullScreenPhoto:(id)arg1 ;
-(void)_bounceSmallPhoto;
-(id)previewPath;
-(BOOL)isAnimatingBounce;
-(void)setIsAnimatingBounce:(BOOL)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(BOOL)isMeContact;
-(id)_localizedStringForProfileAction:(id)arg1 type:(id)arg2 ;
-(PRLikeness *)originalLikeness;
-(PRLikeness *)currentLikeness;
-(void)setAddPhotoButton:(UIButton *)arg1 ;
-(void)setEditPhotoButton:(UIButton *)arg1 ;
-(CNAvatarView *)avatarView;
-(id)contact;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(id<CNPresenterDelegate>)delegate;
-(void)updateConstraints;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end

