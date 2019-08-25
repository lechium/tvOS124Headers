/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEODirectionsFeedback, GEODirectionsFeedbackLogMessage, NSMutableArray;

@interface GEODirectionsFeedbackCollector : NSObject {

	GEODirectionsFeedback* _currentDirectionsFeedback;
	GEODirectionsFeedbackLogMessage* _currentFeedbackLogMessage;
	double _currentDirectionsModeStartTime;
	NSMutableArray* _navigationModes;

}

@property (nonatomic,retain) GEODirectionsFeedbackLogMessage * currentFeedbackLogMessage;              //@synthesize currentFeedbackLogMessage=_currentFeedbackLogMessage - In the implementation block
@property (nonatomic,retain) GEODirectionsFeedback * currentDirectionsFeedback;                        //@synthesize currentDirectionsFeedback=_currentDirectionsFeedback - In the implementation block
-(void)setCurrentDirectionsFeedback:(GEODirectionsFeedback *)arg1 ;
-(GEODirectionsFeedbackLogMessage *)currentFeedbackLogMessage;
-(void)setCurrentFeedbackLogMessage:(GEODirectionsFeedbackLogMessage *)arg1 ;
-(void)_updateFeedbackSessionWithResponseID:(id)arg1 ;
-(GEODirectionsFeedback *)currentDirectionsFeedback;
-(void)addStepFeedback:(id)arg1 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)startFeedbackSessionForResponseID:(id)arg1 withNavigationType:(int)arg2 ;
-(void)setupFeedbackSessionWithResponseID:(id)arg1 ;
-(void)addGuidanceEventFeedback:(id)arg1 ;
-(void)addRouteID:(id)arg1 routeIndex:(unsigned)arg2 stepID:(unsigned)arg3 completeStep:(BOOL)arg4 ;
-(void)setFinalLocation:(id)arg1 asArrival:(BOOL)arg2 ;
-(void)setAudioFeedback:(GEONavigationAudioFeedback*)arg1 ;
-(void)changeNavigationType:(int)arg1 ;
-(void)endFeedbackSessionWithTracePath:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
@end

