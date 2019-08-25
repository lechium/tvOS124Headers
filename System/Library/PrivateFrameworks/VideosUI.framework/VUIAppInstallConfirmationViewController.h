/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIAppLoadingViewController.h>

@protocol WLKInstallable;
@class VUIAppInstallConfirmationView, SSLookupItemOffer, NSString, UIBarButtonItem, UIButton, VUIAppInstallLockup;

@interface VUIAppInstallConfirmationViewController : VUIAppLoadingViewController {

	id<WLKInstallable> _installable;
	VUIAppInstallConfirmationView* _confirmationView;
	SSLookupItemOffer* _itemOffer;
	NSString* _updateTitle;
	NSString* _updateMessage;
	/*^block*/id _cancelationHandler;
	/*^block*/id _actionHandler;
	/*^block*/id _appStoreHandler;
	/*^block*/id _secondaryLinkHandler;
	unsigned long long _state;
	UIBarButtonItem* _barButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                          //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
@property (nonatomic,copy) id actionHandler;                               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) id appStoreHandler;                             //@synthesize appStoreHandler=_appStoreHandler - In the implementation block
@property (nonatomic,copy) id secondaryLinkHandler;                        //@synthesize secondaryLinkHandler=_secondaryLinkHandler - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton; 
@property (nonatomic,readonly) VUIAppInstallLockup * lockup; 
@property (assign,nonatomic) unsigned long long state;                     //@synthesize state=_state - In the implementation block
-(UIButton *)actionButton;
-(id)init;
-(unsigned long long)state;
-(void)setTitle:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)initWithInstallable:(id)arg1 ;
-(void)setUpdateTitle:(id)arg1 ;
-(void)setUpdateMessage:(id)arg1 ;
-(void)setCancelationHandler:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(void)setAppStoreHandler:(id)arg1 ;
-(void)setSecondaryLinkTitle:(id)arg1 ;
-(id)secondaryLinkHandler;
-(void)setSecondaryLinkHandler:(id)arg1 ;
-(void)setPreInstallState;
-(id)itemOffer;
-(void)setInstallingState;
-(VUIAppInstallLockup *)lockup;
-(void)_handleCancel;
-(void)_handleAppStore;
-(void)_handleSecondaryLink;
-(void)_handleAction;
-(void)_fetchAppInfo;
-(id)_namedRatingWithRatings:(id)arg1 ;
-(id)_fileSizeWithDeviceSizes:(id)arg1 ;
-(id)cancelationHandler;
-(id)actionHandler;
-(id)appStoreHandler;
@end

