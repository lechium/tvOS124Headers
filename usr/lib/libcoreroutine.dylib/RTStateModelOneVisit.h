/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RTStateModelLocation, NSUUID, RTStateModelEntryExit;

@interface RTStateModelOneVisit : NSObject <NSSecureCoding> {

	RTStateModelLocation* _location;
	NSUUID* _identifier;
	RTStateModelEntryExit* _EntryExit_s;
	long long _numOfDataPts;

}

@property (nonatomic,retain) RTStateModelLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * EntryExit_s;              //@synthesize EntryExit_s=_EntryExit_s - In the implementation block
@property (assign,nonatomic) long long numOfDataPts;                           //@synthesize numOfDataPts=_numOfDataPts - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)numOfDataPts;
-(void)setNumOfDataPts:(long long)arg1 ;
-(id)initWithLocation:(id)arg1 entryExit:(id)arg2 andNumOfDataPts:(long long)arg3 ;
-(RTStateModelEntryExit *)EntryExit_s;
-(void)setEntryExit_s:(RTStateModelEntryExit *)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 entryTimestamp:(double)arg4 exitTimestamp:(double)arg5 numOfDataPts:(long long)arg6 ;
-(id)init;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isComplete;
-(RTStateModelLocation *)location;
-(void)setLocation:(RTStateModelLocation *)arg1 ;
@end

