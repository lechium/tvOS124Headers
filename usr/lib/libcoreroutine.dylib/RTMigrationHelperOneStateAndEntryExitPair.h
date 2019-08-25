/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject {

	RTStateModelOneState* _oneState;
	RTStateModelEntryExit* _entryExit;

}

@property (nonatomic,retain) RTStateModelOneState * oneState;                //@synthesize oneState=_oneState - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * entryExit;              //@synthesize entryExit=_entryExit - In the implementation block
-(RTStateModelOneState *)oneState;
-(RTStateModelEntryExit *)entryExit;
-(id)initWithOneState:(id)arg1 entryExit:(id)arg2 ;
-(void)setOneState:(RTStateModelOneState *)arg1 ;
-(void)setEntryExit:(RTStateModelEntryExit *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

