//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FilterQuery : NSObject
{
    NSString *_subsystem;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
}

@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *category; // @synthesize category=_category;
@property(readonly) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (void).cxx_destruct;	// IMP=0x0000000100002dfc
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;	// IMP=0x0000000100002ce4

@end

