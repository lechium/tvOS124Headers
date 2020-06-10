//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BKProcessTimes {
    double execTime;
    double beginUserCPUElapsedTime;
    double beginSystemCPUElapsedTime;
    double beginIdleCPUElapsedTime;
    double beginApplicationCPUElapsedTime;
};

struct mach_timespec {
    unsigned int _field1;
    int _field2;
};

struct memorystatus_memlimit_properties {
    int memlimit_active;
    unsigned int memlimit_active_attr;
    int memlimit_inactive;
    unsigned int memlimit_inactive_attr;
};

struct timespec {
    long long _field1;
    long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int backboardClient:1;
    unsigned int systemAppProcessAssertions:1;
    unsigned int unlimitedProcessAssertions:1;
    unsigned int voIPProcessAssertions:1;
    unsigned int newsstandProcessAssertions:1;
    unsigned int viewServices:1;
    unsigned int debugApplications:1;
    unsigned int applicationStateMonitor:1;
    unsigned int processJobSubmission:1;
    unsigned int assertionSystemShell:1;
    unsigned int terminationAssertion:1;
} CDStruct_4ae60f73;

