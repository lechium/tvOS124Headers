//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKLoginController : NSObject
{
    long long _environment;	// 8 = 0x8
}

+ (id)sharedLoginController;	// IMP=0x0000000100026f98
@property(nonatomic) long long environment; // @synthesize environment=_environment;
- (void)dismiss;	// IMP=0x00000001000270c4
- (void)presentWithUsername:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027054
- (id)init;	// IMP=0x0000000100027010

@end

