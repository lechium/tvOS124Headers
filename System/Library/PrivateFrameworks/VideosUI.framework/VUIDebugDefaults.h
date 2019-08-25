/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIDebugDefaults : NSObject {

	BOOL _debugUIEnabled;
	BOOL _metricsLoggingEnabled;
	BOOL _metricsExpandedLoggingEnabled;
	BOOL _enableDemoMode;

}

@property (assign,nonatomic) BOOL debugUIEnabled;                             //@synthesize debugUIEnabled=_debugUIEnabled - In the implementation block
@property (assign,nonatomic) BOOL metricsLoggingEnabled;                      //@synthesize metricsLoggingEnabled=_metricsLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL metricsExpandedLoggingEnabled;              //@synthesize metricsExpandedLoggingEnabled=_metricsExpandedLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL enableDemoMode;                             //@synthesize enableDemoMode=_enableDemoMode - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)debugUIEnabled;
-(void)setDebugUIEnabled:(BOOL)arg1 ;
-(BOOL)metricsLoggingEnabled;
-(void)setMetricsLoggingEnabled:(BOOL)arg1 ;
-(BOOL)metricsExpandedLoggingEnabled;
-(void)setMetricsExpandedLoggingEnabled:(BOOL)arg1 ;
-(BOOL)enableDemoMode;
-(void)setEnableDemoMode:(BOOL)arg1 ;
@end

