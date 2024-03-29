/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTCoreDataTransformable.h>

@class NSUUID, NSDate, NSArray, NSString;

@interface RTFingerprint : NSObject <RTCoreDataTransformable> {

	NSUUID* _identifier;
	unsigned long long _settledState;
	NSDate* _start;
	NSArray* _accessPoints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
@property (nonatomic,readonly) NSDate * start;                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                       //@synthesize accessPoints=_accessPoints - In the implementation block
+(id)createWithFingerprintMO:(id)arg1 ;
-(NSArray *)accessPoints;
-(id)managedObjectWithContext:(id)arg1 ;
-(unsigned long long)settledState;
-(id)initWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 accessPoints:(id)arg4 ;
-(id)init;
-(NSUUID *)identifier;
-(NSString *)description;
-(NSDate *)start;
@end

