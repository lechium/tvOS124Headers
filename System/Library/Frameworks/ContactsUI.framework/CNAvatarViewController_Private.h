/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CNContactStore, PRPersonaStore;


@protocol CNAvatarViewController_Private <NSObject>
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) PRPersonaStore * personaStore; 
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled; 
@required
-(BOOL)isThreeDTouchEnabled;
-(PRPersonaStore *)personaStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1;
-(CNContactStore *)contactStore;

@end

