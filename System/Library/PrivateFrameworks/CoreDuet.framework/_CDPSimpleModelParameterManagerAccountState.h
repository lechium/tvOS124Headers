/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CDPSimpleModelParameterManagerTuningValue, NSMutableArray, _CDPModelTuningState;

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding> {

	_CDPSimpleModelParameterManagerTuningValue* _previousBestTuningValue;
	NSMutableArray* _tuningValues;
	_CDPModelTuningState* _lastTuningState;

}

@property (nonatomic,retain) _CDPSimpleModelParameterManagerTuningValue * previousBestTuningValue;              //@synthesize previousBestTuningValue=_previousBestTuningValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * tuningValues;                                                     //@synthesize tuningValues=_tuningValues - In the implementation block
@property (nonatomic,retain) _CDPModelTuningState * lastTuningState;                                            //@synthesize lastTuningState=_lastTuningState - In the implementation block
+(BOOL)supportsSecureCoding;
-(_CDPSimpleModelParameterManagerTuningValue *)previousBestTuningValue;
-(void)setPreviousBestTuningValue:(_CDPSimpleModelParameterManagerTuningValue *)arg1 ;
-(NSMutableArray *)tuningValues;
-(void)setTuningValues:(NSMutableArray *)arg1 ;
-(_CDPModelTuningState *)lastTuningState;
-(void)setLastTuningState:(_CDPModelTuningState *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
