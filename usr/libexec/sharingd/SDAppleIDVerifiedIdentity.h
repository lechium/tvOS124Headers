//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SDAppleIDVerifiedIdentity : NSObject
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSString *_emailOrPhone;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *emailOrPhone; // @synthesize emailOrPhone=_emailOrPhone;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;	// IMP=0x000000010017df40
- (id)initWithAccountIdentifier:(id)arg1 emailOrPhone:(id)arg2;	// IMP=0x000000010017de6c

@end

