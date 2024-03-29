/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITabBarController.h>
#import <libobjc.A.dylib/IKAppMenuBarDocumentDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate_Private.h>

@class IKViewElement, IKAppMenuBarDocument, NSArray, _TVPlayer, NSString;

@interface _TVMenuBarController : UITabBarController <IKAppMenuBarDocumentDelegate, UITabBarControllerDelegate, UITabBarControllerDelegate_Private> {

	IKViewElement* _menuBarTemplate;
	IKAppMenuBarDocument* _menuBarDocument;
	NSArray* _menuItemElements;
	unsigned long long _previousSelectedIndex;
	IKViewElement* _nowPlayingMenuItemElement;
	long long _nowPlayingMenuItemInsertionIndex;
	_TVPlayer* _nowPlayingPlayer;

}

@property (nonatomic,retain) IKViewElement * menuBarTemplate;                         //@synthesize menuBarTemplate=_menuBarTemplate - In the implementation block
@property (nonatomic,retain) IKAppMenuBarDocument * menuBarDocument;                  //@synthesize menuBarDocument=_menuBarDocument - In the implementation block
@property (nonatomic,copy) NSArray * menuItemElements;                                //@synthesize menuItemElements=_menuItemElements - In the implementation block
@property (assign,nonatomic) unsigned long long previousSelectedIndex;                //@synthesize previousSelectedIndex=_previousSelectedIndex - In the implementation block
@property (nonatomic,retain) IKViewElement * nowPlayingMenuItemElement;               //@synthesize nowPlayingMenuItemElement=_nowPlayingMenuItemElement - In the implementation block
@property (assign,nonatomic) long long nowPlayingMenuItemInsertionIndex;              //@synthesize nowPlayingMenuItemInsertionIndex=_nowPlayingMenuItemInsertionIndex - In the implementation block
@property (nonatomic,retain) _TVPlayer * nowPlayingPlayer;                            //@synthesize nowPlayingPlayer=_nowPlayingPlayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMenuItemElements:(NSArray *)arg1 ;
-(NSArray *)menuItemElements;
-(void)_updateNowPlayingPlayer:(id)arg1 ;
-(void)_playbackViewControllerWillPresent:(id)arg1 ;
-(BOOL)_shouldShowNowPlayingMenuItem;
-(long long)nowPlayingMenuItemInsertionIndex;
-(void)_configureViewController:(id)arg1 forMenuItemElement:(id)arg2 ;
-(void)_configureTabBarItem:(id)arg1 forMenuItemElement:(id)arg2 ;
-(unsigned long long)previousSelectedIndex;
-(void)setPreviousSelectedIndex:(unsigned long long)arg1 ;
-(IKAppMenuBarDocument *)menuBarDocument;
-(void)setMenuBarTemplate:(IKViewElement *)arg1 ;
-(void)setMenuBarDocument:(IKAppMenuBarDocument *)arg1 ;
-(void)setNowPlayingMenuItemElement:(IKViewElement *)arg1 ;
-(void)setNowPlayingMenuItemInsertionIndex:(long long)arg1 ;
-(_TVPlayer *)nowPlayingPlayer;
-(id)_fontForTextElement:(id)arg1 ;
-(void)setNowPlayingPlayer:(_TVPlayer *)arg1 ;
-(void)_playerDidChangeState:(id)arg1 ;
-(IKViewElement *)nowPlayingMenuItemElement;
-(void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2 ;
-(void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(BOOL)arg3 ;
-(IKViewElement *)menuBarTemplate;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(id)tabBarController:(id)arg1 animatorForFromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)updateWithViewElement:(id)arg1 ;
@end

