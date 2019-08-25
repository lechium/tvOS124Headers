//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACSURLSession, NSHashTable, NSObject<OS_dispatch_semaphore>;

@interface TVIAssetDownloadManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_concurrentDownloadsSemaphore;	// 8 = 0x8
    ACSURLSession *_downloadSession;	// 16 = 0x10
    NSHashTable *_downloadTasks;	// 24 = 0x18
}

@property(retain, nonatomic) NSHashTable *downloadTasks; // @synthesize downloadTasks=_downloadTasks;
@property(retain, nonatomic) ACSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *concurrentDownloadsSemaphore; // @synthesize concurrentDownloadsSemaphore=_concurrentDownloadsSemaphore;
- (void).cxx_destruct;	// IMP=0x0000000100013d54
- (void)downloadAssetAtURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000132e0
- (void)cancelDownloads;	// IMP=0x00000001000131c4
- (id)mostRecentDownloadDate;	// IMP=0x000000010001313c
- (long long)assetDownloadInterval;	// IMP=0x0000000100013058
- (id)init;	// IMP=0x0000000100012f18

@end
