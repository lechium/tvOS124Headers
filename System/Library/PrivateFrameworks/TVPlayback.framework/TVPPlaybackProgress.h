/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPPlaybackProgress : NSObject {

	NSString* _firstTitle;
	NSString* _currentTitle;
	NSString* _lastTitle;
	double _progress;

}

@property (nonatomic,copy) NSString * firstTitle;                //@synthesize firstTitle=_firstTitle - In the implementation block
@property (nonatomic,copy) NSString * currentTitle;              //@synthesize currentTitle=_currentTitle - In the implementation block
@property (nonatomic,copy) NSString * lastTitle;                 //@synthesize lastTitle=_lastTitle - In the implementation block
@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
-(NSString *)firstTitle;
-(void)setFirstTitle:(NSString *)arg1 ;
-(void)setCurrentTitle:(NSString *)arg1 ;
-(NSString *)lastTitle;
-(void)setLastTitle:(NSString *)arg1 ;
-(id)init;
-(void)setProgress:(double)arg1 ;
-(NSString *)currentTitle;
-(double)progress;
@end

