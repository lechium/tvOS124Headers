/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PSYActivityInfo, NSError;

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding> {

	BOOL _finishedSending;
	BOOL _sawADropout;
	PSYActivityInfo* _activityInfo;
	double _activityProgress;
	NSError* _error;
	unsigned long long _activityState;
	long long _interruptionCount;
	unsigned long long _startDropoutCount;

}

@property (nonatomic,readonly) PSYActivityInfo * activityInfo;                             //@synthesize activityInfo=_activityInfo - In the implementation block
@property (nonatomic,readonly) double activityProgress;                                    //@synthesize activityProgress=_activityProgress - In the implementation block
@property (nonatomic,readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (getter=isFinishedSending,nonatomic,readonly) BOOL finishedSending;              //@synthesize finishedSending=_finishedSending - In the implementation block
@property (nonatomic,readonly) unsigned long long activityState;                           //@synthesize activityState=_activityState - In the implementation block
@property (nonatomic,readonly) long long interruptionCount;                                //@synthesize interruptionCount=_interruptionCount - In the implementation block
@property (nonatomic,readonly) unsigned long long startDropoutCount;                       //@synthesize startDropoutCount=_startDropoutCount - In the implementation block
@property (nonatomic,readonly) BOOL sawADropout;                                           //@synthesize sawADropout=_sawADropout - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)sawADropout;
-(double)activityProgress;
-(unsigned long long)activityState;
-(PSYActivityInfo *)activityInfo;
-(unsigned long long)startDropoutCount;
-(id)initWithActivityInfo:(id)arg1 progress:(double)arg2 error:(id)arg3 state:(unsigned long long)arg4 finishedSending:(BOOL)arg5 interruptionCount:(long long)arg6 startDropoutCount:(unsigned long long)arg7 sawADropout:(BOOL)arg8 ;
-(id)syncSessionActivityByUpdatingProgress:(double)arg1 ;
-(BOOL)isFinishedSending;
-(long long)interruptionCount;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
@end

