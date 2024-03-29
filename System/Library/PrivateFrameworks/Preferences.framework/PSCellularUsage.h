/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PSCellularUsage : NSObject <NSCopying> {

	double _totalBytesUsed;
	double _totalRoamingBytesUsed;
	double _bytesUsedThisCycle;
	double _roamingBytesUsedThisCycle;
	double _bytesUsedLastCycle;
	double _roamingBytesUsedLastCycle;

}

@property (assign,nonatomic) double totalBytesUsed;                         //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (assign,nonatomic) double totalRoamingBytesUsed;                  //@synthesize totalRoamingBytesUsed=_totalRoamingBytesUsed - In the implementation block
@property (assign,nonatomic) double bytesUsedThisCycle;                     //@synthesize bytesUsedThisCycle=_bytesUsedThisCycle - In the implementation block
@property (assign,nonatomic) double roamingBytesUsedThisCycle;              //@synthesize roamingBytesUsedThisCycle=_roamingBytesUsedThisCycle - In the implementation block
@property (assign,nonatomic) double bytesUsedLastCycle;                     //@synthesize bytesUsedLastCycle=_bytesUsedLastCycle - In the implementation block
@property (assign,nonatomic) double roamingBytesUsedLastCycle;              //@synthesize roamingBytesUsedLastCycle=_roamingBytesUsedLastCycle - In the implementation block
-(id)plus:(id)arg1 ;
-(double)totalBytesUsed;
-(double)totalRoamingBytesUsed;
-(double)bytesUsedThisCycle;
-(double)roamingBytesUsedThisCycle;
-(double)bytesUsedLastCycle;
-(double)roamingBytesUsedLastCycle;
-(void)setTotalBytesUsed:(double)arg1 ;
-(void)setTotalRoamingBytesUsed:(double)arg1 ;
-(void)setBytesUsedThisCycle:(double)arg1 ;
-(void)setRoamingBytesUsedThisCycle:(double)arg1 ;
-(void)setBytesUsedLastCycle:(double)arg1 ;
-(void)setRoamingBytesUsedLastCycle:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

