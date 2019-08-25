/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDContextPersisting
@required
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2;
-(void)saveRegistration:(id)arg1;
-(void)deleteRegistration:(id)arg1;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteDataCreatedBefore:(id)arg1;
-(void)deleteAllData;

@end

