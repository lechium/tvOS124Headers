/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMGyroData.h>

@class NSDate;

@interface CMRecordedGyroData : CMGyroData {

	double _startDateValue;
	SCD_Struct_CM4 _rotationRate;
	double _timestampValue;
	float _temperatureValue;
	unsigned long long _identifier;

}

@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate; 
@property (readonly) double startTime; 
@property (readonly) float temperature; 
+(BOOL)supportsSecureCoding;
-(float)temperature;
-(void)resetWithData:(CMGyro50*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(id)initWithData:(CMGyro50*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(NSDate *)startDate;
-(SCD_Struct_CM4)rotationRate;
-(void)dealloc;
-(unsigned long long)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(double)startTime;
@end

