/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <libobjc.A.dylib/MPPProtobufferCoding.h>

@class NSString;

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	long long* _persistentIDs;
	BOOL _shouldContain;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;                    //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) const long long* persistentIDs;              //@synthesize persistentIDs=_persistentIDs - In the implementation block
@property (nonatomic,readonly) BOOL shouldContain;                          //@synthesize shouldContain=_shouldContain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(BOOL)arg3 ;
+(BOOL)supportsSecureCoding;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(BOOL)shouldContain;
-(const long long*)persistentIDs;
-(id)ML3PredicateForContainer;
-(id)ML3PredicateForTrack;
-(id)_ML3PredicateForEntityClass:(Class)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

