/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLGyroCalibrationDatabaseProtocol <CLNotifierServiceProtocol>
@required
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(BOOL)syncgetWipeDatabase;
-(int)syncgetNumTemperatures;
-(BOOL)syncgetSupportsMiniCalibration;
-(BOOL)syncgetBiasFit:(SCD_Struct_CM27*)arg1;
-(void)doAsync:(/*^block*/id)arg1;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1;
-(BOOL)syncgetGyroStatsWithBias:(SCD_Struct_CM1*)arg1 slope:(SCD_Struct_CM1*)arg2 l2Error:(SCD_Struct_CM1*)arg3 isDynamic:(BOOL)arg4 deltaBias:(SCD_Struct_CM1*)arg5 deltaSlope:(SCD_Struct_CM1*)arg6 deltaError:(SCD_Struct_CM1*)arg7 isDeltaDynamic:(BOOL)arg8;
-(int)syncgetMaxDynamicTemperature;
-(void)startFactoryGYTT;
-(int)syncgetNonFactoryRoundCount;
-(double)syncgetLastMiniCalibration;
-(BOOL)syncgetInsertWithBias:(const SCD_Struct_CM1*)arg1 variance:(const SCD_Struct_CM1*)arg2 temperature:(float)arg3 timestamp:(double)arg4;

@end

