/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PBSMigrator : NSObject {

	NSMutableArray* _allMigrations;

}

@property (nonatomic,readonly) NSMutableArray * allMigrations;              //@synthesize allMigrations=_allMigrations - In the implementation block
+(id)_contextForCurrentOS;
+(BOOL)_performMigrationWithContext:(id)arg1 ;
+(void)registerMigration:(id)arg1 ;
+(BOOL)performMigrationIfNeeded;
+(void)_resetMigrator;
-(NSMutableArray *)allMigrations;
-(void)_performMigrationsWithContext:(id)arg1 ;
-(id)init;
-(id)_init;
@end

