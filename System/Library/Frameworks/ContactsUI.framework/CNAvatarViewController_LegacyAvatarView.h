/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNAvatarViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class NSArray, CNContactStore, PRPersonaStore, CNAvatarView, NSString;

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate> {

	BOOL _threeDTouchEnabled;
	NSArray* _contacts;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	CNAvatarView* _avatarView;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                 //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                  //@synthesize personaStore=_personaStore - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;              //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contacts;
-(BOOL)isThreeDTouchEnabled;
-(PRPersonaStore *)personaStore;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(CNContactStore *)contactStore;
-(CNAvatarView *)avatarView;
-(id)descriptorForRequiredKeys;
-(void)setContacts:(id)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)loadView;
-(id)initWithSettings:(id)arg1 ;
@end
