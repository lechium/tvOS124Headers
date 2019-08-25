/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, CPLRecordChange, CPLRecordStatus;

@interface _CPLTransientStatus : NSObject {

	NSDate* _date;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CPLRecordChange * record;                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) CPLRecordStatus * status; 
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3 ;
-(CPLRecordChange *)record;
-(unsigned long long)generation;
-(NSDate *)date;
-(CPLRecordStatus *)status;
@end
