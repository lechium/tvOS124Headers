//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class NSString, NSURLStorageTaskManager;

__attribute__((visibility("hidden")))
@interface NSURLStorageTask : NSBlockOperation
{
    NSURLStorageTaskManager *_taskManager;	// 40 = 0x28
    NSString *_keyForRequest;	// 48 = 0x30
}

@property(retain) NSString *keyForRequest; // @synthesize keyForRequest=_keyForRequest;
- (void).cxx_destruct;	// IMP=0x0000000100009970
- (void)endXPCTransaction;	// IMP=0x0000000100009940
- (void)beginXPCTransaction;	// IMP=0x000000010000992c
- (id)initWithTaskManager:(id)arg1;	// IMP=0x00000001000098ac
- (id)init;	// IMP=0x0000000100009878

@end

