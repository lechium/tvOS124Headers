//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDictionaryDiff.h"

@interface MTDefaultsChangeNotifier : MTDictionaryDiff
{
    _Bool _running;	// 8 = 0x8
}

@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
- (void)_defaultsChanged;	// IMP=0x0000000100063420
- (void)stop;	// IMP=0x00000001000633a0
- (void)start;	// IMP=0x00000001000632ec
- (void)dealloc;	// IMP=0x0000000100063264
- (id)init;	// IMP=0x000000010006320c

@end

