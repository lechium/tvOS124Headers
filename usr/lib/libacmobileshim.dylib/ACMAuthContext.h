/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACCAuthContext.h>

@class NSString;

@interface ACMAuthContext : ACCAuthContext {

	NSString* _userPreferences;

}

@property (retain) NSString * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
-(void)setUserPreferences:(NSString *)arg1 ;
-(NSString *)userPreferences;
-(id)parametersDictionary;
-(BOOL)isDevicePwnd;
-(void)dealloc;
@end

