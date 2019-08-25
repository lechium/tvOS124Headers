/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface IMParentalControlsService : NSObject {

	BOOL _disableService;
	BOOL _forceWhiteList;
	NSSet* _whitelist;
	NSString* _name;

}

@property (assign) BOOL disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (assign) BOOL forceWhiteList;              //@synthesize forceWhiteList=_forceWhiteList - In the implementation block
@property (retain) NSSet * whitelist;                //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(NSSet *)whitelist;
-(void)setWhitelist:(NSSet *)arg1 ;
-(BOOL)disableService;
-(void)setDisableService:(BOOL)arg1 ;
-(BOOL)forceWhiteList;
-(void)setForceWhiteList:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
@end

