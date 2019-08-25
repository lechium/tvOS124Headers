/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMFSession;

@interface IMDLocationSharingController : NSObject {

	FMFSession* _session;

}
+(void)addLocationShareItemToMatchingChats:(id)arg1 ;
+(void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(BOOL)arg3 broadcastChanges:(BOOL)arg4 ;
+(id)sharedInstance;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 account:(id)arg3 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2 ;
-(void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3 ;
-(void)receivedIncomingLocationSharePacket:(id)arg1 ;
-(void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

