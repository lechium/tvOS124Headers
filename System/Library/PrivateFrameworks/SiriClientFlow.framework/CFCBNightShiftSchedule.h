/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class CFCBNightShiftTransitionTime, NSString;

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>

@property (nonatomic,retain) CFCBNightShiftTransitionTime * fromTime; 
@property (nonatomic,retain) CFCBNightShiftTransitionTime * toTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftSchedule;
+(id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(CFCBNightShiftTransitionTime *)fromTime;
-(void)setFromTime:(CFCBNightShiftTransitionTime *)arg1 ;
-(CFCBNightShiftTransitionTime *)toTime;
-(void)setToTime:(CFCBNightShiftTransitionTime *)arg1 ;
@end

