/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTCoreDataTransformable.h>

@class NSUUID, NSDate, NSString;

@interface RTLearnedTransition : NSObject <RTCoreDataTransformable> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _stopDate;
	NSUUID* _visitIdentifierOrigin;
	NSUUID* _visitIdentifierDestination;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	unsigned long long _predominantMotionActivityType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * stopDate;                                           //@synthesize stopDate=_stopDate - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierOrigin;                              //@synthesize visitIdentifierOrigin=_visitIdentifierOrigin - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierDestination;                         //@synthesize visitIdentifierDestination=_visitIdentifierDestination - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                       //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long predominantMotionActivityType;              //@synthesize predominantMotionActivityType=_predominantMotionActivityType - In the implementation block
-(NSDate *)startDate;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(unsigned long long)predominantMotionActivityType;
-(NSDate *)stopDate;
-(NSUUID *)visitIdentifierOrigin;
-(NSUUID *)visitIdentifierDestination;
-(id)managedObjectWithContext:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 creationDate:(id)arg6 expirationDate:(id)arg7 predominantMotionActivityType:(unsigned long long)arg8 ;
-(id)initWithTransitionMO:(id)arg1 ;
-(id)initWithlocationOfInterestTransitionMO:(id)arg1 ;
-(void)setPredominantMotionActivityType:(unsigned long long)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

