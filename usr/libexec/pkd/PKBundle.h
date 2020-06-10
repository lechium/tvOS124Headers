//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_xpc_object;

@interface PKBundle : NSObject
{
    NSString *_supportPath;	// 8 = 0x8
    NSObject<OS_xpc_object> *__bundle;	// 16 = 0x10
}

@property(retain) NSObject<OS_xpc_object> *_bundle; // @synthesize _bundle=__bundle;
- (void).cxx_destruct;	// IMP=0x000000010001513c
@property(readonly) NSString *plugInsPath;
@property(readonly) NSString *executablePath;
- (id)bundleDirectory:(id)arg1;	// IMP=0x0000000100015018
@property(readonly) NSString *supportPath; // @synthesize supportPath=_supportPath;
@property(readonly) NSString *path;
@property(readonly) NSURL *url;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSDictionary *infoDictionary;
- (id)stringProperty:(int)arg1;	// IMP=0x0000000100014c18
- (id)initWithXPCBundle:(id)arg1;	// IMP=0x0000000100014ba4
- (id)initWithExecutablePath:(id)arg1;	// IMP=0x0000000100014af4
- (id)initWithExecutableURL:(id)arg1;	// IMP=0x0000000100014a98
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100014a10
- (id)initWithURL:(id)arg1;	// IMP=0x00000001000149b4
- (id)initForMainBundle;	// IMP=0x000000010001496c

@end
