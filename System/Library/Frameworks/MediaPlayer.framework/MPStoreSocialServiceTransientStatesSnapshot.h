/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {

	NSMutableDictionary* _transientFollowStatesPerProfileID;
	NSMutableDictionary* _transientFollowPendingRequestStatesPerProfileID;

}
-(void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3 ;
-(long long)transientFollowStateForPerson:(id)arg1 ;
-(long long)transientFollowPendingRequestStateForPerson:(id)arg1 ;
-(id)init;
@end
