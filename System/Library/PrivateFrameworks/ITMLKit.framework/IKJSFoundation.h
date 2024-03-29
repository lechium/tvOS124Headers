/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKAppDeviceConfig;
@class IKAppContext, NSMutableDictionary;

@interface IKJSFoundation : NSObject {

	IKAppContext* _appContext;
	NSMutableDictionary* _jsTimers;
	NSMutableDictionary* _dateFormatterCache;
	id<IKAppDeviceConfig> _deviceConfig;

}

@property (assign,nonatomic,__weak) IKAppContext * appContext;                       //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * jsTimers;                         //@synthesize jsTimers=_jsTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dateFormatterCache;               //@synthesize dateFormatterCache=_dateFormatterCache - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppDeviceConfig> deviceConfig;              //@synthesize deviceConfig=_deviceConfig - In the implementation block
-(id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ;
-(void)stopTimers;
-(id)setInterval:(id)arg1 time:(long long)arg2 ;
-(void)clearInterval:(id)arg1 ;
-(id)setTimeout:(id)arg1 time:(long long)arg2 ;
-(void)clearTimeout:(id)arg1 ;
-(void)clearCookies;
-(id)getCookieForURL:(id)arg1 useSSCookieStorage:(BOOL)arg2 ;
-(void)setCookie:(id)arg1 useSSCookieStorage:(BOOL)arg2 ;
-(id<IKAppDeviceConfig>)deviceConfig;
-(void)setDeviceConfig:(id<IKAppDeviceConfig>)arg1 ;
-(id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(BOOL)arg3 ;
-(NSMutableDictionary *)jsTimers;
-(void)_jsTimerFired:(id)arg1 ;
-(id)_stringForKey:(id)arg1 fromDict:(id)arg2 ;
-(void)setJsTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dateFormatterCache;
-(void)setDateFormatterCache:(NSMutableDictionary *)arg1 ;
-(void)_clearTimer:(id)arg1 ;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
@end

