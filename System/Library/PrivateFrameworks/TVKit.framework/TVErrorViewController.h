/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, NSString;

@interface TVErrorViewController : UIViewController {

	UILabel* _headerLabel;
	UILabel* _errorMessageLabel;
	NSString* _headerTitle;
	NSString* _errorMessage;

}

@property (nonatomic,copy) NSString * headerTitle;               //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)_updateColors;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end
