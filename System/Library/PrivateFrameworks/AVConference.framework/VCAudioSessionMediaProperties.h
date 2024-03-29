/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCAudioSessionMediaProperties : NSObject {

	double _preferredSampleRate;
	double _preferredBlockSize;
	int _operatingMode;
	unsigned _vpOperatingMode;
	AudioStreamBasicDescription _inputFormat;
	AudioStreamBasicDescription _outputFormat;
	int _processId;
	BOOL _sessionActive;

}

@property (assign,nonatomic) double preferredSampleRate;                             //@synthesize preferredSampleRate=_preferredSampleRate - In the implementation block
@property (assign,nonatomic) double preferredBlockSize;                              //@synthesize preferredBlockSize=_preferredBlockSize - In the implementation block
@property (assign,nonatomic) int operatingMode;                                      //@synthesize operatingMode=_operatingMode - In the implementation block
@property (assign,nonatomic) unsigned vpOperatingMode;                               //@synthesize vpOperatingMode=_vpOperatingMode - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription inputFormat;                //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription outputFormat;               //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) int processId;                                          //@synthesize processId=_processId - In the implementation block
@property (assign,getter=isSessionActive,nonatomic) BOOL sessionActive;              //@synthesize sessionActive=_sessionActive - In the implementation block
-(void)setOutputFormat:(AudioStreamBasicDescription)arg1 ;
-(AudioStreamBasicDescription)outputFormat;
-(void)setOperatingMode:(int)arg1 ;
-(int)operatingMode;
-(double)preferredBlockSize;
-(double)preferredSampleRate;
-(void)setPreferredSampleRate:(double)arg1 ;
-(void)setPreferredBlockSize:(double)arg1 ;
-(void)setVpOperatingMode:(unsigned)arg1 ;
-(unsigned)vpOperatingMode;
-(void)setInputFormat:(AudioStreamBasicDescription)arg1 ;
-(void)setProcessId:(int)arg1 ;
-(void)setSessionActive:(BOOL)arg1 ;
-(BOOL)isSessionActive;
-(AudioStreamBasicDescription)inputFormat;
-(int)processId;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

