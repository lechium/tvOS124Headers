/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIViewController;

@interface _TVSearchResultCell : UICollectionViewCell {

	UIViewController* _viewController;
	/*^block*/id _didFocusBlock;

}

@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id didFocusBlock;                                 //@synthesize didFocusBlock=_didFocusBlock - In the implementation block
-(id)didFocusBlock;
-(void)setDidFocusBlock:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)prepareForReuse;
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
@end

