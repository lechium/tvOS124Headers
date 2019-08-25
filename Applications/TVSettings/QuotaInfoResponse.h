//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface QuotaInfoResponse : AAResponse
{
    _Bool _basicAccount;	// 32 = 0x20
    NSDictionary *_quotaInfo;	// 40 = 0x28
    NSDictionary *_storageInfo;	// 48 = 0x30
    NSDictionary *_urls;	// 56 = 0x38
    NSArray *_topToolbarItems;	// 64 = 0x40
    NSArray *_otherToolbarItems;	// 72 = 0x48
    NSDictionary *_accountStatus;	// 80 = 0x50
}

@property(readonly, nonatomic) NSDictionary *accountStatus; // @synthesize accountStatus=_accountStatus;
- (void).cxx_destruct;	// IMP=0x00000001000dae08
- (_Bool)hasPurchasedMoreStorage;	// IMP=0x00000001000dad94
- (id)storageFooter:(_Bool)arg1;	// IMP=0x00000001000dad8c
@property(readonly, nonatomic) NSNumber *availableStorageBytes;
@property(readonly, nonatomic) NSNumber *usedStorageBytes;
@property(readonly, nonatomic) NSString *availableStorageText;
@property(readonly, nonatomic) NSString *totalStorageText;
@property(readonly, nonatomic) NSString *appDetailsURLString;
@property(readonly, nonatomic) NSString *manageStorageURLString;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x00000001000da608

@end

