//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTImageDownloadClientRequest : NSObject
{
    NSString *_uniqueId;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    NSString *_uuid;	// 40 = 0x28
}

+ (id)requestForUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100017da0
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;	// IMP=0x00000001000181ec
- (id)description;	// IMP=0x0000000100017ff4
- (id)initWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100017e60

@end

