/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSemanticContextServices/TVSCSemanticContext.h>

@class TVSCSemanticObject, NSArray;

@interface TVSCApplicationStateSemanticContext : TVSCSemanticContext {

	TVSCSemanticObject* _mainEntity;
	NSArray* _commands;

}

@property (nonatomic,retain) TVSCSemanticObject * mainEntity;              //@synthesize mainEntity=_mainEntity - In the implementation block
@property (nonatomic,retain) NSArray * commands;                           //@synthesize commands=_commands - In the implementation block
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)linkedDataDictionary;
-(void)setMainEntity:(TVSCSemanticObject *)arg1 ;
-(TVSCSemanticObject *)mainEntity;
@end

