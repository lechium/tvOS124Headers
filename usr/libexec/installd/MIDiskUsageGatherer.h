//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MIDiskUsageGatherer : NSObject
{
    _Bool _calcStatic;	// 8 = 0x8
    _Bool _calcDynamic;	// 9 = 0x9
    _Bool _calcShared;	// 10 = 0xa
    NSArray *_identifiers;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool calcShared; // @synthesize calcShared=_calcShared;
@property(readonly, nonatomic) _Bool calcDynamic; // @synthesize calcDynamic=_calcDynamic;
@property(readonly, nonatomic) _Bool calcStatic; // @synthesize calcStatic=_calcStatic;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;	// IMP=0x0000000100017380
- (id)gatherUsageInfoWithError:(id *)arg1;	// IMP=0x00000001000170bc
- (id)_gatherForIdentifier:(id)arg1;	// IMP=0x0000000100016ac4
- (id)initWithIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x0000000100016968

@end

