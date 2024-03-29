/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSBaseXPCServer.h>
#import <libobjc.A.dylib/FBSServiceFacilityManaging.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface FBServiceFacilityServer : BSBaseXPCServer <FBSServiceFacilityManaging> {

	NSMutableDictionary* _facilitiesByIdentifier;
	NSMutableSet* _completedMilestones;
	NSMutableDictionary* _suspendedFacilitiesByIdentifier;
	NSMutableSet* _pendingConnects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)ping;
-(void)_evaluateSuspendedFacility:(id)arg1 ;
-(void)_evaluateSuspendedFacilities;
-(void)_handleConnect:(id)arg1 forClient:(id)arg2 facilityID:(id)arg3 ;
-(BOOL)_areFacilityPrerequisitesSatisfied:(id)arg1 ;
-(void)addFacility:(id)arg1 ;
-(void)removeFacility:(id)arg1 ;
-(void)noteMilestoneReached:(id)arg1 ;
-(Class)queue_classForNewClientConnection:(id)arg1 ;
-(void)queue_clientAdded:(id)arg1 ;
-(void)queue_clientRemoved:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

