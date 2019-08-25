/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLRangingPeer, NSDate, NSNumber;

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding> {

	id _internal;
	BOOL _initiator;

}

@property (nonatomic,copy,readonly) _CLRangingPeer * peer; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSNumber * distanceMeters; 
@property (nonatomic,copy,readonly) NSNumber * accuracyMeters; 
@property (getter=isInitiator,nonatomic,readonly) BOOL initiator;              //@synthesize initiator=_initiator - In the implementation block
@property (nonatomic,readonly) BOOL shouldUnlock; 
+(BOOL)supportsSecureCoding;
-(BOOL)isInitiator;
-(_CLRangingPeer *)peer;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 shouldUnlock:(BOOL)arg6 ;
-(id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 ;
-(id)initWithPeer:(id)arg1 timestamp:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(BOOL)arg5 ;
-(NSNumber *)accuracyMeters;
-(BOOL)shouldUnlock;
-(NSNumber *)distanceMeters;
-(BOOL)initiator;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSDate *)timestamp;
@end

