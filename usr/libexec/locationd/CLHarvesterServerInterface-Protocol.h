//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PBCodable;

@protocol CLHarvesterServerInterface
- (void)fetchStateWithReply:(void (^)(NSDictionary *))arg1;
- (void)submitSample:(PBCodable *)arg1;
@end

