/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TITypologyTimer : NSObject {

	BOOL _foundFirstInput;
	double _elapsedTime;
	double _mostRecentTimestamp;
	double _maxTimeIntervalBetweenInputs;

}

@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double mostRecentTimestamp;                       //@synthesize mostRecentTimestamp=_mostRecentTimestamp - In the implementation block
@property (assign,nonatomic) double maxTimeIntervalBetweenInputs;              //@synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs - In the implementation block
@property (assign,nonatomic) BOOL foundFirstInput;                             //@synthesize foundFirstInput=_foundFirstInput - In the implementation block
-(void)addInputEventWithTimestamp:(double)arg1 ;
-(double)mostRecentTimestamp;
-(void)setMostRecentTimestamp:(double)arg1 ;
-(double)maxTimeIntervalBetweenInputs;
-(void)setMaxTimeIntervalBetweenInputs:(double)arg1 ;
-(BOOL)foundFirstInput;
-(void)setFoundFirstInput:(BOOL)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(double)elapsedTime;
@end
