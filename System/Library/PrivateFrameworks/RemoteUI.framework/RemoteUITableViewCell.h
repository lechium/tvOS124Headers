/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UIView, UIButton, UIColor;

@interface RemoteUITableViewCell : UITableViewCell {

	UIImageView* _invalidRowView;
	BOOL _leftAlignDetailLabel;
	BOOL _didSetupEditableTextFieldLargeText;
	long long _remoteUIAccessoryType;
	UIView* _remoteUIAccessoryView;
	UIButton* _detailLinkButton;
	/*^block*/id _detailLinkHandler;
	UIColor* _accessoryColor;
	BOOL _forceFullSizeDetailLabel;
	BOOL _activityIndicatorVisible;
	CGSize _imageSize;

}

@property (assign,nonatomic) BOOL forceFullSizeDetailLabel;                //@synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel - In the implementation block
@property (assign,nonatomic) BOOL leftAlignDetailLabel;                    //@synthesize leftAlignDetailLabel=_leftAlignDetailLabel - In the implementation block
@property (assign,nonatomic) long long remoteUIAccessoryType;              //@synthesize remoteUIAccessoryType=_remoteUIAccessoryType - In the implementation block
@property (nonatomic,retain) UIView * remoteUIAccessoryView;               //@synthesize remoteUIAccessoryView=_remoteUIAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL activityIndicatorVisible;                //@synthesize activityIndicatorVisible=_activityIndicatorVisible - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
-(void)setDetailLinkText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setRemoteUIAccessoryView:(UIView *)arg1 ;
-(void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2 ;
-(void)_accessoriesChanged;
-(void)_showActivityIndicatorAccessory;
-(void)_detailLinkPressed;
-(long long)remoteUIAccessoryType;
-(void)setRemoteUIAccessoryType:(long long)arg1 ;
-(id)detailLinkButton;
-(void)setRowInvalid:(BOOL)arg1 ;
-(BOOL)forceFullSizeDetailLabel;
-(void)setForceFullSizeDetailLabel:(BOOL)arg1 ;
-(BOOL)leftAlignDetailLabel;
-(void)setLeftAlignDetailLabel:(BOOL)arg1 ;
-(UIView *)remoteUIAccessoryView;
-(BOOL)activityIndicatorVisible;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(CGSize)imageSize;
-(id)editableTextField;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
@end

