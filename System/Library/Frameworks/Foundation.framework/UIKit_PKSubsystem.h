/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKModularService.h>

@class NSDictionary, NSString;

@interface UIKit_PKSubsystem : NSObject <PKModularService> {

	BOOL _initialized;
	BOOL _plugInKitProcess;
	NSDictionary* _infoDictionary;

}

@property (nonatomic,copy) NSDictionary * infoDictionary;                                  //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (assign,getter=isPlugInKitProcess,nonatomic) BOOL plugInKitProcess;              //@synthesize plugInKitProcess=_plugInKitProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initForPlugInKit;
+(id)sharedInstance;
-(void)endUsing:(id)arg1 ;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(void)beginUsing:(id)arg1 withBundle:(id)arg2 ;
-(void)setPlugInKitProcess:(BOOL)arg1 ;
-(NSDictionary *)infoDictionary;
-(BOOL)isPlugInKitProcess;
@end

