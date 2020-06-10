//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerCredential, NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation
{
    _Bool _loginDisabled;	// 8 = 0x8
    _Bool _passwordChangeRequired;	// 9 = 0x9
    _Bool _shouldShowLinkAccountsUI;	// 10 = 0xa
    GKPlayerCredential *_credential;	// 16 = 0x10
    NSURL *_passwordChangeURL;	// 24 = 0x18
    NSString *_alertTitle;	// 32 = 0x20
    NSString *_alertMessage;	// 40 = 0x28
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010004634c
@property(retain, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) _Bool shouldShowLinkAccountsUI; // @synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI;
@property(retain, nonatomic) NSURL *passwordChangeURL; // @synthesize passwordChangeURL=_passwordChangeURL;
@property(nonatomic) _Bool passwordChangeRequired; // @synthesize passwordChangeRequired=_passwordChangeRequired;
@property(nonatomic) _Bool loginDisabled; // @synthesize loginDisabled=_loginDisabled;
@property(retain, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
- (void)dealloc;	// IMP=0x00000001000462b4

@end

