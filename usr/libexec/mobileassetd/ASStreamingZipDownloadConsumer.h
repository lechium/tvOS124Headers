//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASDownloadConsumer.h"

@class NSString, NSURL, SZExtractor;

@interface ASStreamingZipDownloadConsumer : ASDownloadConsumer
{
    SZExtractor *_extractor;	// 24 = 0x18
    NSString *_expectedHash;	// 32 = 0x20
    long long _expectedSize;	// 40 = 0x28
    NSURL *_tmpPath;	// 48 = 0x30
}

- (void)finish;	// IMP=0x000000010000c24c
- (void)suspend;	// IMP=0x000000010000c0c4
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000bbdc
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x000000010000bb68
- (void)dealloc;	// IMP=0x000000010000baf8
- (id)initWithURL:(id)arg1 downloadSize:(long long)arg2 expectedHash:(id)arg3;	// IMP=0x000000010000ba58
- (void)_createExtractor;	// IMP=0x000000010000b8b4
- (id)_hashToString:(id)arg1;	// IMP=0x000000010000b7ec

@end

