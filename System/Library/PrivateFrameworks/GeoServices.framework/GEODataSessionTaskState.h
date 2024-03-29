/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOCapturedState.h>

@interface GEODataSessionTaskState : GEOCapturedState {

	long long _rawPointer;
	unsigned _taskIdentifier;
	long long _completedSubtaskPointer;
	long long _urlTaskPointer;
	long long _xpcTaskPointer;
	double _now;
	double _startTime;
	double _endTime;
	int _requestKind;
	unsigned long long _outgoingPayloadSize;

}
+(const char*)decoderType;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

