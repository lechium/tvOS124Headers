//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ASDownloadConsumer.h"

@interface ASFileDownloadConsumer : ASDownloadConsumer
{
    int _fd;	// 24 = 0x18
}

- (void)finish;	// IMP=0x000000010000b7b4
- (void)suspend;	// IMP=0x000000010000b7b0
- (_Bool)consumeData:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000b530
- (void)resumeAtOffset:(long long)arg1;	// IMP=0x000000010000b428
- (_Bool)_openOutputFile;	// IMP=0x000000010000b2b4
- (void)dealloc;	// IMP=0x000000010000b260
- (id)initWithURL:(id)arg1;	// IMP=0x000000010000b1e0

@end

