/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) BOOL secure; 
+(id)serverWithOptions:(id)arg1 ;
+(id)server;
+(id)serverIfRunning;
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(void)setRendererFlags:(unsigned)arg1 ;
-(unsigned)rendererFlags;
-(id)secureModeViolations;
-(id)insecureProcessIds;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(BOOL)isMirroringEnabled;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(void)removeAllDisplays;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_init;
-(NSArray *)displays;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
@end

