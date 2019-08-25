/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class IKViewElement, OBPrivacyLinkController;

@interface _TVPrivacyLinkViewController : UIViewController {

	IKViewElement* _viewElement;
	OBPrivacyLinkController* _impl;

}

@property (nonatomic,retain) OBPrivacyLinkController * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;               //@synthesize viewElement=_viewElement - In the implementation block
-(OBPrivacyLinkController *)impl;
-(void)setImpl:(OBPrivacyLinkController *)arg1 ;
-(void)loadView;
-(IKViewElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
@end
