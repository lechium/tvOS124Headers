/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TZPreferencesController : NSObject

@property (nonatomic,readonly) BOOL updatesEnabled; 
@property (nonatomic,readonly) long long loggingLevel; 
+(id)sharedPreferencesController;
-(void)preferencesChanged:(id)arg1 ;
-(BOOL)updatesEnabled;
-(long long)loggingLevel;
-(id)init;
@end
