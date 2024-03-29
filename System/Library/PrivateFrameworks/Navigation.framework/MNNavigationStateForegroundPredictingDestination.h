/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNNavigationStateCommute.h>

@interface MNNavigationStateForegroundPredictingDestination : MNNavigationStateCommute
-(void)stopPredictingDestinations;
-(void)enterState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(unsigned long long)desiredResourcePolicy;
-(unsigned long long)desiredCommuteSessionState;
-(void)updateMapsActive:(BOOL)arg1 ;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)commuteSessionDidArrive:(id)arg1 ;
-(long long)type;
@end

