/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNNavigationState.h>
#import <libobjc.A.dylib/MNCommuteSessionObserver.h>

@class NSString;

@interface MNNavigationStateCommute : MNNavigationState <MNCommuteSessionObserver> {

	unsigned long long _desiredCommuteSessionState;

}

@property (assign,nonatomic) unsigned long long desiredCommuteSessionState;              //@synthesize desiredCommuteSessionState=_desiredCommuteSessionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)noDestinationStateFromStateManager:(id)arg1 ;
-(void)prepareNavigationWithRouteDetails:(id)arg1 ;
-(void)startNavigationForRouteDetails:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)traceManager;
-(void)enterState;
-(void)leaveState;
-(unsigned long long)desiredCommuteSessionState;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)addCommuteDestinationSuggestion:(id)arg1 ;
-(void)updateWithLocation:(id)arg1 ;
-(void)setDesiredCommuteSessionState:(unsigned long long)arg1 ;
@end
