/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CDPDBackupErrorProviderImpl.h>

@interface CDPDBackupIDMSErrorProvider : CDPDBackupErrorProviderImpl
-(id)recordNotFoundErrorWithUnderlyingError:(id)arg1 ;
-(BOOL)supportsErrorPresentation;
-(id)cooldownErrorWithUnderlyingError:(id)arg1 ;
-(void)handleSoftLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitError;
-(void)handleHardLimitError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)globalHardLimitErrorWithRecord:(id)arg1 ;
-(id)hardLimitErrorForRecord:(id)arg1 ;
@end

