/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSLockdownDefaults, BKSIAPDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults {

	BKSLockdownDefaults* _lazy_lockdownDefaults;
	BKSIAPDefaults* _lazy_iapDefaults;
	BKSPersistentConnectionDefaults* _lazy_persistentConnectionDefaults;
	BKSSpringBoardDefaults* _lazy_springBoardDefaults;

}

@property (nonatomic,retain,readonly) BKSLockdownDefaults * lockdownDefaults; 
@property (nonatomic,retain,readonly) BKSIAPDefaults * iapDefaults; 
@property (nonatomic,retain,readonly) BKSPersistentConnectionDefaults * persistentConnectionDefaults; 
@property (nonatomic,retain,readonly) BKSSpringBoardDefaults * springBoardDefaults; 
-(BKSIAPDefaults *)iapDefaults;
-(BKSLockdownDefaults *)lockdownDefaults;
-(BKSPersistentConnectionDefaults *)persistentConnectionDefaults;
-(BKSSpringBoardDefaults *)springBoardDefaults;
@end

