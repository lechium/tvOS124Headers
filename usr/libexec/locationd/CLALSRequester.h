//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBSessionRequester.h>

@interface CLALSRequester : PBSessionRequester
{
    int tag;	// 224 = 0xe0
    int type;	// 228 = 0xe4
    double timestamp;	// 232 = 0xe8
    _Bool processingCellTowers;	// 240 = 0xf0
    _Bool processingWirelessAPs;	// 241 = 0xf1
    _Bool finished;	// 242 = 0xf2
}

@property _Bool finished; // @synthesize finished;
@property _Bool processingWirelessAPs; // @synthesize processingWirelessAPs;
@property _Bool processingCellTowers; // @synthesize processingCellTowers;
@property double timestamp; // @synthesize timestamp;
@property int type; // @synthesize type;
@property int tag; // @synthesize tag;

@end

