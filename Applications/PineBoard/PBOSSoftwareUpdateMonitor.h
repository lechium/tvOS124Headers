//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface PBOSSoftwareUpdateMonitor : NSObject
{
    _Bool _isInternalBuild;	// 8 = 0x8
    _Bool _isRestore;	// 9 = 0x9
    _Bool _triggeredManually;	// 10 = 0xa
    NSURL *_baseURL;	// 16 = 0x10
    NSString *_fromOSBuild;	// 24 = 0x18
    NSString *_fromHDMI;	// 32 = 0x20
    NSString *_toOSBuild;	// 40 = 0x28
    NSString *_uuid;	// 48 = 0x30
}

+ (id)_instance;	// IMP=0x000000010008e7a8
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010008e794
+ (id)lastRestoreFilePath;	// IMP=0x000000010008e0f8
+ (void)noteStage:(id)arg1;	// IMP=0x000000010008e084
+ (void)prepareForUpdateToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x000000010008dff8
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property _Bool triggeredManually; // @synthesize triggeredManually=_triggeredManually;
@property _Bool isRestore; // @synthesize isRestore=_isRestore;
@property _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(copy, nonatomic) NSString *toOSBuild; // @synthesize toOSBuild=_toOSBuild;
@property(copy, nonatomic) NSString *fromHDMI; // @synthesize fromHDMI=_fromHDMI;
@property(copy, nonatomic) NSString *fromOSBuild; // @synthesize fromOSBuild=_fromOSBuild;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;	// IMP=0x000000010008fbc4
- (_Bool)_isFinalStage:(id)arg1;	// IMP=0x000000010008f9e0
- (_Bool)_isFailedStage:(id)arg1;	// IMP=0x000000010008f8e4
- (_Bool)_isCancelStage:(id)arg1;	// IMP=0x000000010008f860
- (void)_processAppRestart;	// IMP=0x000000010008f544
- (void)_processUpdateAttemptCompleted;	// IMP=0x000000010008f3c0
- (void)_issueRequestForStage:(id)arg1 withProperties:(id)arg2 retryDelay:(long long)arg3;	// IMP=0x000000010008f034
- (void)_noteStage:(id)arg1;	// IMP=0x000000010008eae0
- (void)_processNewUpdateAttemptToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x000000010008e83c
- (id)init;	// IMP=0x000000010008e1fc

@end
