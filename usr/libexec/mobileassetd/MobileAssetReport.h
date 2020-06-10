//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, NSString;

@interface MobileAssetReport : NSObject
{
    NSString *_assetType;	// 8 = 0x8
    long long _assetArchiveSizeBytes;	// 16 = 0x10
    NSDate *_downloadStartDate;	// 24 = 0x18
    NSDate *_verificationStartDate;	// 32 = 0x20
    NSDate *_unarchivingStartDate;	// 40 = 0x28
    NSCalendar *_calendar;	// 48 = 0x30
}

- (void)unarchivingDidFinish;	// IMP=0x0000000100006dc8
- (void)unarchivingDidStart;	// IMP=0x0000000100006d58
- (void)verificationDidFinish;	// IMP=0x0000000100006c5c
- (void)verificationDidStart;	// IMP=0x0000000100006bec
- (double)_processingRate:(id)arg1;	// IMP=0x0000000100006ba8
- (void)downloadDidFinish:(_Bool)arg1;	// IMP=0x0000000100006a50
- (void)downloadDidStart;	// IMP=0x00000001000068a8
- (void)dealloc;	// IMP=0x00000001000067fc
- (id)initWithAsset:(struct __MobileAsset *)arg1;	// IMP=0x000000010000672c

@end

