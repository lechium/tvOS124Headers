/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface TIMecabraIMLogger : NSObject {

	NSMutableString* _loggedMessage;

}

@property (nonatomic,retain) NSMutableString * loggedMessage;              //@synthesize loggedMessage=_loggedMessage - In the implementation block
+(BOOL)isLoggingEnabled;
-(NSMutableString *)loggedMessage;
-(void)beginLogging;
-(void)markTime:(unsigned long long)arg1 ;
-(id)logFilePath;
-(void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2 ;
-(void)writeLogToFile;
-(void)setLoggedMessage:(NSMutableString *)arg1 ;
@end

