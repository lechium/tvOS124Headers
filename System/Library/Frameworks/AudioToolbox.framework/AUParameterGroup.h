/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUParameterNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableDictionary;

@interface AUParameterGroup : AUParameterNode <NSSecureCoding> {

	NSArray* _children;
	NSMutableDictionary* _childIndicesByIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * childIndicesByIdentifier;              //@synthesize childIndicesByIdentifier=_childIndicesByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                                        //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSArray * allParameters; 
+(BOOL)supportsSecureCoding;
-(void)_serialize:(CASerializer*)arg1 ;
-(NSArray *)allParameters;
-(void)_deserialize:(CADeserializer*)arg1 ;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(id)initWithTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4 ;
-(void)_indexChildren;
-(id)initWithID:(id)arg1 name:(id)arg2 children:(id)arg3 ;
-(NSMutableDictionary *)childIndicesByIdentifier;
-(id)initWithChildren:(id)arg1 ;
-(void)setChildIndicesByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)isGroup;
-(NSArray *)children;
@end

