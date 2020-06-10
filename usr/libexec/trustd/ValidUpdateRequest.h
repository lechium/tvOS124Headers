//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

__attribute__((visibility("hidden")))
@interface ValidUpdateRequest : NSObject
{
    double _updateScheduled;	// 8 = 0x8
    NSURLSession *_backgroundSession;	// 16 = 0x10
}

@property(retain) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property double updateScheduled; // @synthesize updateScheduled=_updateScheduled;
- (void).cxx_destruct;	// IMP=0x000000010001fe80
- (_Bool)scheduleUpdateFromServer:(id)arg1 forVersion:(unsigned long long)arg2 withQueue:(id)arg3;	// IMP=0x000000010001fd1c
- (void)createSession:(id)arg1 forServer:(id)arg2;	// IMP=0x000000010001fb78
- (id)validUpdateConfiguration;	// IMP=0x000000010001f8fc

@end
