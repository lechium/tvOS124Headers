/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CPLTimingStatistic : NSObject {

	unsigned long long _recordCount;
	unsigned long long _batchCount;
	unsigned long long _errorCount;
	double _duration;

}
-(void)updateWithDuration:(double)arg1 recordCount:(unsigned long long)arg2 error:(BOOL)arg3 ;
-(id)description;
@end

