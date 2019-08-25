/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLCompassDatabaseProtocol <CLNotifierServiceProtocol>
@required
-(void)dumpDatabase:(id)arg1 onCompletion:(/*^block*/id)arg2;
-(void)getBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2;
-(void)setBias:(SCD_Struct_CM1)arg1 withMagneticField:(SCD_Struct_CM1)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
-(void)doAsync:(/*^block*/id)arg1;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1;
-(int)syncgetPendingSetBiasCount;
-(BOOL)syncgetLookupBiasWithMagneticField:(SCD_Struct_CM1)arg1 acceleration:(SCD_Struct_CM1)arg2 bias:(SCD_Struct_CM1*)arg3 level:(int*)arg4 noResults:(BOOL*)arg5;

@end

