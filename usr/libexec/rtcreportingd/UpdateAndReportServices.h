//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UpdateAndReportServices : NSObject
{
    _Bool _update;	// 8 = 0x8
    _Bool _report;	// 9 = 0x9
    CDUnknownBlockType _block;	// 16 = 0x10
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly) _Bool report; // @synthesize report=_report;
@property(readonly) _Bool update; // @synthesize update=_update;
- (void)dealloc;	// IMP=0x000000010000100c
- (id)initWithServices:(_Bool)arg1 needToReport:(_Bool)arg2 service:(CDUnknownBlockType)arg3;	// IMP=0x0000000100000f84

@end

