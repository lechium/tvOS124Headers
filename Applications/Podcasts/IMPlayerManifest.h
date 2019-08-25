//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMPlayerItem, NSObject<OS_dispatch_queue>, NSString, NSUserActivity;

@interface IMPlayerManifest : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    unsigned long long _currentIndex;	// 24 = 0x18
    IMPlayerItem *_currentItem;	// 32 = 0x20
    NSUserActivity *_activity;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (void)registerManifestForRestoration:(Class)arg1;	// IMP=0x00000001001f1208
+ (id)_activityType;	// IMP=0x00000001001f113c
+ (id)activityTypeSuffix;	// IMP=0x00000001001f1134
+ (id)supportedActivityTypes;	// IMP=0x00000001001f1120
+ (id)restoreActivity:(id)arg1;	// IMP=0x00000001001f101c
+ (id)createManifestForActivity:(id)arg1;	// IMP=0x00000001001f1014
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSUserActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) IMPlayerItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x00000001001f1570
- (id)description;	// IMP=0x00000001001f1324
- (void)postManifestDidChangeNotification;	// IMP=0x00000001001f12cc
- (void)nextManifest:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f0e68
@property(readonly, nonatomic) unsigned long long count;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000001001f0cd8
- (void)previous;	// IMP=0x00000001001f0a04
- (_Bool)hasPrevious;	// IMP=0x00000001001f09e0
- (void)next;	// IMP=0x00000001001f0984
- (_Bool)hasNext;	// IMP=0x00000001001f0940
- (void)_load;	// IMP=0x00000001001f093c
- (void)load:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f07bc
- (id)init;	// IMP=0x00000001001f06b0

@end
