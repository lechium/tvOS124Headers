//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface UDPPacketToSend : NSObject
{
    int _state;	// 8 = 0x8
    int _numberOfChecks;	// 12 = 0xc
    int _numberOfRetransmits;	// 16 = 0x10
    unsigned short _eventNumber;	// 20 = 0x14
    NSData *_data;	// 24 = 0x18
}

@property(retain) NSData *data; // @synthesize data=_data;
@property unsigned short eventNumber; // @synthesize eventNumber=_eventNumber;
@property int numberOfRetransmits; // @synthesize numberOfRetransmits=_numberOfRetransmits;
@property int numberOfChecks; // @synthesize numberOfChecks=_numberOfChecks;
@property int state; // @synthesize state=_state;
- (void)dealloc;	// IMP=0x000000010000c654
- (id)initWithBytes:(char *)arg1 length:(unsigned short)arg2 eventNum:(unsigned short)arg3;	// IMP=0x000000010000c5b8

@end

