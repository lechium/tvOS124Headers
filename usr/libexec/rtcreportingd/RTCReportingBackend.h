//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface RTCReportingBackend : NSObject
{
    NSDictionary *_profile;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    int _state;	// 24 = 0x18
    NSString *_productVersion;	// 32 = 0x20
    NSString *_buildVersion;	// 40 = 0x28
    NSString *_hardwareType;	// 48 = 0x30
    NSString *_productFamily;	// 56 = 0x38
    double _startTimeStamp;	// 64 = 0x40
    unsigned int _sessionID;	// 72 = 0x48
    NSString *_combinedSessionIDString;	// 80 = 0x50
    int _compType;	// 88 = 0x58
    unsigned short _clientVersion;	// 92 = 0x5c
    unsigned short _eventID;	// 94 = 0x5e
    unsigned char _selfVersionMajor;	// 96 = 0x60
    unsigned char _selfVersionMiddle;	// 97 = 0x61
    unsigned char _selfVersionMinor;	// 98 = 0x62
    unsigned char _isInternal;	// 99 = 0x63
    unsigned char _requireUserInfo;	// 100 = 0x64
    unsigned char _shouldUseWiFiOnly;	// 101 = 0x65
    unsigned int _totalBytesSent;	// 104 = 0x68
    unsigned int _bytesSentSinceLastReport;	// 108 = 0x6c
    NSDictionary *_userInfoDict;	// 112 = 0x70
    unsigned char _batchEvents;	// 120 = 0x78
    char *_udid;	// 128 = 0x80
    NSString *_displayURL;	// 136 = 0x88
    double _samplingFactor;	// 144 = 0x90
    NSNumber *_samplingThreshold;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_stateQueue;	// 160 = 0xa0
    NSArray *_eventWhitelist;	// 168 = 0xa8
    NSArray *_eventBlacklist;	// 176 = 0xb0
    NSData *_digestKey;	// 184 = 0xb8
    int _digestAlgorithm;	// 192 = 0xc0
    id _reportingSessionConnectivityDelegate;	// 200 = 0xc8
    _Bool _allowNestedData;	// 208 = 0xd0
    unsigned char _includeSessionIDInHeader;	// 209 = 0xd1
}

+ (id)newBackendWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3 clientType:(int)arg4;	// IMP=0x00000001000010ac
@property(retain) NSArray *eventBlacklist; // @synthesize eventBlacklist=_eventBlacklist;
@property(retain) NSArray *eventWhitelist; // @synthesize eventWhitelist=_eventWhitelist;
@property _Bool allowNestedData; // @synthesize allowNestedData=_allowNestedData;
@property int digestAlgorithm; // @synthesize digestAlgorithm=_digestAlgorithm;
@property(copy) NSData *digestKey; // @synthesize digestKey=_digestKey;
@property(retain) NSNumber *samplingThreshold; // @synthesize samplingThreshold=_samplingThreshold;
@property double samplingFactor; // @synthesize samplingFactor=_samplingFactor;
@property unsigned char batchEvents; // @synthesize batchEvents=_batchEvents;
@property unsigned char requireUserInfo; // @synthesize requireUserInfo=_requireUserInfo;
@property(copy) NSDictionary *userInfoDict; // @synthesize userInfoDict=_userInfoDict;
@property unsigned char isInternal; // @synthesize isInternal=_isInternal;
@property(copy) NSString *productFamily; // @synthesize productFamily=_productFamily;
@property(copy) NSString *hardwareType; // @synthesize hardwareType=_hardwareType;
@property(copy) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(copy) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(copy) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property(copy) NSString *name; // @synthesize name=_name;
@property char *udid; // @synthesize udid=_udid;
@property unsigned short clientVersion; // @synthesize clientVersion=_clientVersion;
@property int compType; // @synthesize compType=_compType;
@property(copy) NSString *combinedSessionIDString; // @synthesize combinedSessionIDString=_combinedSessionIDString;
@property unsigned int sessionID; // @synthesize sessionID=_sessionID;
- (unsigned long long)batchedEventsSize;	// IMP=0x0000000100001cb4
- (_Bool)isBlacklistedEvent:(unsigned short)arg1;	// IMP=0x0000000100001b68
- (_Bool)isWhitelistedEvent:(unsigned short)arg1;	// IMP=0x0000000100001a30
- (void)setCorrelatedSessionID:(id)arg1;	// IMP=0x0000000100001a24
- (_Bool)uploadLogData:(id)arg1;	// IMP=0x0000000100001a1c
- (_Bool)uploadFileAtPath:(id)arg1 extensionToken:(char *)arg2;	// IMP=0x0000000100001a14
- (id)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000019e8
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 flag:(int)arg5;	// IMP=0x00000001000019c0
- (void)setStartTimestamp:(const struct timeval *)arg1;	// IMP=0x0000000100001990
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x0000000100001988
- (int)updateState;	// IMP=0x0000000100001964
@property int state;
- (void)setSelfVersion:(id)arg1;	// IMP=0x00000001000016a8
- (void)setReportingSessionConnectivityDelegate:(id)arg1;	// IMP=0x0000000100001694
- (void)dealloc;	// IMP=0x0000000100001520
- (void)cleanup;	// IMP=0x000000010000151c
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x0000000100001428
- (id)convertIntoSHA256:(id)arg1;	// IMP=0x0000000100001338

@end

