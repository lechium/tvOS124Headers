//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SFRemoteHotspotDevice;

__attribute__((visibility("hidden")))
@interface SDHotspotRequestRecord : NSObject
{
    NSDate *_startTime;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    SFRemoteHotspotDevice *_remoteHotspotDevice;	// 24 = 0x18
}

@property(retain) SFRemoteHotspotDevice *remoteHotspotDevice; // @synthesize remoteHotspotDevice=_remoteHotspotDevice;
@property(retain) NSString *requestID; // @synthesize requestID=_requestID;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;	// IMP=0x000000010001690c
- (id)initWithHotspotDevice:(id)arg1 startTime:(id)arg2 requestID:(id)arg3;	// IMP=0x00000001000167d0

@end
