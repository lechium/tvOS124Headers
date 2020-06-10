//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLIntersiloService.h"

#import "CLLocationManagerRoutineServerInterface-Protocol.h"
#import "CLRoutineMonitorServiceProtocol-Protocol.h"
#import "CLSuggestedActionClientProtocol-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CLLocation, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSXPCConnection, NSXPCListener, RTRoutineManager;
@protocol CLSuggestedActionServiceProtocol, OS_dispatch_source;

@interface CLRoutineMonitor : CLIntersiloService <CLSuggestedActionClientProtocol, NSXPCListenerDelegate, CLLocationManagerRoutineServerInterface, CLRoutineMonitorServiceProtocol>
{
    NSObject<OS_dispatch_source> *_wakeRoutinedTimer;	// 8 = 0x8
    struct CLServiceLocationProvider *_serviceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;	// 24 = 0x18
    struct unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client>> _clientManagerClient;	// 32 = 0x20
    struct unique_ptr<CLFilteredLocationController_Type::Client, std::__1::default_delete<CLFilteredLocationController_Type::Client>> _filteredLocationClient;	// 40 = 0x28
    struct unique_ptr<CLWifiService_Type::Client, std::__1::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 48 = 0x30
    struct unique_ptr<CLLocationAwarenessProvider_Type::Client, std::__1::default_delete<CLLocationAwarenessProvider_Type::Client>> _awarenessClient;	// 56 = 0x38
    struct RegInfo _awarenessRegInfo;	// 64 = 0x40
    _Bool _updating;	// 112 = 0x70
    _Bool _updatingPredictedApplications;	// 113 = 0x71
    _Bool _authorized;	// 114 = 0x72
    _Bool _armed;	// 115 = 0x73
    _Bool _diminishedMode;	// 116 = 0x74
    NSXPCConnection *_connection;	// 120 = 0x78
    NSMutableArray *_locations;	// 128 = 0x80
    CLLocation *_lastLocation;	// 136 = 0x88
    NSArray *_predictedApplications;	// 144 = 0x90
    NSXPCListener *_listener;	// 152 = 0x98
    RTRoutineManager *_routineManager;	// 160 = 0xa0
    NSMutableSet *_visitClients;	// 168 = 0xa8
    NSMutableSet *_leechClients;	// 176 = 0xb0
    NSMutableSet *_lowConfidenceVisitLeechClients;	// 184 = 0xb8
    NSMutableDictionary *_scenarioTriggerClients;	// 192 = 0xc0
    id <CLSuggestedActionServiceProtocol> _suggestedActionManager;	// 200 = 0xc8
}

+ (id)bundlePath;	// IMP=0x0000000100555940
+ (id)getSilo;	// IMP=0x00000001005558c0
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000010055589c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0000000100555818
+ (_Bool)isSupported;	// IMP=0x0000000100555740
@property(retain, nonatomic) id <CLSuggestedActionServiceProtocol> suggestedActionManager; // @synthesize suggestedActionManager=_suggestedActionManager;
@property(retain, nonatomic) NSMutableDictionary *scenarioTriggerClients; // @synthesize scenarioTriggerClients=_scenarioTriggerClients;
@property(retain, nonatomic) NSMutableSet *lowConfidenceVisitLeechClients; // @synthesize lowConfidenceVisitLeechClients=_lowConfidenceVisitLeechClients;
@property(retain, nonatomic) NSMutableSet *leechClients; // @synthesize leechClients=_leechClients;
@property(retain, nonatomic) NSMutableSet *visitClients; // @synthesize visitClients=_visitClients;
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(nonatomic) _Bool diminishedMode; // @synthesize diminishedMode=_diminishedMode;
@property(nonatomic) _Bool armed; // @synthesize armed=_armed;
@property(nonatomic) _Bool authorized; // @synthesize authorized=_authorized;
@property(nonatomic) _Bool updatingPredictedApplications; // @synthesize updatingPredictedApplications=_updatingPredictedApplications;
@property(nonatomic) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSArray *predictedApplications; // @synthesize predictedApplications=_predictedApplications;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id).cxx_construct;	// IMP=0x000000010055aed4
- (void).cxx_destruct;	// IMP=0x000000010055ae10
- (void)onPredictedApplications:(id)arg1;	// IMP=0x000000010055ac14
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010055aa7c
- (void)_sendPredictedApplications;	// IMP=0x000000010055a9f4
- (void)stopUpdatingPredictedApplications;	// IMP=0x000000010055a8c4
- (void)startUpdatingPredictedApplications;	// IMP=0x000000010055a784
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;	// IMP=0x000000010055a5d4
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 forClient:(byref id)arg2;	// IMP=0x0000000100559fdc
- (void)checkDiminishedMode;	// IMP=0x0000000100559f54
- (void)onWakeRoutinedTimer;	// IMP=0x0000000100559c0c
- (void)stopWakeRoutinedTimer;	// IMP=0x0000000100559b10
- (void)startWakeRoutinedTimer;	// IMP=0x00000001005599f4
- (void)sendLocations;	// IMP=0x00000001005597e8
- (void)stopUpdatingLocation;	// IMP=0x00000001005596f4
- (void)startUpdatingLocation;	// IMP=0x00000001005595f0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100558f70
- (void)checkAuthorization;	// IMP=0x0000000100558dbc
- (void)flush;	// IMP=0x0000000100558cac
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x00000001005589b0
- (void)onClientManagerNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0000000100558844
- (void)addLocation:(id)arg1;	// IMP=0x00000001005582f8
- (void)dealloc;	// IMP=0x0000000100558278
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00000001005581f8
- (void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100558188
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001005580f8
- (void)fetchRecentLocationsOfInterestWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010055806c
- (void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100557ff0
- (void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100557f60
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100557ee4
- (void)fetchRoutineModeFromLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100557e68
- (void)fetchLocationOfInterestAtLocation:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100557e2c
- (void)stopLeechingLowConfidenceVisitsForClient:(byref id)arg1;	// IMP=0x0000000100557cec
- (void)startLeechingLowConfidenceVisitsForClient:(byref id)arg1;	// IMP=0x00000001005577ac
- (void)stopLeechingVisitsForClient:(byref id)arg1;	// IMP=0x0000000100557664
- (void)startLeechingVisitsForClient:(byref id)arg1;	// IMP=0x0000000100557124
- (void)stopMonitoringVisitsForClient:(byref id)arg1;	// IMP=0x0000000100556f8c
- (void)startMonitoringVisitsForClient:(byref id)arg1;	// IMP=0x0000000100556848
- (void)endService;	// IMP=0x000000010055659c
- (void)beginService;	// IMP=0x0000000100555a18
- (id)init;	// IMP=0x00000001005559d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
