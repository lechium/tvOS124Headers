//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDEnrollmentRecord : NSObject
{
    NSString *_cachedCredential;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000010003a374
@property(retain, nonatomic) NSString *cachedCredential; // @synthesize cachedCredential=_cachedCredential;
- (void).cxx_destruct;	// IMP=0x000000010003ab3c
- (_Bool)deleteCredential;	// IMP=0x000000010003aa08
- (id)copyCredential;	// IMP=0x000000010003a7ec
- (_Bool)saveCredential:(id)arg1;	// IMP=0x000000010003a510
- (id)newSearchDictionary;	// IMP=0x000000010003a3f4

@end
