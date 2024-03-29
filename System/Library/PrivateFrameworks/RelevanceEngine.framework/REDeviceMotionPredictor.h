/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@class CMMotionActivityManager;

@interface REDeviceMotionPredictor : REPredictor {

	CMMotionActivityManager* _activityManager;
	BOOL _isStationary;
	unsigned long long _type;

}
+(id)supportedFeatures;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_updateWithActivity:(id)arg1 ;
-(id)init;
-(void)resume;
-(void)pause;
@end

