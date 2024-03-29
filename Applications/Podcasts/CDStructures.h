//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct MZKeyValueStoreDataVerionPair {
    id _field1;
    id _field2;
};

struct NSMutableDictionary {
    Class _field1;
};

struct NSMutableSet {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int delegateStateChanged:1;
    unsigned int delegateErrorDidOccur:1;
    unsigned int delegateMediaTypeAvailable:1;
    unsigned int delegateDurationAvailable:1;
    unsigned int delegateCallbackForTime:1;
    unsigned int delegatePeriodicUpdate:1;
    unsigned int delegateHasDidChangePlayerItem:1;
    unsigned int delegateHasDidStopPlayerItem:1;
    unsigned int delegateHasDidEndedPlayerItem:1;
    unsigned int delegateLoadedDurationChanged:1;
    unsigned int delegateChapterStarted:1;
    unsigned int delegateCurrentManifestItemChanged:1;
} CDStruct_d823ae3d;

typedef struct {
    double snapshotTime;
    double startTime;
    double endTime;
    double duration;
    double elapsedDuration;
    float rate;
    float defaultRate;
    _Bool isLiveContent;
    _Bool isLoading;
} CDStruct_fce57115;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

