/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject {

	CADisplayMode* _currentMode;
	NSString* _overscanAdjustment;
	unsigned _connectionSeed;

}

@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (assign,nonatomic) unsigned connectionSeed; 
-(unsigned)connectionSeed;
-(void)setConnectionSeed:(unsigned)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(NSString *)overscanAdjustment;
-(void)dealloc;
-(CADisplayMode *)currentMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
@end
