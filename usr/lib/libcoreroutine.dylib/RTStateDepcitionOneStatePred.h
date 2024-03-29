/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTStateDepictionOnePredEl, NSUUID;

@interface RTStateDepcitionOneStatePred : NSObject {

	RTStateDepictionOnePredEl* _weekly;
	RTStateDepictionOnePredEl* _daily;
	NSUUID* _stateUUID;

}

@property (nonatomic,retain) RTStateDepictionOnePredEl * weekly;              //@synthesize weekly=_weekly - In the implementation block
@property (nonatomic,retain) RTStateDepictionOnePredEl * daily;               //@synthesize daily=_daily - In the implementation block
@property (nonatomic,retain) NSUUID * stateUUID;                              //@synthesize stateUUID=_stateUUID - In the implementation block
-(void)setWeekly:(RTStateDepictionOnePredEl *)arg1 ;
-(void)setDaily:(RTStateDepictionOnePredEl *)arg1 ;
-(RTStateDepictionOnePredEl *)weekly;
-(RTStateDepictionOnePredEl *)daily;
-(NSUUID *)stateUUID;
-(void)setStateUUID:(NSUUID *)arg1 ;
-(id)init;
@end

