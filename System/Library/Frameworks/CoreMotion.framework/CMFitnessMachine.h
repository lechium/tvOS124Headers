/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject {

	CMFitnessMachineInternal* _internal;

}

@property (nonatomic,readonly) CMFitnessMachineInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(void)feedFitnessMachineData:(id)arg1 ;
-(CMFitnessMachineInternal *)_internal;
-(id)init;
-(void)dealloc;
@end

